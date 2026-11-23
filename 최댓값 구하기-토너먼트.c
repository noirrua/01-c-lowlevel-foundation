#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int max = 0, a, b, c;

	scanf_s("%d%d%d", &a, &b, &c);
	max = (a > b) ? a : b;
	max = (c > max) ? c : max;

	printf("Max: %d\n", max);
	return 0;
}