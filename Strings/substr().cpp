// used for : to find sub string from given string

//  syntax : main string.substr(pos, len);
// pos : position of element which will be the first character of substring
// len : length of substring

//return : will return the substring

//in case if pos is equal to length of main string then it will return empty string
//in case if pos is greater than length of main string then it will throw error
//in case length of substring is greter than main string than elements between pos and size of main string will be assigned to the sub string

#include <string.h>
#include <iostream>
using namespace std;
  
int main()
{
    // Take any string
    string s1 = "Geeks";
  
    // Copy three characters of s1 (starting 
    // from position 1)
    string r = s1.substr(1, 3);
  
    // prints the result
    cout << "String is: " << r;
  
    return 0;
}

//output will be eek
// link : https://www.geeksforgeeks.org/substring-in-cpp/
