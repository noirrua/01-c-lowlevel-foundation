#include <stdio.h>

int main(void)
{
	int input = 0;
	scanf_s("%d", &input);

	printf("%s\n", (input >= 80) ? "합격" : "불합격");

	return 0;
}