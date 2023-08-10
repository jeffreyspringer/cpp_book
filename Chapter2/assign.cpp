#include <iostream>
using namespace std ;

// = : ex. a = b ... eq. a = b
// += : ex. a += b ... eq. a = (a + b)
// -= : ex. a -= b ... eq. a = (a - b)
// *= : ex. a *= b ... eq. a = (a * b)
// /= : ex. a /= b ... eq. a = (a / b)
// %= : ex. a %= b ... eq. a = (a % b)

int main()
{
	// Program code goes here.
	
	int a , b ;
	
	cout << "Assign values: " ;
	cout << "a = " << (a = 8) << " " ;
	cout << "b = " << (b = 4) ;
	
	cout << endl << "Add & assign: " ;
	cout << "a += b (8 += 4) a = " << (a += b) ;
	cout << endl << "Subtract & assign: " ;
	cout << "a -= b (12 -= 4) a = " << (a -= b) ;
	cout << endl << "Multiply & assign: " ;
	cout << "a *= b (8 *= 4) a = " << (a *= b) ;
	cout << endl << "Divide & assign: " ;
	cout << "a /= b (32 /= 4) a = " << (a /= b) ;
	cout << endl << "Modulus & assign: " ;
	cout << "a %= b (8 %= 4) a = " << (a %= b) ;
	
	return 0 ;
}