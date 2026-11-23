#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	signed int input = 0, max1 = 0;
	
	scanf_s("%d", &input);
	max1 = input;
	scanf_s("%d", &input);
	if (input > max1)
	{
		max1 = input;
	}
	scanf_s("%d", &input);
	if (input > max1)
	{
		max1 = input;
	}
	printf("Max: %d\n", max1);
	return 0;
}