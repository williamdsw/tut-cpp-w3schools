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

using namespace std;

int main()
{
	HelloWorld helloWorld;
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
}
