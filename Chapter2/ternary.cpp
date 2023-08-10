#include <iostream>
using namespace std ;

int main()
{
	
	// Program code goes here.
	
	int a, b, max ;
	a = 1, b = 2 ;
	
	cout << "Variable a value is: " ;
	cout << (( a != 1) ? "not 1, " : "1, " ) ;
	cout << (( a % 2 != 0 ) ? "odd" : "even" ) ;
	
	cout << endl << "Variable b value is: " ;
	cout << (( b != 1) ? "not 1, " : "1, " ) ;
	cout << (( b % 2 != 0 ) ? "odd" : "even" ) ;
	
	max = ( a > b ) ? a : b ;
	cout << endl << "Greater value is: " << max << endl ;
	
	return 0 ;
}