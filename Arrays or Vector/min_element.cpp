//used for : to find minimum element in the given range of index from vector

//syntax : min_element(iterator to first, iterator to last)
//iterator to first : Forward iterator pointing to the beginning of the range.
//iterator to last : Forward iterator pointing to the end of the range.

//return : It return a pointer to the smallest element in the range, and in case if there are more than one such element then it points to the first one.
//It points to the last in case the range is empty.

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int v[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 };
  
    // Finding the minimum value between the third and the
    // fifth element
  
    int* i1;
    i1 = std::min_element(v + 2, v + 5);
  
    cout << *i1 << "\n";
    return 0;
}

//output : 2
//link : https://www.geeksforgeeks.org/stdmin_element-in-cpp/
