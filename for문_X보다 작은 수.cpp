#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k;
	int N,X;
	cin >> N >> X;
	for (int i=0; i < N; i++)
	{
		cin >> k;
		if (k < X)
			cout << k << " ";
	}
}