#include <iostream>
using namespace std;

int main() {
	int arr[10] = {0};
	int num[4];
	cin >> num[0] >> num[1] >> num[2];
	num[3] = num[0] * num[1] * num[2];
	while ( num[3] != 0)
	{
		arr[num[3] % 10]++;
		num[3] /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";
}