#include "while.h"
#include <iostream>

using namespace std;

void While::makeWhile ()
{
	// FIELDS

	int total = 10;
	int index = 0;

	// OUTPUT

	cout << "While..." << endl;
	while (index < total)
	{
		cout << "Index: " << index << endl;
		index++;
	}
}
