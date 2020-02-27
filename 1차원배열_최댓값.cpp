#include <iostream>
using namespace std;

int main() {
	int arr[10];
	cin >> arr[0];
	int max = arr[0];
	arr[9] = 1;
	for (int i = 1; i < 9; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
		{
			max = arr[i];
			arr[9] = i + 1;
		}
	}
	cout << max << "\n" << arr[9];
}