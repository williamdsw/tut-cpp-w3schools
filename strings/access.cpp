#include "access.h"
#include <iostream>
#include <string>

using namespace std;

void Access::makeAccess ()
{
	string phrase = "Fall into the wall";

	for (int index = 0; index < phrase.length (); index++)
	{
		cout << phrase[index] << endl;
	}
}
