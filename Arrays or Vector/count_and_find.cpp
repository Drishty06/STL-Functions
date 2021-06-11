//count function
//used for : to count the occurances of element in vector
//syntax : count(first_iterator, last_iterator,x)
// first_iterator : 1st element of vector
// last_iterator : last elemnt of vector
// x : element whose occurances we have to find

// find function
// used for : to find 1st occurance of element in vector (if element not present in whole array in case it will return last element)
// syntax :  find(first_iterator, last_iterator, x)
// first_iterator : 1st element of vector
// last_iterator : last elemnt of vector
// x : element whose first occurance we have to find

// C++ program to demonstrate working of count()
// and find()
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = {10, 20, 5, 23 ,42, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Occurrences of 20 in vector : ";
 
    // Counts the occurrences of 20 from 1st to
    // last element
    cout << count(vect.begin(), vect.end(), 20);
 
    // find() returns iterator to last address if
    // element not present
    find(vect.begin(), vect.end(),5) != vect.end()?
                         cout << "\nElement found":
                     cout << "\nElement not found";
 
    return 0;
}

