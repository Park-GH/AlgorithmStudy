#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<long long> v;

	long long n, m;
	long long temp;
	long long first = 0, last = 0, mid = 0;
	long long result = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
		if (v[i] > last)
			last = v[i];
	}

	while (first <= last) {
		long long total = 0;
		mid = (first + last) / 2;
		for (int i = 0; i < n; i++) {
			if (v[i] > mid)
				total += v[i] - mid;
		}

		if (total >= m) {
			result = mid;
			first = mid + 1;
		}
		else
			last = mid - 1;
	}
	cout << result;
}