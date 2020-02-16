#include <iostream>
#include "tutorial/hello-world.h"
#include "tutorial/output.h"
#include "tutorial/comments.h"
#include "tutorial/variables.h"
#include "tutorial/constants.h"
#include "tutorial/user-input.h"
#include "tutorial/operators-arithmetic.h"
#include "tutorial/operators-comparison.h"
#include "tutorial/operators-logical.h"
#include "strings/concatenation.h"
#include "strings/length.h"
#include "strings/access.h"
#include "strings/struserinput.h"
#include "tutorial/example-math.h"
#include "tutorial/if-else.h"
#include "tutorial/switch.h"
#include "tutorial/while.h"
#include "tutorial/do-while.h"
#include "tutorial/for.h"
#include "tutorial/foreach.h"
#include "tutorial/arrays.h"
#include "tutorial/reference.h"
#include "tutorial/pointers.h"
#include "functions/example-function.h"
#include "functions/example-parameters.h"
#include "functions/example-overloading.h"
#include "classes/car.h"
#include "classes/programmer.h"
#include "tutorial/example-files.h"

using namespace std;

int main()
{
	/*HelloWorld helloWorld;
	helloWorld.makeHelloWorld ();

	Output output;
	output.makeOutput ();

	Comments comments;
	comments.makeComments ();

	Variables variables;
	variables.makeVariables ();

	Constants constants;
	constants.makeConstants ();

	UserInput userInput;
	userInput.makeUserInput ();

	OperatorsArithmetic operatorsArithmetic;
	operatorsArithmetic.makeOperatorsArithmetic ();

	OperatorsComparison operatorsComparison;
	operatorsComparison.makeOperatorsComparison ();

	OperatorsLogical operatorsLogical;
	operatorsLogical.makeOperatorsLogical ();

	Concatenation concatenation;
	concatenation.makeConcatenation ();

	Length length;
	length.makeLength ();

	Access access;
	access.makeAccess ();

	StrUserInput strUserInput;
	strUserInput.makeStrUserInput ();

	ExampleMath exampleMath;
	exampleMath.makeExamplePath ();

	IfElse ifElse;
	ifElse.makeIfElse ();

	Switch switchObj;
	switchObj.makeSwitch ();

	While whileObj;
	whileObj.makeWhile ();

	DoWhile doWhile;
	doWhile.makeDoWhile ();

	For forObj;
	forObj.makeFor ();

	Foreach foreachObj;
	foreachObj.makeForeach ();

	Arrays arrays;
	arrays.makeArrays ();

	Reference reference;
	reference.makeReference ();

	Pointers pointers;
	pointers.makePointers ();

	ExampleFunctions exampleFunctions;
	exampleFunctions.myFunction ();
	exampleFunctions.myFunction ();
	exampleFunctions.myFunction ();

	ExampleParameters exampleParameters;
	exampleParameters.printName ("Dimebag");
	exampleParameters.printName ("Phil");

	exampleParameters.printCountryName ();
	exampleParameters.printCountryName ("USA");
	exampleParameters.printCountryName ("Argentina");

	exampleParameters.printPersonInfo ("Axl", 27);
	exampleParameters.printPersonInfo ("Slash", 24);

	int sum = exampleParameters.sum (10, 19);
	cout << "10 + 19 = " << sum << endl;

	int a = 10;
	int b = 100;

	cout << "Numbers before swap: " << endl;
	cout << a << ", " << b << endl;

	exampleParameters.swap (a, b);

	cout << "Numbers after swap: " << endl;
	cout << a << ", " << b << endl;

	ExampleOverloading exampleOverloading;
	int integerSum = exampleOverloading.sum (10, 15);
	float floatSum  = exampleOverloading.sum (2.5, 10.99);
	double doubleSum = exampleOverloading.sum (99.1, 120.45);

	cout << "10 + 15 = " << integerSum << endl;
	cout << "2.5 + 10.99 = " << floatSum << endl;
	cout << "99.1 + 120.45 = " << doubleSum << endl;

	Car car ("", "", 0, 0);
	car.setBrand ("BMW");
	car.setModel ("X5");
	car.setYear (1999);
	car.setMaxSpeed (2000);

	cout << "Car properties: " << endl;
	cout << "Brand: " << car.getBrand () << endl;
	cout << "Model: " << car.getModel () << endl;
	cout << "Year: " << car.getYear () << endl;
	cout << "Max Speed: " << car.getMaxSpeed () << endl;

	Programmer programmer (0, 0);
	programmer.setSalary (50000);
	programmer.setBonus (15000);

	cout << "Programmer properties: " << endl;
	cout << "Salary: " << programmer.getSalary () << endl;
	cout << "Bonus: " << programmer.getBonus () << endl;*/

	ExampleFiles exampleFiles;
	exampleFiles.createFile ("test.txt", "Freedom '90");
	exampleFiles.readFile ("test.txt");
}
