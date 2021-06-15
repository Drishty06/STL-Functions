  
// Used for: any of, all of , none of
// syntax: all_of(start, end, comparator)
// code snippet:
#include<iostream>
#include<algorithm> // for all_of()
using namespace std;
int main()
{
    int ar[6] =  {1, 2, 3, 4, 5, -6};
    all_of(ar, ar+6, [](int x) { return x>0; })?
          cout << "All are positive elements" :
          cout << "All are not positive elements";
  
    // Checking if any element is negative
    any_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "There exists a negative element" :
          cout << "All are positive elements";
  // Checking if no element is negative
    none_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "No negative elements" :
          cout << "There are negative elements";
   return 0;
 }
// Output: All are not positive elements 
//         There exists a negative element
//         No negative elements
// for more info: https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/
