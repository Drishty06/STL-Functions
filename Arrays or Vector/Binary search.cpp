// Used for : To search element in sorted array or vector.

// Syntax : binary_search(startaddress, endaddress, valuetofind)
// 	startaddress: the address of the first element of the array.
// 	endaddress: the address of the next contiguous location of the last element of the array.
// 	valuetofind: the target value which we have to search for.
	
// Return : True or False , Returns true if element is present else return false.

// Code :
#include <algorithm>
#include <iostream>
  
using namespace std;

int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
  
    sort(a, a + 10); // 10 = size of array
    
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array"; // This will execute 
    else
        cout << "\nElement not found in the array";
  
    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";// This will execute 
  
    return 0;
}

// ---------------------------------------------------------------------------------------------------------

// If you want pointer to the element then you can use std::bsearch.

// Syntax : void* bsearch( const void* key, const void* ptr, std::size_t count, std::size_t size, * comp );

// Parameters :
// key     -    element to be found
// ptr     -    pointer to the array to examine
// count   -    number of element in the array
// size    -    size of each element in the array in bytes
// comp    -    comparison function which returns a negative integer value if 
//              the first argument is less than the second,
//              a positive integer value if the first argument is greater than the second
//              and zero if the arguments are equal.

// Return value :
// Pointer to the found element or null pointer if the element has not been found.

// Code : 

#include <bits/stdc++.h>
  
// Binary predicate
int compare(const void* ap, const void* bp)
{
    // Typecasting
    const int* a = (int*)ap;
    const int* b = (int*)bp;
  
    if (*a < *b)
        return -1;
    else if (*a > *b)
        return 1;
    else
        return 0;
}
  
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
  
    int ARR_SIZE = sizeof(arr) / sizeof(arr[0]);
  
    int key1 = 4;
  
    // Typecasting the returned pointer to int
    int* p1 = (int*)std::bsearch(&key1, arr, ARR_SIZE, sizeof(arr[0]), compare);
  
    if (p1 != NULL)
        std::cout << key1 << " found at position " << (p1 - arr) << '\n'; // This line will execute 
    else
        std::cout << key1 << " not found\n";
  
    int key2 = 9;
  
    int* p2 = (int*)std::bsearch(&key2, arr, ARR_SIZE, sizeof(arr[0]), compare);
  
    if (p2 != NULL)
        std::cout << key2 << " found at position " << (p2 - arr) << '\n';
    else
        std::cout << key2 << " not found\n";// This line will execute
}

// NOTE : If you use using namespace std then there is no need to write std:: before any statement.

// For More Info : https://www.geeksforgeeks.org/binary-search-algorithms-the-c-standard-template-library-stl/ 
