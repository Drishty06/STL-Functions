//  "fill()" :Used to assigns the same value to all the elements in the range [begin, end), where ‘begin’ is the initial position and ‘end’ is the last position
// of element in vector.
// Syntex : fill(starting_position,ending_position-1 0r vector_name.end()-1,value)
// "fill_n()" :In this function we specify beginning position, number of elements to be filled and values to be filled.
// Syntex : fill_n(starting_position,number_of_elements_to_be_filled,value)
// C++ program to demonstrate working of fill() and fil_n()
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    vector<int> v(8);  
    vector<int> vect(8);
  
     // calling fill to initialize values in the
     // range to 4
    fill(v.begin() + 2, v.end() - 1, 4);        //Please remember that ‘begin’ is included in the range but ‘end’ is NOT included. 
  
    for (int i=0; i<v.size(); i++)
        cout << v[i] << " ";                     //output:0 0 4 4 4 4 4 0
  
    // calling fill to initialize first four values
    // to 7
    fill_n(vect.begin(), 4, 7);
  
    for (int i=0; i<vect.size(); i++)
        cout << ' ' << vect[i];                 //output: 7 7 7 7 0 0 0 0
    cout << '\n';                             
  
    // calling fill to initialize 3 elements from 
    // "begin()+3" with value 4
    fill_n(vect.begin() + 3, 3, 4);
  
    for (int i=0; i<vect.size(); i++)
        cout << ' ' << vect[i];                 //output: 7 7 7 4 4 4 0 0
    cout << '\n';
  
    return 0;
}

//For detailed information visit 🚀: https://www.geeksforgeeks.org/fill-and-fill_n-functions-in-c-stl/
