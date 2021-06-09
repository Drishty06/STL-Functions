// Used for: counting the set bits in a given number (the number of ones in the binary representation of the integer)
// syntax: __builtin_popcount(int n) 
// return value: It returns the numbers of set bits in an integer
//               If n is negative , it will still give correct answer (as negative numbers are stored in memory in 2’s compliment form).
// time complexity of this function: O(constant) because it uses look up table to count set bits
// code snippet:
cout<< __builtin_popcount (7); // binary representation of 7 = 0111 and number of 1s are 3 
The above code gives "3" as output.
// forming countbits udf using bit manipulation:
  int countBits(int a)
{
    int count = 0;
    while (a) 
    {
        if (a & 1) count ++;
        a = a >> 1;
    }
    return count;
}
// udf countBits vs __inbuilt_popcount:
// __inbuilt_popcount uses look table hence takes O(constant) time only whereas that is not the case with countBits
// This function tries to use CPU specific instructions, which will always be orders of magnitude faster than any algorithm you manage to come up with.
