// 백준(1008).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int A, B;
	double C;
	cin >> A >> B;
	if (A < 0 || A > 10 || B < 0 || B>10)
	{
		cout << "A와 B는 0과 10사이의 정수입니다." << endl;
	}


	C = (double)A / B;
	cout.precision(10);
	cout << C << endl;

    return 0;
}

