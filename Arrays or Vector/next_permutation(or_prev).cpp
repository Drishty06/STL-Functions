// use for find next or previous permutation
// syntax :  next_permutation(first_iterator, last_iterator) 
// for prev permutation: prev_permutation(first_iterator,last_iterator)
// header file: #include <algorithm>



// code snippet:
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	vector<int> vect{ 5 , 15 , 25 , 23 , 19, 2 , 6 ,18 }; // initialize a vector
    int n = vect.size();  // vector size
  
	cout << "Given Vector is:\n";
	for (int i=0; i<n; i++)
		cout << vect[i] << " ";    // print given vector

	// modifies vector to its next permutation order
	next_permutation(vect.begin(), vect.end());                 
	cout << "\nVector after performing next permutation:\n";
	for (int i=0; i<n; i++)
		cout << vect[i] << " ";
  
  
   // modifies vector to its prev permutation order
	prev_permutation(vect.begin(), vect.end());
	cout << "\nVector after performing prev permutation:\n";
	for (int i=0; i<n; i++)
		cout << vect[i] << " ";

	return 0;
}

// output:  
//            Given Vector is:
//            5 15 25 23 19 2 6 18 
//            Vector after performing next permutation:
//            5 15 25 23 19 2 18 6 
//            Vector after performing prev permutation:
//            5 15 25 23 19 2 6 18 
