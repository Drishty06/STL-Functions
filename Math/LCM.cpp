//used for : to find LCM of 2 numbers

//syntax : boost::math::lcm (m,n)
//m,n are 2 numbers

//return : 0 if either m or n are zero,else lcm of mod(m) and mod(n).

#include <iostream>
#include <boost/math/common_factor.hpp>
  
using namespace std;
  
int main()
{
    cout << "LCM(10,20) = " << boost::math::lcm(10,20) 
         << endl;
    return 0;
}

//output : 20
//link : https://www.geeksforgeeks.org/inbuilt-function-calculating-lcm-cpp/
