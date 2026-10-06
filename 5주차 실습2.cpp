#include<stdio.h>
int main(void)
{
	int num;
	printf_s("정수를 입력: ");
	scanf_s("%d", &num);
		if(num < 0)
			printf_s("입력 값은 0보다 작다\n");
		else
			printf_s("입력 값은 0 보다 작지 않다\n");

	return 0;
}