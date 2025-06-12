#include <iostream>
using namespace std;

int main() {
	// Auto Data Type in C++
	/* The auto keyword automatically detects the type of a variable based on the value you assign to it.
	 It helps you write cleaner code and avoid repeating types, especially for long or complex types.*/

	auto number = 232;
	auto decimal = 3.14;
	auto character = 'C';
	auto text = "Hi Sandhya";
	auto pi = 3.14159;

	cout << "Number: " << number << endl;
	cout << "Decimal: " << decimal << endl;	
	cout << "Character: " << character << endl;
	cout << "Text: " << text << endl;
	cout << "Pi: " << pi << endl;
	return 0;	
}