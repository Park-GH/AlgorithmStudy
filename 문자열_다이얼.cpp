#include <iostream>
#include <string>
using namespace std;
int dial(char i) {
	if (i == '1')
		return 2;
	if (i >= 'A' && i <= 'C')
		return 3;
	if (i >= 'D' && i <= 'F')
		return 4;
	if (i >= 'G' && i <= 'I')
		return 5;
	if (i >= 'J' && i <= 'L')
		return 6;
	if (i >= 'M' && i <= 'O')
		return 7;
	if (i >= 'P' && i <= 'S')
		return 8;
	if (i >= 'T' && i <= 'V')
		return 9;
	if (i >= 'W' && i <= 'Z')
		return 10;
	if (i == '+' || i == '-' || i == '*' || i == '/')
		return 11;


}


int main() {
	string str;
	cin >> str;
	int i = 0;
	int time = 0;
	while (str[i] != '\0') {
		time += dial(str[i++]);
	}
	cout << time;
}