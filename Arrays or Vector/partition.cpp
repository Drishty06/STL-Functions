// Used for: partition the array/vector based on the arguments passed
// header file: #include <algorithm>
// syntax: partition(begin, end, condition) 
// code snippet:
#include<iostream>
#include<algorithm> // for partition algorithm
#include<vector> 
using namespace std;
int main()
{
    vector<int> vect = { 2, 1, 5, 6, 8, 7 };

    // partitioning vector using partition()
    partition(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;
         
    });
}
// output: The partitioned vector is : 2 8 6 5 1 7
// above mentioned code snippet partitions the elements whether they are even or odd
// for more info check out: https://www.geeksforgeeks.org/stdpartition-in-c-stl/
