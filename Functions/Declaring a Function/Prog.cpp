// This program shows how to declare and use programmer-defined functions.
// The compiler uses function prototypes to validate function calls.
// When a function is called the compiler refers to the function prototype to check the type and order of arguments and the return value. 
// Function Prototype is not required if the definition of the function appears before the function's first use in the program.
// In such a case, the function definition also acts as the function prototype.
// The names of variables in a function prototype is ignored by the compiler. But they can be printed for documentation purposes.
// The portion of a function prototype that includes the name of the function and the types of the arguments is called function signature or simply signature. 
// Function Prototype Syntax: Return_Type Function_Name (Type1 [Name1] , Type2 [Name2] , ... );
// Function Definition Syntax: Return_Type Function_Name (Type1 Name1, Type2 Name2, ...)    {Statements}
// Functions with empty parameter list is defined as: Return_Type Function_Name (void); or simply: Return_Type Function_Name ();
// Note that placing a semicolon right after the right pranthesis in the header of the function definition is a synax ERROR.

#include <iostream>
using namespace std;

void ShowAge(int); // Function Prototype. It could have been: void ShowAge(int x);
     // Signature (The return type is not a part of signature).
int main()
{
	int Age;
	cout << "How old are you ? ";
	cin >> Age;
    ShowAge(Age);  // Function Call.
	
    return 0;
}

void ShowAge(int n)    // no semicolons.
{
	cout << "You are " << n << " years old." << endl;
}
