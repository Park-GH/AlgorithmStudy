#include <iostream>
using namespace std;

int main() {
	int num;
	string str;
	for (int i = 0; i < num; i++)
	{
		cin >> str;
		int temp = 0;
		for (int j = 0; j < ((int)str.length() / 2); j++)
		{
			if (str[j] != str[(int)str.length()-j])
			{
				if ((str[j + 1] == str[(int)str.length() - j]) || (str[j] == str[(int)str.length() - j - 1]))
				{
					temp++;
				}
				else 
				{

				}
			}
		}
	}
}