#include <iostream>
using namespace std;

int main() {
	string str;
	int casenum=0;
	int num = 0;
	cin >> casenum;
	for (int i = 0; i < casenum; i++) {
		bool ch[26] = { 0, };
		int j = 0;
		cin >> str;
		while (str[j] != '\0') {
			if (ch[str[j] - 97] == 1)
				break;
			ch[str[j] - 97] = 1;
			while (str[j] == str[j + 1])
				j++;
			j++;
		}	
		if (str[j] == '\0')
			num++;
	}
	cout << num;
}