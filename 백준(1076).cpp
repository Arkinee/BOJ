// 백준(1076).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include <iostream>
#include <istream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string color[] =
	{"black","brown","red","orange","yellow","green","blue","violet","grey","white"};

		string a="", b="", c="";
		int A=0, B=0, C=1;
		int sum = 0;

		try {

			getline(cin, a);
			getline(cin, b);
			getline(cin, c);

		}
		catch (exception ) {

			}

			for (int i = 0; i < sizeof(color); i++) {
				if (a == color[i])
				{
					A = i * 10;
				}
			}

			for (int i = 0; i < sizeof(color); i++) {
				if (b == color[i])
				{
					B = i;
				}
			}

			for (int i = 0; i < sizeof(color); i++) {
				if (c == color[i])
				{
					for (int j = 0; j < i; j++) {
						C = C * 10;
					}
				}

				sum = (A + B) * C;
			cout << sum << endl;
		}

    return 0;
}

