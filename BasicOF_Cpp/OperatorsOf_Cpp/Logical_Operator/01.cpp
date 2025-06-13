#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 30;

	cout << "Logical AND (&&) Operator: " << ((a < b) && (b > a) ? "true" : "false") << endl;
	cout << "Logical AND (&&) Operator with false condition: " << ((a > b) && (b > a) ? "true" : "false") << endl;
	return 0;
}