#include <stdio.h>
void main1()
{
	long a;
	printf("입력된 숫자를 거꾸로 출력\n\n");
	printf("숫자를 입력 :");
	scanf_s("%d", &a);
	printf("결과 :");
	while (a)
	{
		printf("%d", a % 10);
		a = a / 10;
	}
	printf("\n");
}