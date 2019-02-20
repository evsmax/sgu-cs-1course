module Expr where

import Maybe
import Char

pupd1 f (x,y) = (f x, y)
data Op = MkOp String
  deriving Show

data Expr1
  = Var1 String
  | Num Integer
  | Bin Expr1 Op Expr1
 deriving Show

expr1 = Bin
            (Bin (Var1 "a")
                 (MkOp "+")
                 (Var1 "b") )
            (MkOp "*")
            (Var1 "c")

plus x y = Bin x (MkOp "+") y
mult x y = Bin x (MkOp "*") y

expr2 = (Var1 "a" `plus` Var1 "b") `mult` Var1 "c"

showExpr :: Expr1 -> String
showExpr (Var1 v) = v
showExpr (Num n) = show n
showExpr (Bin e1 op e2) =
   '(' : showExpr e1 ++ showOp op ++ showExpr e2 ++ ")"

showOp :: Op -> String
showOp (MkOp s) = s

parseFactor :: [Token] -> Maybe (Expr1, [Token])
parseFactor ((Ident v)  : rest) = Just (Var1 v, rest)
parseFactor ((Number n) : rest) = Just (Num n, rest)
parseFactor ((Sep '(')  : rest) = case parseExpr0 rest of
  Just (e, Sep ')' : rest1) -> Just (e, rest1)
  _                         -> Nothing
parseFactor _                   = Nothing

parseAddOp :: [Token] -> Maybe (Op, [Token])
parseAddOp ((Sep '+') : rest) = Just (MkOp "+", rest)
parseAddOp ((Sep '-') : rest) = Just (MkOp "-", rest)
parseAddOp _                  = Nothing

parseMultOp :: [Token] -> Maybe (Op, [Token])
parseMultOp ((Sep '*') : rest) = Just (MkOp "*", rest)
parseMultOp ((Sep '/') : rest) = Just (MkOp "/", rest)
parseMultOp _                  = Nothing

parseExpr1 :: [Token] -> Maybe (Expr1, [Token])
parseExpr1 input = case parseTerm input of
  Nothing -> Nothing
  Just (e1, rest1) -> case parseAddOp rest1 of
    Nothing -> Just (e1, rest1)
    Just (op, rest2) -> case parseExpr1 rest2 of
      Nothing -> Nothing                         -- Syntax Error!
      Just (e2, rest3) -> Just ( Bin e1 op e2,  rest3)

parseExpr2 :: [Token] -> Maybe (Expr1, [Token])
parseExpr2 input = case parseExpr2 input of
  Nothing -> parseTerm input
  Just (e1, rest1) -> case parseAddOp rest1 of
    Nothing -> Just (e1, rest1)
    Just (op, rest2) -> case parseTerm rest2 of
      Nothing -> parseTerm input
      Just (e2, rest3) -> Just ( Bin e1 op e2,  rest3)

parseExpr0 :: [Token] -> Maybe (Expr1, [Token])
parseExpr0 = parseTerms id

parseTerms :: (Expr1 -> Expr1) -> [Token] -> Maybe (Expr1, [Token])
parseTerms wrap input = case parseTerm input of
  Nothing -> Nothing
  Just (e1, rest1) -> case parseAddOp rest1 of
    Nothing -> Just (wrap e1, rest1)
    Just (op, rest2) -> parseTerms (Bin (wrap e1) op) rest2

parseTerm :: [Token] -> Maybe (Expr1, [Token])
parseTerm = parseFactors id

parseFactors :: (Expr1 -> Expr1) -> [Token] -> Maybe (Expr1, [Token])
parseFactors wrap input = case parseFactor input of
  Nothing -> Nothing
  Just (e1, rest1) -> case parseMultOp rest1 of
    Nothing -> Just (wrap e1, rest1)
    Just (op, rest2) -> parseFactors (Bin e1 op) rest2

parseExpression1 :: String -> Expr1
parseExpression1 s = fst (fromJust (parseExpr0 (simpleLexer s)))

-- showExpr . fst . fromJust . parseExpr1 $ simpleLexer "a-b+c-d+e-f+g"
-- showExpr . fst . fromJust . parseExpr0  $ simpleLexer "a-b+c-d+e-f+g"
-- fst (fromJust (parseExpr0 (simpleLexer "1 + x * (x + y)")))

data Token = Number Integer
           | Sep Char
           | Ident String deriving (Show)

simpleLexer :: String -> [Token]
simpleLexer (c:cs)
  | isDigit c  =  lexNumber [c] cs
  | isAlpha c  =  lexIdent  [c] cs
  | isSep   c  =  Sep c : simpleLexer cs
  | isSpace c  =  simpleLexer cs
  | otherwise  =  error ("simpleLexer: illegal character: " ++ take 20 (c:cs))
simpleLexer [] = []

lexNumber, lexIdent :: String -> String -> [Token]
lexNumber prefix (c:cs) | isDigit c     =  lexNumber (prefix ++ [c]) cs
lexNumber prefix s                      =  Number (read prefix) : simpleLexer s
lexIdent  prefix (c:cs) | isAlphaNum c  =  lexIdent (prefix ++ [c]) cs
lexIdent  prefix s                      =  Ident prefix : simpleLexer s

isSep c = c `elem` "(){};,+-*/"

data Expr = Const Integer
          | Var String
          | Add Expr Expr
          | Mult Expr Expr deriving(Eq, Show)

parseExpression :: Expr1 -> Expr
parseExpression e = case e of
                Num i        -> Const i
                Var1 s       -> Var s
                Bin e1 op e2 -> case op of
                  MkOp "+" -> Add (parseExpression e1) (parseExpression e2)
                  MkOp "*" -> Mult (parseExpression e1) (parseExpression e2)
                  _        -> error "Недопустимая операция"

parseExpr :: String -> Expr
parseExpr str = parseExpression (parseExpression1 str)

-- parseExpr "1 + x * (x + y)"