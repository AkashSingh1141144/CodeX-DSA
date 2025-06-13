#include <iostream>
using namespace std;

int main() {
	int a =10, b =5;
	int sum = a + b;
	int diff = a - b;
	int prod = a * b;
	int division = a / b;
	int modulus = a % b;
	 ++a, ++b;

	cout << "Sum: " << sum << endl;
	cout << "Difference: " << diff << endl;
	cout << "Product: " << prod << endl;
	cout << "Division: " << division << endl;
	cout << "Modulus: " << modulus << endl;
	cout << "Incremented a: " << a << endl;
	cout << "Incremented b: " << b << endl;
	return 0;
}