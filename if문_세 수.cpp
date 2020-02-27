#include <iostream>
using namespace std;

void swap(int * A, int * B) {
	int temp;
	temp = *B;
	*B = *A;
	*A = temp;
}
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (B > A)
		swap(&A, &B);
	if (C > B)
		swap(&B, &C);
	if (B > A)
		swap(&A, &B);
	cout << B<<endl ;
}