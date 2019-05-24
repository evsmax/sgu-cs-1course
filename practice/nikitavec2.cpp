#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>

int main()
{
    std::cout << "Enter array( enter EOF for terminate ):\n";
    std::vector<int> vec( std::istream_iterator<int> (std::cin), std::istream_iterator<int> () );
    vec.erase( std::remove_if( vec.begin(), vec.end(), [] (int x)
    {
        x = abs(x);
        std::ostringstream ost;
        ost << x;
        std::string temp( ost.str() );
        std::sort( temp.begin(), temp.end() );
        return std::unique( temp.begin(), temp.end() ) == temp.end() ;

    } ), vec.end() );
    std::copy( vec.begin(), vec.end(), std::ostream_iterator<int> (std::cout, " ") );
}
