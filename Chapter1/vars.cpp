#include <iostream>
using namespace std ;

// char   : A single byte, capable of holding one character ... ex: 'A'
// int    : An integer whole number ... ex: 100
// float  : A floating-point number, correct to six decimal places ... ex: 0.123456
// double : A floating-point number, correct to 10 decimal places ... ex: 0.0123456789
// bool   : A Boolean value of true or false, or numerically zero is false and any non-zero is true ... ex: false or 0 .. true or 1

int main()
{
	//Program code goes here
	char letter ;	letter = 'A' ;
	int number ;	number = 100 ;
	float decimal = 7.5 ;
	double pi = 3.14159 ;
	bool isTrue = false ;
	
	cout << "char letter: " << letter << endl ;
	cout << "int number: " << number << endl ;
	cout << "float decimal: " << decimal << endl;
	cout << "double pi: " << pi << endl ;
	cout << "bool isTrue: " << isTrue << endl ;
	
	return 0 ;
}
