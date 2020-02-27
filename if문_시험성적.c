#pragma warning (disable:4996)
#include <stdio.h>

int main() {
int grade, i=74;
	scanf("%d", &grade);
	if (grade == 100)
		grade = 99;
	if (grade < 60)
		grade = 40;
	printf("%c", (char)(i - grade / 10));




}