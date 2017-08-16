// Chapter 6 Exercises

#include <iostream>

using namespace std;

int& plusThree(int number);

int main()
{
	cout << "\n\tChapter 6 Exercises\n";
	
	cout << "\n1. Improve the Mad Lib game from Chapter 5 by using references to\n";
	cout << "make the program more efficient.\n\n";
	
	cout << "See mad_lib2.cpp to compare to mad_lib.cpp\n\n";
	
	cout << "2. What's wrong with the following program?\n";
	cout << "int main()\n";
	cout << "{\n";
	cout << "\tint score;\n";
	cout << "\tscore = 1000;\n";
	cout << "\tfloat& rScore = score;\n";
	cout << "\treturn 0;\n";
	cout << "}\n\n";
	
	cout << "The reference, rScore, is of type float but is initialized to score\n";
	cout << "which is of type int.\n";
	cout << "fix with: int& rScore = score;\n\n";
	
	cout << "3. What's wrong with the following function?\n";
	cout << "int& plusThree(int number)\n";
	cout << "{\n";
	cout << "\tint threeMore = number + 3;\n";
	cout << "\treturn threeMore;\n";
	cout << "}\n\n";
	
	cout << "The local variable doesn't exist once the function ends, which\n";
	cout << "means that you're returning a reference to a non-existent object,\n";
	cout << "which is illegal\n";
	
	int number = 0;
	int test = plusThree(number);
	int& rTest = plusThree(number);
	cout << "test = " << test << endl;
	cout << "rTest = " << rTest << endl;
	cout << "number = " << number << endl;
	
	return 0;
}

int& plusThree(int number)
{
	int threeMore = number + 3;
	return threeMore;
}
