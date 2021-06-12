// Used for : Usually used to find prefix sum array

// Syntax 1 : partial_sum(first, last, b);
// 	first, last : Iterator to  first and last elements of range whose elements are to be added
// 	b :  array or vector in which you want to store modified array or vector.

// Syntax 2 :partial_sum(first, last, b, myfun);
// 	myfun : a function for performing any specific task. For example, we can store product of 2 continuous value.
	
// Code : 
#include <iostream> 
#include <numeric>     
using namespace std;
  
//user defined function
int myfun(int x, int y)
{
    // the sum of element is twice of its 
    // adjacent element
    return x + 2 * y;
}
  
int main () 
{
    int a[] = {1, 2, 3, 4, 5} ;
    int b[5];
      
    // Default function
    partial_sum(a , a+5 , b);
  
    cout << "Partial Sum - Using Default function: ";
    for (int i=0; i<5; i++)
        cout << b[i] << ' '; // 1 3 6 10 15 
    cout << '\n';
      
    // Using user defined function
    partial_sum(a , a+5 , b , myfun) ;
  
    cout << "Partial sum - Using user defined function: ";
    for (int i=0; i<5; i++)
        cout << b[i] << ' '; // 1 5 11 19 29 
    cout << '\n';
  
    return 0;
}

// For More Info : https://www.geeksforgeeks.org/accumulate-and-partial_sum-in-c-stl-numeric-header/ 

