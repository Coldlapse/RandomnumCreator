#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, k_f2, k_b2;
	long num1 = 1000000, num2 = 100, reverse = 0, k_temp, temp;
	
	double k = 6920, temp1, temp2;

	k_temp = k;
    for (; k_temp != 0;)
		{
			reverse = reverse * 10;
			reverse = reverse + k_temp % 10;
			k_temp = k_temp / 10;} // reverse는 k의 역순수

	for (i = 1; i <= 30; i++)

			
		
		
	{ /*
		temp1 = pow(k, 2); // k의 2승 = temp1
		temp = temp1 / num1; // temp = temp1을 1000000으로 나눈 수
		temp2 = temp1 - temp*num1;
		temp = temp2 / num2;
		printf("%5d\n", temp);
		k = temp;
		*/
		
		
    
	k_f2 = (k / 100); // k_f2는 k의 앞 2자리
	k_b2 = (reverse / 100); // k_b2는 k의 역수 뒤 두자리
	temp1 = (k + reverse)*(pow(k_f2,2) + pow(k_b2,2));
	// temp1 = k 더하기 k의 역수 곱하기 앞2자리의 제곱 더하
	temp = temp1 / num1;
	temp2 = temp1 - temp*num1;
	temp = temp2 / num2;
	if (temp <= 1000)
	{
		temp = temp * 10;
	}
	printf("%5d\n", temp);
	k = temp;
	
	}
	
	return 0;
}