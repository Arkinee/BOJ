// 백준(10869).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	int A, B;

	fflush(stdin);
	cin >> A >> B;

	if (A < 1 || A> 10000 || B < 1 || B > 10000)
	{
		cout << "A와 B는 1이상 10000이하의 자연수입니다." << endl;
	}
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	cout << A % B << endl;

    return 0;
}

