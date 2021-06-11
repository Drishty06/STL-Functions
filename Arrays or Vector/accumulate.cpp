// Used for : Usually used to find sum of array or vector.

// Syntax 1 : accumulate(first, last, sum);
// 	first, last : Iterator to  first and last elements of range whose elements are to be added
// 	sum :  initial value of the sum

// Syntax 2 : accumulate(first, last, sum, myfun); 
// 	myfun : a function for performing any specific task. For example, we can find product between first and last.
	
// Code : 

#include <iostream> 
#include <numeric>     
using namespace std;
  
// User defined function
int myfun(int x, int y) 
{
    return x * y ;
}
  
int main() 
{
    // Initialize sum = 1 
    int sum = 1;
    int a[] = {5 , 10 , 15} ;
      
    cout << "\nResult using accumulate: ";
    cout << accumulate(a , a+3 , sum); //prints 31 (1+5+10+15 = 31)
      
    // Using accumulate function with
    // defined function
    cout << "\nResult using accumulate with"
             "user-defined function: ";
    cout << accumulate(a, a+3, sum, myfun); //prints 750 (1*5*10*15 = 750)
     
    // Using accumulate function with
    // pre-defined function 
    cout << "\nResult using accumulate with "
            "pre-defined function: ";
    cout << accumulate(a, a+3, sum, std::minus<int>()); // prints -29 (1-5-10-15 = -29)
      
    return 0;
}

// For More Info : https://www.geeksforgeeks.org/accumulate-and-partial_sum-in-c-stl-numeric-header/
