#include "for.h"
#include <iostream>
#include <vector>

using namespace std;

void For::makeFor ()
{
	// FIELDS

	vector<string> words = {"Primary", "-", "The", "Cure", "live", "at", "Wish", "tour"};

	// OUTPUT

	cout << "FOR..." << endl;
	for (int index = 0; index < words.size (); index++)
	{
		cout << words[index] << " ";
	}
	cout << endl;
}
