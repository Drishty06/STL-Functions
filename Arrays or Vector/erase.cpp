// Used For : To remove elements from array or vectors

// Syntax : arr.erase(position to be deleted) – This erases selected element in vector and shifts and resize the vector elements accordingly.

// arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.

// Code : 

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Vector is :";
    for (int i=0; i<6; i++)
        cout << vect[i]<<" ";
 
    vect.erase(vect.begin()+1);
 
    cout << "\nVector after erasing the element: ";
    for (int i=0; i<5; i++)
        cout << vect[i] << " ";
 
    // sorting to enable use of unique()
    sort(vect.begin(), vect.end());
 
    cout << "\nVector before removing duplicate "
             " occurrences: ";
    for (int i=0; i<5; i++)
        cout << vect[i] << " ";
 
    vect.erase(unique(vect.begin(),vect.end()),vect.end());
 
    cout << "\nVector after deleting duplicates: ";
    for (int i=0; i< vect.size(); i++)
        cout << vect[i] << " ";
 
    return 0;
}

// Output : 
// Vector is :5 10 15 20 20 23 
// Vector after erasing the element: 5 15 20 20 23 
// Vector before removing duplicate  occurrences: 5 15 20 20 23 
// Vector after deleting duplicates: 5 15 20 23 42 45 

// For More Info : https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
