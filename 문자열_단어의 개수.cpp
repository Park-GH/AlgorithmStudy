#include <string>
#include <iostream>
using namespace std;

int main() {
	string str;
	getline(cin,str);
	int i = 0;
	int num=0;
	while(str[i]!='\0'){
		if (str[i] != ' ')
		{
			num++;
			while (str[i] != ' ')
			{
				i++;
				if (str[i] == '\0')
					break;
			}
		}
		if (str[i] == '\0')
			break;
		i++;
	}
	cout << num;
}