#include "do-while.h"
#include <iostream>

using namespace std;

void DoWhile::makeDoWhile ()
{
	// FIELDS

	int total = 10;
	int index = 0;

	// OUTPUT

	cout << "Do...While..." << endl;
	do
	{
		cout << "Index: " << index << endl;
		index++;
	}
	while (index < total);
}
