/*
2. 체중(kg, 실수)과 키(m, 실수)를 입력받아서 체질량 지수를 구하는 프로그램을 만들어보세요.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float weight, height, BMI;

	printf("체중(kg)을/를 입력하시오 : ");
	scanf("%f", &weight);
	printf("키(m)을/를 입력하시오 : ");
	scanf("%f", &height);

	BMI = weight / (height * height);

	printf("BMI : %f", BMI);
}