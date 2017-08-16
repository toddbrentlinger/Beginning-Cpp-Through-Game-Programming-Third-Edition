// Chapter 5 Exercises

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

char getGuess(string used);
int checkGuess(char guess, string THE_WORD, int wrong);
void askUser(string prompt = "What is the point of this?");

int main()
{
	cout << "\tChapter 5 Exercises\n\n";
	cout << "1. What's wrong with the following prototype?\n";
	cout << "int askNumber(int low = 1, int high);\n\n";
	cout << "Once you specify a default argument in a list of parameters, ";
	cout << "you must specify\n";
	cout << "default arguments for all remaining parameters.\n\n";
	
	cout << "2. Rewrite the Hangman game from Chapter 4 using functions.\n\n";
	
	// setup
	const int MAX_WRONG = 8;	// maximum number of incorrect guesses allowed
	
	vector<string> words;	// collection of possible words to guess
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");
	
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];		// word to guess
	int wrong = 0;							// number of incorrect guesses
	string soFar(THE_WORD.size(), '-');		// word guessed so far
	string used = "";						// letters already guessed
	
	cout << "Welcome to Hangman. Good luck!\n";
	
	// main loop
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << "\n\nYou have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left.\n";
		cout << "\nYou've used the following letters:\n" << used << endl;
		cout << "\nSo far, the word is:\n" << soFar << endl;
		
		char guess = getGuess(used);
		used += guess;
		
		wrong = checkGuess(guess, THE_WORD, wrong);
		// update soFar to include newly guessed letter
			for (int i = 0; i < THE_WORD.length(); ++i)
			{
				if (THE_WORD[i] == guess)
				{
					soFar[i] = guess;
				}
			}
	}
	
	// shut down
	if (wrong == MAX_WRONG)
	{
		cout << "\nYou've been hanged!";
	}
	else
	{
		cout << "\nYou guessed it!";
	}
	
	cout << "\nThe word was " << THE_WORD << "\n\n";
	
	// Exercise 3
	cout << "Exercise 3\n";
	askUser();
	askUser("To practice using default arguments.");
	
	return 0;
}

char getGuess(string used)
{
	char guess;
		cout << "\n\nEnter your guess: ";
		cin >> guess;
		guess = toupper(guess);	// make uppercase since secret word in uppercase
		while (used.find(guess) != string::npos)
		{
			cout << "\nYou've already guessed " << guess << endl;
			cout << "Enter your guess: ";
			cin >> guess;
			guess = toupper(guess);
		}
		
		return guess;
}

int checkGuess(char guess, string THE_WORD, int wrong)
{
	if (THE_WORD.find(guess) != string::npos)
		{
			cout << "That's right! " << guess << " is in the word.\n";
		}
		else
		{
			cout << "Sorry, " << guess << " isn't in the word.\n";
			++wrong;
		}
		
		return wrong;
}

void askUser(string prompt)
{
	int num;
	cout << "\nPlease enter a number: ";
	cin >> num;
	cout << "Your number is: " << num << endl;
	cout << "Your prompt is: " << prompt;
}
