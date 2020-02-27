#include <iostream>
using namespace std;

int main() {
	int cycle = 0;
	int n,N;
	cin >> n;
	N = n;
	while (1)
	{
		N = (N % 10 * 10) + ((N / 10 + N % 10) % 10);
		cycle++;
		if (n == N)
			break;
	}
	cout << cycle;

}