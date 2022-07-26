/*
2-1. 체중(kg, 실수)과 키(m, 실수)를 입력받아서 체질량 지수를 구하는 프로그램을 만들고

고도 비만 : 35 이상
중등도 비만 : 30 - 35
경도 비만 : 25 - 30
과체중 : 23 - 24.9
정상 : 18.5 - 22.9
저체중 : 18.5 미만

을 알맞게 출력하시오.
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

	printf("당신의 BMI는 %f 입니다.\n", BMI);

	if (BMI >= 35)
	{
		printf("당신은 고도비만 입니다.");
	}
	else if (BMI > 30)
	{
		printf("당신은 중등도 비만 입니다.\n");
	}

	else if (BMI > 25)
	{
		printf("당신은 경도 비만 입니다.\n");
	}

	else if (BMI > 23)
	{
		printf("당신은 과체중 입니다.\n");
	}
	else if (BMI > 18.5)
	{
		printf("당신은 정상 입니다.\n");
	}
	else
	{
		printf("당신은 저체중 입니다.\n");
	}
}