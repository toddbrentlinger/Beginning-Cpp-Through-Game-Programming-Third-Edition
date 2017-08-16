// Chapter 3 Exercises

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	cout << "\tChapter 3 Exercises\n\n";
	
	// Question 1
	
	cout << "Question 1\n";
	cout << "Improved Word Jumble game w/ scoring system\n\n";
	
	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] = 
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly, is it?"},
		{"persistent", "Keep at it."},
		{"jumble", "It's what the game is all about."}
	};
	
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];	// word to guess
	string theHint = WORDS[choice][HINT];	// hint for word
	
	// initial maximum point value for word
	const unsigned int POINT_MULTIPLIER = 5;
	unsigned int pointValue = POINT_MULTIPLIER * theWord.size();
	
	string jumble = theWord;	// jumbled version of word
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	
	const unsigned int POINTS_DEDUCTED = 15;
	
	cout << "\t\tWelcome to Word Jumble!\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to quit the game.\n";
	cout << "(" << POINTS_DEDUCTED << " points deducted for hint)\n\n";
	cout << "The jumble is: " << jumble << endl;
	
	string guess;
	cout << "\n\nPoints: " << pointValue << endl;
	cout << "Your guess: ";
	cin >> guess;
	
	bool hintCheck = false;
	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
			
			if (hintCheck == false)
			{
				pointValue -= 15;
				hintCheck = true;
			}
		}
		else
		{
			cout << "Sorry, that's not it.";
		}
		
		cout << "\n\nPoints: " << pointValue << endl;
		cout << "Your guess: ";
		cin >> guess;
	}
	
	if (guess == theWord)
	{
		cout << "\nThat's it! You guessed it and scored " << pointValue;
		cout << " points!\n";
	}
	
	cout << "\nThanks for playing.\n\n";
	
	// Question 2
	
	cout << "Question 2\n\n";
	
	string phrase = "Test";
	for (int i = 0; i < phrase.size(); ++i)
	{
		cout << "Character at position " << i << " is: " << phrase[i] << endl;
	}
	
	// Question 3
	
	const int ROWS = 2;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = { {'O', 'X', 'O'},
									{ ' ', 'X', 'X'} };
	
	return 0;
}
