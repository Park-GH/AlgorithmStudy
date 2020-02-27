#include <iostream>
using namespace std;

int main() {
	int num;
	int stu_num;
	double count;
	int arr[1000];
	cin >> num;
	double sum;
	double avg;
	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < num; i++)
	{
		sum = 0;
		avg = 0;
		count = 0;
		cin >> stu_num;
		for (int j = 0; j < stu_num; j++)
		{
			cin >> arr[j];
			sum += arr[j];
		}
		avg = sum / stu_num;
		for (int j = 0; j < stu_num; j++)
		{
			if ((double)arr[j] > avg)
				count++;
		}
		cout << (count / (double)stu_num) * 100 << "%\n";
	}

}