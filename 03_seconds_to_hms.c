#include <stdio.h>

int main(void)
{
	int A = 0;
	scanf_s("%d", &A);
	

	int hour = 0, min = 0, sec = 0;
	//이하 처리코드
	//1시간 == 3600초
	hour = A / 3600;
	min = (A % 3600) / 60;
	sec = A % 60;

	//출력
	printf("%02d:%02d:%02d\n", hour, min, sec);
	return 0;
}