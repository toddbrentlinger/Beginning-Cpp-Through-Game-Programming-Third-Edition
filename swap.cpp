// Swap
// Demonstrates passing references to alter argument variables

#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int&x, int&y);
void displayScore(int myScore, int yourScore);

int main()
{
	int myScore = 150;
	int yourScore = 1000;
	
	cout << "Original values\n";
	displayScore(myScore, yourScore);
	
	cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	displayScore(myScore, yourScore);
	
	cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore);
	displayScore(myScore, yourScore);
	
	return 0;
}

void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int&x, int&y)
{
	int temp = x;
	x = y;
	y = temp;
}

void displayScore(int myScore, int yourScore)
{
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";
}
