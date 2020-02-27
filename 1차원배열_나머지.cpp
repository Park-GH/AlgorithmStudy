#include <iostream>
using namespace std;

int main() {
	int arr[42] = {0};
	int num;
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		arr[num % 42]++;
	}
	num = 0;
	for (int i = 0; i < 42; i++)
	{
		if (arr[i] != 0)
			num++;
	}
	cout << num;

}