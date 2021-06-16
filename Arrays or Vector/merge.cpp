// used for : merge two sorted containers and stores in new container in sorted order
// syntax:  merge(begin1,end1,begin2,end2,begin3)
// begin1 and begin2 and begin3 :Iterator to 1st element of the containers
// end1 and end2: Iterator to last element of the containers

// header file: #include <algorithm>

// code snippet:
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
 // Initializing 1st vector
 vector<int> v1 = {1, 3, 4, 5, 20, 30};
      
 // Initializing 2nd vector
 vector<int> v2 = {1, 5, 6, 7, 25, 30};
      
 // Declaring resultant vector
 // for mergeing
 vector<int> v3(12);
      
 // Using merge() to merge vectors v1 and v2
 // and storing result in v3
 merge(v1.begin(), v1.end(), v2.begin(), 
                   v2.end(), v3.begin());
      
 // Displaying resultant container
 cout << "The new container after merging is :\n";
 for (int &x : v3) 
     cout << x << " ";
 cout << endl;
  
  return 0;
}

// output: 
// The new container after merging is :
// 1 1 3 4 5 5 6 7 20 25 30 30 
