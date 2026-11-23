#include <stdio.h>

int main(void)
{
	int A = 0, B = 0;
	scanf_s("%d %d", &A, &B);

	printf("결과: %d", A + (~B+1));
	return 0;
}