#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int i = 0;
	int num = 0;
	while (str[i] != '\0') {
		if ((str[i] == 'c') && (str[i + 1] == '=' || str[i + 1] == '-'))
			i++;
		else if ((str[i] == 'd') && (str[i + 1] == '-'))
			i++;
		else if ((str[i] == 'd') && (str[i + 1] == 'z') && (str[i + 2] == '='))
			i += 2;
		else if ((str[i + 1] == 'j') && (str[i] == 'l' || str[i] == 'n'))
			i++;
		else if ((str[i + 1] == '=') && (str[i] == 's' || str[i] == 'z'))
			i++;
		i++;
		num++;
	}
	cout << num;
}