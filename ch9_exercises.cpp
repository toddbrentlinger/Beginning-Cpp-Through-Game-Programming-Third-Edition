// Chapter 9 Exercises

#include <iostream>

using namespace std;

int main()
{
	cout << "\n\tChapter 9 Exercises\n\n";
	
	cout << "1. & 2. See game_lobby2.cpp for improved Game Lobby program.\n\n";
	
	cout << "3. What's wrong with the following code?\n\n";
	
	int* pScore = new int;
	*pScore = 500;
	pScore = new int (1000);
	delete pScore;
	pScore = 0;
	
	cout << "Memory leak of int, equal to 500, on heap with nothing pointing\n";
	cout << "to it.";
	
	return 0;
}
