#include <stdio.h>
void main1()
{
	long a;
	printf("�Էµ� ���ڸ� �Ųٷ� ���\n\n");
	printf("���ڸ� �Է� :");
	scanf_s("%d", &a);
	printf("��� :");
	while (a)
	{
		printf("%d", a % 10);
		a = a / 10;
	}
	printf("\n");
}