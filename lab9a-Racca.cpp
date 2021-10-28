// Emerson Racca
// 10/28/21
// Lab 9a - Vector of Strings

/*
In this lab exercise you will declare a vector of strings named userStrings.

vector<string> userStrings;
1. Allow the user to populate the vector at run time. Do not set a size, use the push back method.

2. Implement a regular function that prints the strings to the screen using the following prototype:

void printStrings(vector<string> arg);
3. Implement a regular function that returns a random string from the vector using the following prototype:

string randomString(vector<string> arg);
*/

#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

void printStrings(vector<string> arg);
string randomString(vector<string> arg);

int main(void) {
	srand((unsigned int) time(0));
	string myString;
	char addString = 'y';
	vector<string> userStrings;

	cout << "Vector of Strings\n\n";

	do {
		cout << "Enter a string: ";
		getline(cin, myString);
		userStrings.push_back(myString);

		cout << "\nEnter another string (y or n)? ";
		cin >> addString;
		cin.ignore();
	} while (addString == 'y');
	
	cout << endl << endl;
	printStrings(userStrings);

	cout << "\nA random string from the vector: " << randomString(userStrings);

	return 0;
}

void printStrings(vector<string> arg) {
	for (unsigned int i = 0; i < arg.size(); i++) {
		cout << "Index " << i << " contains: " << arg.at(i) << endl;
	}
}

string randomString(vector<string> arg) {
	return (arg.at(rand() % arg.size()));
}