/*
1. 두 숫자를 입력받아서 그 숫자들의 합을 출력하는 프로그램을 만들어 보세요.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, add;

	printf("두개의 숫자를 입력하시오 : ");
	scanf("%f %f", &a, &b);
	
	add = a + b;

	printf("두 숫자의 합 = %f\n", add);
}