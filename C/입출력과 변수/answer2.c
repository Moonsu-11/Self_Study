/*
2. ü��(kg, �Ǽ�)�� Ű(m, �Ǽ�)�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ��������.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float weight, height, BMI;

	printf("ü��(kg)��/�� �Է��Ͻÿ� : ");
	scanf("%f", &weight);
	printf("Ű(m)��/�� �Է��Ͻÿ� : ");
	scanf("%f", &height);

	BMI = weight / (height * height);

	printf("BMI : %f", BMI);
}