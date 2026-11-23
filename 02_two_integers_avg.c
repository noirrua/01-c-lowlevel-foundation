#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	scanf_s("%d%d", &a, &b);

	printf("AVG = %.2f\n", ((float)a + b) / 2.0);
	return 0;
}