/*
3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을	만들어 보세요. (Z제외)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char alpha, next;

	printf("알파벳을 입력하시오 : ");
	scanf("%c", &alpha);

	next = alpha + 1;

	if (alpha == 122)
	{
		printf("'z'가 마지막 알파벳입니다.");
	}
	else {
		printf("다음 알파벳은 %c 입니다.", next);
	}
}