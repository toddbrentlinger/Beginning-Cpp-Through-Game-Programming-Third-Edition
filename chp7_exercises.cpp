// Chapter 7 Exercises

#include <iostream>

using namespace std;

int main()
{
	cout << "\n\tChapter 7 Exercises\n\n";
	
	cout << "1. Write a program with a pointer to a pointer to a string object.\n";
	cout << "Use the pointer to the pointer to call the size() member function \n";
	cout << "of the string object.\n\n";
	
	const string STRING = "string";
	const string* const ptrOne = &STRING;
	const string* const ptrTwo = ptrOne;
	cout << "\tString object: " << STRING << endl;
	cout << "\tString object size: " << ptrTwo->size() << "\n\n";
	
	cout << "2. Rewrite the Mad Lib game so that no string objects are passed to\n";
	cout << "the function that tells teh story. Instead, the function should\n";
	cout << "accept pointers to string objects.\n\n";
	
	cout << "\tSee mad_lib3\n\n";
	
	cout << "3. Will the three memory addresses displayed by the following\n";
	cout << "program all be the same? Explain what's going on in the code.\n\n";
	
	int a = 10;
	int& b = a;
	int* c = &b;
	
	cout << "\t&a: " << &a << endl;
	cout << "\t&b: " << &b << endl;
	cout << "\t&(*c): " << &(*c) << "\n\n";
	
	cout << "\ta: " << a << endl;
	cout << "\tb: " << b << endl;
	cout << "\tc: " << c << "\n\n";
	
	cout << "\t*a: INVALID\n";
	cout << "\t*b: INVALID\n";
	cout << "\t*c: " << *c << "\n\n";
	
	cout << "Yes, the three memory addresses displayed are the same. Variable\n";
	cout << "'a', of type int, is initialized to 10.\n";
	cout << "Reference 'b', of type int, is initialized to refer to variable\n";
	cout << ", 'a'\n";
	cout << "A pointer 'c', of type int, is declared and initialized to the\n";
	cout << "reference of 'b'.\n\n";
	
	cout << "&a displays the address of 'a' through the reference operator (&)\n";
	
	return 0;
}
