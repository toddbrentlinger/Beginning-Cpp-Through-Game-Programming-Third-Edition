// Mad-Lib 2.0
// Creates a story based on user input using references to make the program
// more efficient

#include <iostream>
#include <string>

using namespace std;

string askText(const string& prompt);
int askNumber(const string& prompt);
void tellStory(const string& name, const string& noun, int number, 
				const string& bodyPart, const string& verb);
				
int main()
{
	cout << "Welcome to Mad Lib.\n\n";
	cout << "Answer the following questions to help create a new story.\n";
	
	string name = askText("Please enter a name: ");
	string noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a number: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter a verb: ");
	tellStory(name, noun, number, bodyPart, verb);
	
	return 0;
}

string askText(const string& prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int askNumber(const string& prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellStory(const string& name, const string& noun, int number, 
				const string& bodyPart, const string& verb)
{
	cout << "\nHere's your story:\n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up a life-long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day, the ";
	cout << noun;
	cout << " found the explorer.\n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ", a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << ".\n";
	cout << "After all this time, the quest was finally over. ";
	cout << "And then, the ";
	cout << noun << "\n";
	cout << "promptly devoured ";
	cout << name << ". ";
	cout << "The moral of the story? Be careful what you\n";
	cout << verb;
	cout << " for.";
}
