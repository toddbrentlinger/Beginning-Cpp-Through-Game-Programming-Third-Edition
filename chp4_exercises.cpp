// Chapter 4 Exercises

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
	cout << "\tChapter43 Exercises\n\n";
	
	// Question 1
	
	vector<string> gameList;
	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;
	
	cout << "Question 1\n";
	cout << "Favorite Games List:\n\n";
	cout << "Action Options:\n";
	cout << "'List' - list all game titles\n";
	cout << "'Add' - add a game title\n";
	cout << "'Remove' - remove a game title\n";
	cout << "'Quit' - quit the program\n";
	
	string action;
	string gameTitle;

	// main loop
	while (action != "QUIT")
	{
		cout << "\nAction: ";
		cin >> action;
		
		if (action == "LIST")
		{
			cout << "\nFavorite Game:\n";
			for (iter = gameList.begin(); iter != gameList.end(); ++iter)
			{
				cout << *iter << endl;
			}
		}
		else if (action == "ADD")
		{
			cout << "\nAdd Game: ";
			cin >> gameTitle;
			gameList.push_back(gameTitle);
			cout << "\nFavorite Game:\n";
			for (iter = gameList.begin(); iter < gameList.end(); ++iter)
			{
				cout << *iter << endl;
			}	
		}
		else if (action == "REMOVE")
		{
			cout << "\nRemove Game: ";
			cin >> gameTitle;
			myIterator = find(gameList.begin(), gameList.end(), gameTitle);
			if (myIterator != gameList.end())
			{
				gameList.erase(myIterator);
				cout << "\nFavorite Game:\n";
				for (iter = gameList.begin(); iter < gameList.end(); ++iter)
			{
				cout << *iter << endl;
			}
			}
			else
			{
				cout << "\nGame title not found. Try Again.";
			}
		}
	}
	
	// Question 2
	
	cout << "Question 2\n\n";
	vector<int> scores(5,0);
	vector<int>::iterator myIter2;
	vector<int>::const_iterator iter2;
	// increment each score
	for (myIter2 = scores.begin(); myIter2 != scores.end(); ++myIter2)
	{
		(*myIter2)++;
	}
	cout << "Scores:\n";
	for (iter2 = scores.begin(); iter2 != scores.end(); ++iter2)
	{
		cout << *iter2 << endl;
	}
	
	return 0;
}
