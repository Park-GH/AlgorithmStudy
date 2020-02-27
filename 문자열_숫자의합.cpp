#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int length;
	int sum=0;
	cin >> length;
	cin >> str;
	for (int i = 0; i < length; i++)
	{
		sum += (str[i] - 48);
	}
	cout << sum;
}