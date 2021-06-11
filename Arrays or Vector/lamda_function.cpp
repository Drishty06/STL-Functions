// Used for: avoiding user defined function long syntax
// syntax: [_capture clause_] (_parameters_) {return _value_ ;}
// return value: just like the return value of UDF.
// code snippet:

#include <bits/stdc++.h>
using namespace std;
int main()
{
  cout<< [] (int x, int y) {return x+y;} (2,3); // here 2 and 3 are the values just like we used to pass to a UDF
  //answer = 5
}
// this was a small code snippet but lambda functions can sometimes save a lot of time.
// there are some other benefits of lambda functions as well which is because of the capture clause
// along with this, we can use lambda functions for a comparators as well
// do checkout to following for the same : 1. https://www.geeksforgeeks.org/lambda-expression-in-c/
//                                         2. https://www.youtube.com/watch?v=o-WpVoRgSj4&list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn&index=18        
