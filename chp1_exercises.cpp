// Chapter 1 Exercises

#include <iostream>
using namespace std;

int main()
{
	cout << "Chapter 1 Exercises" << endl;
	
	cout << "\nWhat's displayed by each line in the ";
	cout << "following code snippet?" << endl;
	
	cout << "\nSeven divided by three is (7/3) = " << 7 / 3 << endl;
	cout << "Seven divided by three is (7.0/3) = " << 7.0 / 3 << endl;
	cout << "Seven divided by three is (7/3.0) = " << 7 / 3.0 << endl;
	
	cout << "\nProgram that gets three game scores from the user ";
	cout << "and displays the average." << endl;
	
	double firstScore, secondScore, thirdScore, averageScore;
	
	cout << "\nFirst Game Score: ";
	cin >> firstScore;
	
	cout << "\nSecond Game Score: ";
	cin >> secondScore;
	
	cout << "\nThird Game Score: ";
	cin >> thirdScore;
	
	averageScore = (firstScore + secondScore + thirdScore) / 3.0;
	
	cout << "\nAverage Game Score: " << averageScore << endl;
		
	return 0;
}
