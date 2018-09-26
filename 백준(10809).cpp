#include <iostream>
#include <string>
using namespace std;


int main() {

	string s;
	int cnt[26]{};
	char alpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	getline(cin, s);

	for (int i = 0; i < 26; i++) {
		cnt[i] = -1;
	}

	for (int i = 0; i < s.length(); i++) {

		for (int j = 0; j < 26; j++) {
			if (alpha[j] == s[i] && cnt[j] == -1) {
				cnt[j] = i;
			}
			else if (alpha[j] == s[i] && cnt[i] != -1) {
				break;
			}

		}
	}
		for (int i = 0; i < 26; i++) {
			printf("%d ", cnt[i]);
		}

	

	return 0;
}