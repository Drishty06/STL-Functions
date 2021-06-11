// This example displays information about the execution time of a function call:


#include <iostream>
#include <chrono>    // header file
 
long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
 
int main()
{
    auto start = std::chrono::steady_clock::now();  // start from here(from the where you want to show execution time)
    std::cout << "f(2) = " << fibonacci(42) << '\n'; 
    auto end = std::chrono::steady_clock::now();   // end here(at the end of function)
    std::chrono::duration<double> elapsed_seconds = end-start; // this is calculate duration of execution time of the function
    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n"; // print the exicution time
}



 //The chrono library defines three main types as well as utility functions and common typedefs.

 // clocks
//  time points
//  durations


//  for more detail--> visit:   https://en.cppreference.com/w/cpp/chrono
