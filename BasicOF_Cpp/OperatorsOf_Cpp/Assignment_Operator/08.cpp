#include <iostream>
using namespace std;

int main() {
	int a = 30;
	a |= 5; // This is equivalent to a = a | 5;
	cout << "The value of a after |= operation is: " << a << endl;
	return 0;
}