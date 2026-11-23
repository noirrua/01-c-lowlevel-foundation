#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	signed int input = 0, Max1 = 0;

	scanf_s("%d", &input);
	Max1 = input;

	scanf_s("%d", &input);
	Max1 = (Max1 >= input) ? Max1 : input;

	scanf_s("%d", &input);

	Max1 = (Max1 >= input) ? Max1 : input;
	
	printf("Max: %d", Max1);

	return 0;
}