#include "foreach.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Foreach::makeForeach ()
{
	// FIELDS

	vector<string> words = {"Primary", "-", "The", "Cure", "live", "at", "Wish", "tour"};

	// OUTPUT

	cout << "FOREACH..." << endl;
	for (const string& word : words)
	{
		cout << word << " ";
	}
	cout << endl;
}
