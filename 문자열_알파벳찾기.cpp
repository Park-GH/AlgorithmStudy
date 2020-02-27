#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int index;
	int arr[26];
	std::fill_n(arr, 26, -1);
	int i = str.length() - 1;
	for (i; i >= 0; i--)
	{
 		arr[(int)str[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++)
	cout << arr[i] << " ";
}