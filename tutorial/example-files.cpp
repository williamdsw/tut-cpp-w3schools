#include "example-files.h"
#include <fstream>
#include <exception>

// HELPER FUNCTIONS

void ExampleFiles::createFile (string fileName, string content)
{
	try
	{
		if (fileName == "" || content == "")
		{
			throw "File name or content cannot be null or empty!"s;
		}

		ofstream myFile (fileName);
		myFile << content;
		myFile.close ();
	}
	catch (string message)
	{
		cout << message << endl;
	}
}

void ExampleFiles::readFile (string fileName)
{
	try
	{
		string output = "";
		ifstream myFile (fileName);

		while (getline (myFile, output))
		{
			cout << output;
		}

		myFile.close ();
	}
	catch (const exception& e)
	{
		cout << e.what () << endl;
	}
}
