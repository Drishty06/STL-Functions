// Used for: Finding lexicographically next or previous permutation of string
// header file: #include <algorithm>
// syntax: next_permutation(a.begin(), a.end()) or previous_permutation(a.begin(), a.end())
// return value: returns ‘true’ if the function could rearrange the object as a lexicographically greater permutation. Otherwise, the function returns ‘false’.
// code snippet:
#include <algorithm>
#include <iostream>
  
using namespace std;
  
int main()
{
    string s = { "gfg" };
    bool val = next_permutation(s.begin(), s.end()); //similarly previous_permutation(s.begin(), s.end())
    if (val == false) cout << "No Word Possible" << endl;
    else cout << s << endl;// ggf
    return 0;
}
