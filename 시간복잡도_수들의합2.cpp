#include <iostream>
using namespace std;

int main() {
	int n[10000], num, m, sum=0;
	int i;
	int number = 0;
	cin >> num >> m;
	for (i = 0; i < num; i++)
		cin >> n[i];
	int j = 0;
	for (i = 0; i < num; i++) {
		sum = 0;
		j = i;
		while ((sum < m)&&(j<num)) {
			sum += n[j];
			if (sum == m) {
				number++;
				break;
			}
			j++;
		}
	}
	cout << number;
}