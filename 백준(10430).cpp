#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	int A, B, C;

	cin >> A >> B >> C;

	if ((2 <= A) && (A<= 10000) && (2 <= B) && (B<= 10000) && (2 <= C) && (C <= 10000))
	{
		cout << (A + B) % C << endl;
		cout << (A % C + B % C) % C << endl;
		cout << (A * B) % C << endl;
		cout << ((A % C) * (B % C)) % C << endl;
	}
	else {
		cout << "A,B,C�� 2�̻� 10000������ �ڿ����Դϴ�." << endl;
	}
	
	Sleep(1000);
	return 0;

}