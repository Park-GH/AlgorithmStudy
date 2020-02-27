#include <stdio.h>

int dn(int n) {
	if (n == 0)
		return 0;
	return ((n % 10) + dn(n / 10));
}
int main() {
	int i,j;
	int arr[10000];
	arr[0] = 1;
	for (i = 1; i < 10000; i++)
	{
		arr[i] = arr[i - 1]+1;
	}
	
	for (i = 1; i <= 10000; i++)
	{
		j = i + dn(i);
		if(j<=10000)
		arr[j-1] = 0;
	}

	for (i = 0; i < 10000; i++)
	{
		if (arr[i] != 0)
			printf("%d\n", arr[i]);
	}

	


}