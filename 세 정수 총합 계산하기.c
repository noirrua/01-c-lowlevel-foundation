#include <stdio.h>

int main(void)
{
	int input = 0, plus = 0; //중요

	scanf_s("%d", &input);
	plus = input;

	scanf_s("%d", &input);
	plus += input;

	scanf_s("%d", &input);
	plus += input;

	printf("Total: %d\n", plus);

	return 0;
}