/*
2-1. ü��(kg, �Ǽ�)�� Ű(m, �Ǽ�)�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� �����

�� �� : 35 �̻�
�ߵ �� : 30 - 35
�浵 �� : 25 - 30
��ü�� : 23 - 24.9
���� : 18.5 - 22.9
��ü�� : 18.5 �̸�

�� �˸°� ����Ͻÿ�.
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

	printf("����� BMI�� %f �Դϴ�.\n", BMI);

	if (BMI >= 35)
	{
		printf("����� ���� �Դϴ�.");
	}
	else if (BMI > 30)
	{
		printf("����� �ߵ �� �Դϴ�.\n");
	}

	else if (BMI > 25)
	{
		printf("����� �浵 �� �Դϴ�.\n");
	}

	else if (BMI > 23)
	{
		printf("����� ��ü�� �Դϴ�.\n");
	}
	else if (BMI > 18.5)
	{
		printf("����� ���� �Դϴ�.\n");
	}
	else
	{
		printf("����� ��ü�� �Դϴ�.\n");
	}
}