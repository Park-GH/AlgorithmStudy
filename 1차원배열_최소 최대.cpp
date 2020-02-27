#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int *arr = new int[num];
	cin >> arr[0];
	int max=arr[0], min=arr[0];
	for (int i = 1; i < num; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min << " " << max;
	delete arr;
}