#include <stdio.h>

//함수 원형 정의
int add(int, int);
int sub(int, int);

int main(void)
{
	int result;
	int (*pf)(int, int);

	pf = add;
	result = pf(10, 20);
	printf("10+20은 %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-10은 %d\n", result);

	return 0;
}

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}