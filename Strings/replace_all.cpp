/* This function is used to replace all the occurrences in str of str1 with str2
Simply it will replace str1 with str2 in string str.

replace_all():

header file:
boost/algorithm/string.hpp
syntax:
     replace_all(input_string,search_string,format_string);
parameters:
    input_string : an input string
    seacrh_string : the pattern that has to be replaced in the input_string;
format_string : the pattern that replaces the search_string.

replace_all() performs an inplace replacement. There is another variation present replace_all_copy() which instead of doing an inplace replacement, returns a copy of the modified string. 
replace_all() performs a case-sensistive search. There is another variation present ireplace_all() which performs a case-insensitive search. Similarly ireplace_all_copy() returns a copy of modified string instead of doing an inplace replacement.
*/

#include<iostream>
#include<boost/algorithm/string.hpp>

using namespace std;
using namespace boost::algorithm;

int main()
{
	string str1 = "Hello and Welcome Hello and Welcome";
	cout<<str1<<endl;
	replace_all(str1,"Hello ","Hi ");//replacing "Hello" inplace with "Hi"
	cout<<str1<<endl<<endl; // Hi and Welcome Hi and Welcome

	string str2 = "Apple Banana Mango Apple Banana Apple";
	cout<<str2<<endl; // Apple Banana Mango Apple Banana Apple
	ireplace_all(str2,"apple","Orange");//replacing "Apple" inplace with "Orange"
	cout<<str2<<endl<<endl; // Orange Banana Mango Orange Banana Orange

	string str4 = "Hi Hi Hi Hi Hi Hi";
	cout<<str4<<endl; // Hi Hi Hi Hi Hi Hi
	string str3 = replace_all_copy(str4,"Hi ","Guys ");//removing "Hi " by returning a copy
	cout<<str3<<endl; // Guys Guys Guys Guys Guys Guys
	return 0;
}

//For more information visit https://cppsecrets.com/users/143511597102105107104971105048484864103109971051084699111109/C00-boostalgorithmreplaceall.php
