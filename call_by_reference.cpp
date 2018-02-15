#include <iostream>
using namespace std;

void add_numbers(int& x, int y) {
	// X is call by refernce... the value of first changes each time
	x+=y;
}

int main() {

	int first;
	int second;


	cout << "Enter First number: ";
	cin >> first;
	cout << "Enter Second number: ";
	cin >> second;

	// Start with first = 10 abd second = 3
	add_numbers(first, second);
	cout << "The first time calling add numbers is: " << first << endl;

	// next first = 13 and second = 3
	add_numbers(second, first);
	cout << "The second time calling add numbers is: " << first << endl;

	// next first = 16 and second = 3
	add_numbers(first, second);
	cout << "The third time calling add numbers is: " << first << endl;
}