// Used for : To find 1st element which is greater than given values
// syntax: upper_bound(iterator start, iterator end, constant value)
// 	  Start : Iterator to starting element
// 	  End : Iterator to ending element
// 	  Value : value which have to find
//    Returns : An iterator to 1st greater element then given value
// Code Snippet :

#include <bits/stdc++.h>
using namespace std;
  
// Main Function
int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int upper1 = upper_bound(arr, arr+5, 35) - arr;
    int upper2 = upper_bound(arr, arr+5, 45) - arr;
  
    cout << (upper1); //3
    cout << (upper2); //4
  
    return 0;
}

// For more information : https://www.geeksforgeeks.org/upper_bound-in-cpp/
