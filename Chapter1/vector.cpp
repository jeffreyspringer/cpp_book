#include <vector>
#include <iostream>
using namespace std ;

// at( number )       : Gets the value contained in the specified element number
// back() 		      : Gets the value in the final element
// clear()		      : Removes all vector elements
// empty() 		      : Returns true (1) if the vector is empty, or returns false (0) otherwise
// front()		      : Gets the value in the first element
// pop_back() 	      : Removes the final element
// push_back( value ) : Adds a final element to the end of the vector, containing the specified value
// size()			  : Gets the number of elements

int main()
{
	//Program code goes here.
	vector <int> vec(3, 100) ;
	
	cout << "Vector size: " << vec.size() << endl ;
	cout << "Is empty?: " << vec.empty() << endl ;
	cout << "First element: " << vec.at(0) << endl ;
	
	vec.pop_back();			// Remove final element.
	cout << "Vector size: " << vec.size() << endl ;
	cout << "Final element: " << vec.back() << endl ;
	
	vec.clear();			// Remove all elements.
	cout << "Vector size: " << vec.size() << endl ;
	
	vec.push_back(200) ; 	//Add an element.
	cout << "Vector size: " << vec.size() << endl ;
	cout << "First element: " << vec.front() << endl ;
	
	return 0 ;
}