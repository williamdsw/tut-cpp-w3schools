#include "arrays.h"
#include <iostream>

using namespace std;

void Arrays::makeArrays ()
{
	// FIELDS

	string usGameDevelopers[4] = { "Id Software", "Rockstar", "Activision", "Bethesda Game Studios" };
	string jpGameDevelopers[] = { "Capcom", "Sega", "Nintendo", "Konami", "Taito", "Square Enix" };

	// OUTPUT

	cout << "US Game Developers: " << endl;
	for (const string& dev : usGameDevelopers)
	{
		cout << dev << endl;
	}

	cout << "JP Game Developers: " << endl;
	for (int index = 0; index < 6; index++)
	{
		cout << jpGameDevelopers[index] << endl;
	}
}
