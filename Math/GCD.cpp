// Used For : Find GCD of 2 numbers

// Syntax for C++14 :

//  Library: 'algorithm'
//  __gcd(m, n) 
// Parameter :  m, n
// Return Value :  0 if both m and n are zero, 
// else gcd of m and n.


// Syntax for C++17 :

// Library: 'numeric'
// gcd(m, n)
// Parameter :  m, n
// Return Value :  0 if both m and n are zero,
// else gcd of m and n.

Code : 

// gcd function of C++ STL
#include <iostream>
#include <algorithm>
// #include<numeric> for C++17
 
using namespace std;
 
int main()
{
    cout << "gcd(6, 20) = " << __gcd(6, 20) << endl; // gcd(2.0,8) for C++17
}

// For More Info : https://www.geeksforgeeks.org/stdgcd-c-inbuilt-function-finding-gcd/
