#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void makeStar(int k, string *arr);

int main() {

	ios::sync_with_stdio(false);	//�ӵ� ��� �⿩
	int n;

	cin >> n;
	if (n % 3 != 0 || ((n % 2 != 0) && (n != 3))) {	//n�� 3�� 2�� ��������Ѵ�.
		return -1;
	}


	string *arr = new string[n];

	arr[0] = "  *  ";	//���� �⺻ ����
	arr[1] = " * * ";
	arr[2] = "*****";

	for (int k = 1; 3 * pow(2, k) <= n; ++k) {
		makeStar(k, arr);
	}

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << endl;
	}

}

void makeStar(int k, string *arr) {

	int bottom = 3 * pow(2, k);			//
	int middle = bottom / 2;

	for (int i = middle; i < bottom; ++i) {	//���ݺ��� ��Ź����

		arr[i] = arr[i - middle] + " " + arr[i - middle];	// [���ݸ�� + 1ĭ ���ڸ� + ���� ���] �� ����	

	}

	string space = "";
	while (space.length() < middle) {	//���� ���ϴ� ����ũ�� ��ŭ�� �� ������ �տ� ��������Ѵ�.
		space += " ";
	}

	for (int i = 0; i < middle; i++) {		// ������ ������ ���� + ������ ��� + ���� �� ����� �ؿ� ���ݵ� ����� ����
		arr[i] = space + arr[i] + space;
	}

}