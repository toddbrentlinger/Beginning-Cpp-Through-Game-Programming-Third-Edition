// Chapter 8 Exercises

#include <iostream>

using namespace std;

class Critter
{
public:
	int GetHunger() const {return m_Hunger;}

private:
	int m_Hunger;
};

class Critter2
{
public:
	Critter2(int hunger = 0);
	int GetHunger() const {return m_Hunger;}
	
private:
	int m_Hunger;
};

Critter2::Critter2(int hunger):
	m_Hunger(hunger)
{}

int main()
{
	cout << "\n\tChapter 8 Exercises\n\n";
	
	cout << "Improve the Critter Caretaker program so that:\n";
	cout << "1. you can enter an unlisted menu choice that reveals the exact\n";
	cout << "values of the critter's hunger and boredom levels.\n";
	cout << "2. the critter is more expressive about it's needs by hinting at\n";
	cout << "how hungry and bored it is.\n\n";
	
	cout << "see critter_caretaker2.cpp\n\n";
	
	cout << "3. What design problem does the following program have?\n";
	cout << "#include <iostream>\n";
	cout << "using namespace std;\n\n";
	cout << "class Critter\n";
	cout << "{\n";
	cout << "public:\n";
	cout << "\tint GetHunger() const {return m_Hunger;}\n";
	cout << "private:\n";
	cout << "\tint m_Hunger;\n";
	cout << "};\n\n";
	cout << "int main()\n";
	cout << "{\n";
	cout << "\tCritter crit;\n";
	cout << "\tcout << crit.GetHunger() << endl;\n";
	cout << "\treturn 0\n";
	cout << "}\n\n";
	
	Critter crit;
	cout << "Critter crit;\n";
	cout << "crit.GetHunger(): " << crit.GetHunger() << "\n\n";
	
	Critter2 crit2(2);
	cout << "Critter2 crit2(2);\n";
	cout << "crit2.GetHunger(): " << crit2.GetHunger() << "\n\n";
	
	cout << "Since there is no default argument initialized in the default\n";
	cout << "constructor. Therefore, there is some unkown value that is\n";
	cout << "retured by crit.GetHunger(). Fix with a constructor with\n";
	cout << "to initialize data member m_Hunger.";
	
	return 0;
}
