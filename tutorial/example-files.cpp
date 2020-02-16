#include "example-files.h"
#include <fstream>

// HELPER FUNCTIONS

void ExampleFiles::createFile (string fileName, string content)
{
	if (fileName == "" || content == "")
	{
		return;
	}

	ofstream myFile (fileName);
	myFile << content;
	myFile.close ();
}

void ExampleFiles::readFile (string fileName)
{
	if (fileName == "")
	{
		return;
	}

	string output = "";
	ifstream myFile (fileName);

	while (getline (myFile, output))
	{
		cout << output;
	}

	myFile.close ();
}
