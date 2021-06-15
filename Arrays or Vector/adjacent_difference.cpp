// Used For : basically used to find adjacent difference but we can modify it by our own function

// Syntax : adjacent_difference (First, Last, Result);
// 	First : Iterator to 1st element in the array or vector.
// 	Last : Iterator to 1st element in the array or vector.
// 	Result : an array or vector in which we are going to store our result.

// adjacent_difference ( first, last, result, binary_op );
// 	Binary_op : our function.

// Returns : It returns an iterator pointing to array or vector where resulting elements have been stored.

// Code : 

#include <iostream>     
#include <functional>  
#include <numeric>     
int myop (int x, int y) {return x+y;}
int main () {
   int val[] = {10,20,30,50,60,70};
   int result[7];
   std::adjacent_difference (val, val+7, result);
   std::cout << "Default adjacent_difference: ";
   
   for (int i=0; i<7; i++) std::cout << result[i] << ' ';
   std::cout << '\n';
   std::adjacent_difference (val, val+7, result, std::multiplies<int>());
   std::cout << "Functional operation multiplies: ";
   
   for (int i=0; i<7; i++) std::cout << result[i] << ' ';
   std::cout << '\n';
   std::adjacent_difference (val, val+7, result, myop);
   std::cout << "Custom function operation: ";
   
   for (int i=0; i<7; i++) std::cout << result[i] << ' ';
   std::cout << '\n';
   
   return 0;
}

// Output : 
// Default adjacent_difference: 10 10 10 20 10 10 4197079  // First element puts same as it and after that arr[i]-arr[i-1]
// Functional operation multiplies: 10 200 600 1500 3000 4200 293800430 // First element puts same as it and after that arr[i]*arr[i-1]
// Custom function operation: 10 30 50 80 110 130 4197219 // First element puts same as it and after that arr[i]+arr[i-1]


// For More Info : https://www.tutorialspoint.com/cpp_standard_library/cpp_adjacent_difference.htm
