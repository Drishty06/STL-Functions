//Used To: create Random number 
//Header file: #include <cstdlib>
//Return value: a positive number within the range from 0.0 to RAND_MAX.
// The maximum value of the rand() is RAND_MAX (its minimum value is 32767). The value of RAND_MAX can differ according to the compiler.
// C++ code for rand() Function:

#include <cstdlib>

#include <iostream>

using namespace std;

int main() {
  int randomNumber = rand();
  cout << randomNumber << endl; // prints any random number within the range
}

//For more detail visit🚀: https://www.bitdegree.org/learn/random-number-generator-cpp
