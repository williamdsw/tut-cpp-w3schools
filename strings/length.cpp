#include "length.h"
#include <iostream>
#include <string>

using namespace std;

void Length::makeLength ()
{
	// FIELDS

	string phrase = "Shake, shake, shake, shake, shake, shake dog shake.";
	int length = phrase.length ();
	int size = phrase.size ();

	// OUTPUT

	cout << phrase << endl;
	cout << "Length: " << length << endl;
	cout << "Size: " << size << endl;
}
