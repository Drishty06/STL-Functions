// Used for: check if strings / arrays etc are anagrams
// syntax: is_permutation(ForwardIterator1 first1, ForwardIterator1 last1, ForwardIterator2 first2);
// first1, last1: Input iterators to the initial and final positions of the first sequence.
// first2 : Input iterator to the initial position of the second sequence. 
// return value: true : if all the elements in range [first1, last1] compare equal to those of the range starting at first2 in any order. 
// false : Any element missing or exceeding.
// code snippet:
// using std :: is_permutation
#include <iostream>
#include <algorithm>
  
/*Driver Code*/
int main()
{
    std :: string A = "SILENT";
    std :: string B = "LISTEN";
      
    /*Checking if B is a permutation of A*/
    if ( is_permutation ( A.begin(), A.end(), B.begin() ) )
    {
        std :: cout << "Anagrams" ;
    }
      
    else
    {
        std :: cout << "Not Anagrams" ;
    }
    return 0;
}

// for more info: https://www.geeksforgeeks.org/stdis_permutation-c-stl/
