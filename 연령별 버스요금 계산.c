#include <stdio.h>

int main(void)
{
	int age = 0;
	int fee = 1000;

	scanf_s("%d", &age);

	// 1차 분할: (a, b) vs (c, d)
	if (age < 14)
	{
		// 2차 분할: a(0~3) vs b(4~13)
		if (age < 4)
			fee = 0;
		else
			fee = fee * 50 / 100;
	}
	else
	{
		// 2차 분할: c(14~19) vs d(20 이상) -> 이미 14 이상이므로 20만 비교
		if (age < 20)
			fee = fee * 75 / 100;
		else
			fee = fee; // 기본값 1000원 유지 (이 else 블록은 생략 가능)
	}

	printf("버스요금은 %d입니다.\n", fee);
	return 0;
}