#include <iostream>
using namespace std;

int main() {
	int a = 100;
	int b = 100;
	cout << "Logical OR (||) Operator: " << ((a < b) || (b > a) ? "true" : "false") << endl;
	cout << "Logical OR (||) Operator: " << ((a == b) || (b == a ) ? "true" : "false") << endl;
	return 0;
}