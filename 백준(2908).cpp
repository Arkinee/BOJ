#include <iostream>
#include <stdio.h>
using namespace std;


int main() {

	void change(char []);
	void compare(char[], char[]);

	char a[3]{}, b[3]{};

	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 3; i++) {
		cin >> b[i];
	}

	change(a);
	change(b);

	compare(a, b);

	return 0;
}

void change(char n[]) {

	char temp;

	temp = n[0];
	n[0] = n[2];
	n[2] = temp;

}

void compare(char a[3], char b[3]) {

	int A = (int)a[0] * 100 + (int)a[1] * 10 + (int)a[2];
	int B = (int)b[0] * 100 + (int)b[1] * 10 + (int)b[2];
	
	if (A > B) {
		for (int i = 0; i < 3; i++) {
			cout << a[i];
		}
		cout << "\n";
	}
	else if (B > A) {
		for (int i = 0; i < 3; i++) {
			cout << b[i];
		}
		cout << "\n";
	}

}

