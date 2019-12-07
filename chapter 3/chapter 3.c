// <혼자 공부하는 C언어> 챕터 3-1

// 변수의 선언과 사용
#include <stdio.h>

int main(void)
{
	int a;
	int b, c; // 변수의 형태가 같으면 동시에 2개를 선언할 수 있다.
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);

	return 0;
}