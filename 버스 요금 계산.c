#include <stdio.h>

int main(void)
{
	int bus = 1000, age = 0;
	scanf_s("%d", &age);
	// 1. 나이 강제 조정 로직
	if (age >= 20)
		age = 20;
	// 2. 요금 계산 로직
	if (age < 20)
		bus = (int)(bus * 0.75);
	// 3. 출력은 마지막에 한 번만 수행
	printf("나이: %d, 최종요금: %d원\n", age, bus);
	return 0;
}