// Vector Performance Examples
// Understanding vector performance

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cout << "\tUnderstanding vector performance\n\n";
	
	// Using the capacity() Member Function
	cout << "Using the capacity() Member Function:\n\n";
	cout << "Creating a 10 element vector to hold scores.\n";
	vector<int> scores(10, 0);	// initialize all 10 elements to 0
	cout << "Vector size is: " << scores.size() << endl;
	cout << "Vector capacity is: " << scores.capacity() << "\n\n";
	
	cout << "Adding a score.\n";
	scores.push_back(0);	// memory is reallocated to accommodate growth
	cout << "Vector size is: " << scores.size() << endl;
	cout << "Vector capcity is: " << scores.capacity() << "\n\n";
	
	// Using the reserve() Member Function
	cout << "Using the reserve() Member Function:\n\n";
	cout << "Creating a list of scores.\n";
	vector<int> scores2(10,0); // initialize all 10 elements to 0
	cout << "Vector size is: " << scores2.size() << endl;
	cout << "Vector capacity is: " << scores2.capacity() << "\n\n";
	
	cout << "Reserving more memory.\n";
	scores2.reserve(20);		// reserve memory for 10 additional elements
	cout << "Vector size is: " << scores2.size() << endl;
	cout << "Vector capacity is: " << scores2.capacity() << "\n\n";
	
	return 0;
}
