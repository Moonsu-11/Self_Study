/*
3. ���ĺ��� �Է¹޾Ƽ� �� ���� ���ĺ��� ����ϴ� ���α׷���	����� ������. (Z����)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char alpha, next;

	printf("���ĺ��� �Է��Ͻÿ� : ");
	scanf("%c", &alpha);

	next = alpha + 1;

	if (alpha == 122)
	{
		printf("'z'�� ������ ���ĺ��Դϴ�.");
	}
	else {
		printf("���� ���ĺ��� %c �Դϴ�.", next);
	}
}