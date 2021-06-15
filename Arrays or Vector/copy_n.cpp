//  use for copying arrays element into another arrays.
// header file: #include <algorithm>
// syntax: copy_n(array name from you want to copy,arrays size, array name in you want to copy)


// code snippet:
#include<iostream>
#include<algorithm> // for copy_n()
using namespace std;
int main()
{
	// Initializing array
	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	// Declaring second array
	int ar1[10];

	// Using copy_n() to copy contents
	copy_n(ar, 10, ar1);

	// Displaying the copied array
	cout << "The new array after copying is : ";
	for (int i=0; i<10 ; i++)
	cout << ar1[i] << " ";

	return 0;

}



// output:   
//  The new array after copying is : 10 20 30 40 50 60 70 80 90 100
