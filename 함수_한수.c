#include <stdio.h>
int HanSoo(int N) {
	int arr[3] = {0,};
	int i = 0;
	while (1)
	{
		arr[i] = N % 10;
		if (N / 10 == 0)
			break;
		N /= 10;
		i++;
	}
	if ((arr[2] - arr[1]) == (arr[1] - arr[0]))
		return 1;
	else return 0;
}

int main() {
	int i, j=0, N;
	scanf_s("%d", &N);
	if(N<100)
	{
		j = N;
	}

	else if (N >= 100)
	{
		j = 99;
		for (i = 100; i <= N; i++)
		{
			if (i == 1000)
				break;
			if (HanSoo(i))
				j++;
		}
	}
	printf("%d", j);
}