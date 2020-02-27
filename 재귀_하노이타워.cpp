#include <stdio.h>
void HanoiTowerMove(int num, char from, char by, char to) {
	if (num == 1) printf("%c %c\n", from, to);
	else {
		HanoiTowerMove(num - 1, from, to, by);
		printf("%c %c\n", from, to);
		HanoiTowerMove(num - 1, by, from, to);
	}
}
int main() {
	int num, sum = 1, i=0;
	scanf_s("%d", &num);
	for (i; i < num-1; i++) {
		sum = sum*2 + 1;
	}
	printf("%d\n", sum);
	HanoiTowerMove(num, '1', '2', '3');
	return 0;
}