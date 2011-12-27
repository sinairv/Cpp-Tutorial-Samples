// A scoping example
// A very important program example.
// When blocks are nested and an identifier in the outer block has the same name as the identifier in the inner block then the outer identifier is hidden in the inner block.

#include <iostream>
using namespace std;

void a( void );   // function prototype
void b( void );   // function prototype
void c( void );   // function prototype

int x = 1;      // global variable
 
int main()
{
	int x = 5;   // local variable to main

    cout << "local x in outer scope of main is " << x << endl;

    // You see that a block can be created every where in the program.		
    {            // start new scope
	    int x = 7;
  
        cout << "local x in inner scope of main is " << x << endl;
    }            // end new scope
  
    cout << "local x in outer scope of main is " << x << endl;
  
    a();         // a has automatic local x
    b();         // b has static local x
    c();         // c uses global x
    a();         // a reinitializes automatic local x
    b();         // static local x retains its previous value
    c();         // global x also retains its value
  
    cout << "local x in main is " << x << endl;
  
    return 0;
}
  
void a( void )
{
	int x = 25;  // initialized each time a is called
  
    cout << endl << "local x in a is " << x 
         << " after entering a" << endl;
    ++x;
    cout << "local x in a is " << x 
         << " before exiting a" << endl;
}
  
void b( void )
{
    // The second time or later this function is called the initialization line would not be run.
	static int x = 50;  // Static initialization only
                        // first time b is called.
    cout << endl << "local static x is " << x 
         << " on entering b" << endl;
    ++x;
    cout << "local static x is " << x 
         << " on exiting b" << endl;
}
  
void c( void )
{
    // Here the global variable declared in line 11 is used.
	cout << endl << "global x is " << x 
         << " on entering c" << endl;
    x *= 10;
    cout << "global x is " << x << " on exiting c" << endl;
}
