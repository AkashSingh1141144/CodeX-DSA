#include <iostream>
using namespace std;

int main() {
	int a = 11;
	a %= 2; // This is equivalent to a = a % 2;
	cout << "The value of a after %= operation is: " << a << endl;
	return 0;
}