#include <boost/spirit/home/phoenix/core.hpp>
#include <boost/spirit/home/phoenix/operator.hpp>

#include <vector>
#include <algorithm>
#include <iostream>

using boost::phoenix::arg_names::arg1;

int main() {
    std::vector<int> data(10, 1);
    // Use Boost.Phoenix to add 42 to all the elements of an array.
    std::transform(data.begin(), data.end(), data.begin(), arg1 + 42 );

    int sum = 0;
    std::for_each(data.begin(), data.end(), sum += arg1);
    std::cout << data.back() << std::endl;
    std::cout << sum << std::endl;
}
