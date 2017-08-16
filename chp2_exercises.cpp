// Chapter 2 Exercises

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	cout << "\tChapter 2 Exercises\n\n";
	
	// Question 1
	cout << "Menu Chooser program using an enumeration:\n";
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";
	
	int choice;
	cout << "Choice: ";
	cin >> choice;
	
	enum difficulty {EASY=1, NORMAL, HARD};
	
	switch (difficulty(choice))
	{
		case 1:
			cout << "You picked Easy.\n";
			break;
		case 2:
			cout << "You picked Normal.\n";
			break;
		case 3:
			cout << "You picked Hard.\n";
			break;
		default:
			cout << "You made an illegal choice.\n";
	}
	
	// Question 3
	cout << "\nGuess My Number w/ switched roles:\n";
	
	srand(static_cast<unsigned int>(time(0)));	// seed random number generator
	
	int guess;
	int tries = 0;
	int number;
	
	cout << "\tWelcome to Guess My Number\n\n";
	cout << "Enter a number (1-100): ";
	cin >> number;
	
	do
	{
		guess = rand() % 100 + 1; // random number between 1 and 100
		cout << "\nComputer Guess: ";
		cout << guess;
		++tries;
		
		if ( guess > number)
		{
			cout << " Too high!\n\n";
		}
		else if (guess < number)
		{
			cout << " Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != number);
	
	// The following loop never starts since the expression in the while
	// loop represents false. Any non-zero integer represents true.
	int x = 0;
	while (x)
	{
		++x;
		cout << x << endl;
	}
	
	return 0;
}
