#include <iostream>
using namespace std;


int Fibo(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return Fibo(num - 2) + Fibo(num - 1);
}

int main() {
	int num;
	cin >> num;
	cout << Fibo(num);

}