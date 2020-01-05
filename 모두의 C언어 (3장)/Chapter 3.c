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

/* #include <stdio.h>

func10(int x);

int main(void)
{
	int a = 1, b = 3, c = 5;

	printf("a(1), b(3), c(5)의 10배는 각각 %d, %d, %d이다.", func10(a), func10(b), func10(c));
}

func10(int x)
{
	x = x * 10;
} */


// 함수의 값 반환
/* #include <stdio.h>

func10(int x);

int main(void)
{
	int a = 1, b = 3, c = 5;

	printf("a(1), b(3), c(5)의 10배는 각각 %d, %d, %d이다.", func10(a), func10(b), func10(c));
}

int func10(int x)
{
	x = x * 10;
	return x;
} */


// 값을 입력 후 더하기 계산하기
#define _CRT_SECURE_NO_WARNINGS // 이 문장이 없으면 비쥬얼 스튜디오에서는 보안상의 이유로 아래의 코드가 실행되지 않는다.
#include <stdio.h>

double abc(int x, int y);

main()
{
	int x, y;
	double z;

	printf("정수 x의 값을 입력해주세요: ");
	scanf("%d", &x);

	printf("정수 y의 값을 입력해주세요: ");
	scanf("%d", &y);

	z = abc(x, y);
	printf("z의 값은 %f\n", z);
}

double abc(int x, int y)
{
	return x + y + 3.14;
}