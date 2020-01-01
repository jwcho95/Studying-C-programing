// 모두의 언어  3장 "마법상자 만들기 - 함수"


// 함수의 선언
/* #include <stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 5;

	a = a * 10;
	b = b * 10;
	c = c * 10;

	printf("a(1), b(3), c(5)의 10배는 각각 %d, %d, %d이다.", a, b, c);
} */
// 함수를 적용하기 전 형태는 위와 같다.

#include <stdio.h>

func10(int x);

int main(void)
{
	int a = 1, b = 3, c = 5;

	func10(a);
	func10(b);
	func10(c);

	printf("a(1), b(3), c(5)의 10배는 각각 %d, %d, %d이다.", func10(a), func10(b), func10(c));
}

func10(int x)
{
	x = x * 10;
}