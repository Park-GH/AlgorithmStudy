#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int arr[26] = {0};
	cin >> str;
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (97 <= str[i] && str[i] <= 122)
			arr[str[i] - 97]++;
		else
			arr[str[i] - 65]++;
	}
	int Max = 0, Max_index = 0, index = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
			index = i;
			Max_index = 0;
		}
		else if (arr[i] == Max)
		{
			Max_index++;
		}
	}
	if (Max_index)
		cout << "?";
	else
		cout << (char)(index + 65);
}