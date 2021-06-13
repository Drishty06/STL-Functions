// used to : to insert element ar desired position

// syntax : vector_name.emplace (const_iterator position, element);
// const_iterator position : position at where we want to insert the element
// element : element which we want to insert

// return : The function returns an iterator which points to the newly inserted element.

#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    vector<int> vec = { 10, 20, 30 };
  
    // insert element by emplace function
    // in the middle
    auto it = vec.emplace(vec.begin() + 2, 16);
  
    // print the elements of the vector
cout << "The vector elements are: "; 
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
  
    return 0;
}
//output will be : 10, 20, 16, 30
//link : https://www.geeksforgeeks.org/vector-emplace-function-in-c-stl/
