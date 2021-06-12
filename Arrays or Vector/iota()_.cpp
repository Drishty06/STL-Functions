//Used to: assign continuous values to array. 
//Syntex : iota(array_name,array_size,starting_number)

// C++ code to demonstrate working of iota()
#include<iostream>
#include<numeric> // for iota() function
using namespace std;
int main()
{
	// Initializing array with 0 values
	int ar[5] = {0};     // We can skip Initializing array with 0

	// Using iota() to assign values
	iota(ar, ar+5, 15);

	// Displaying the new array
	cout << "The new array after assigning values is : ";      //Output: 15 16 17 18 19
	for (int i=0; i<5 ; i++)
	cout << ar[i] << " ";

	return 0;

}

//For more understanding visit: https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/


