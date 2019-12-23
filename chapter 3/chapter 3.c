// <혼자 공부하는 C언어> 챕터 3-1

// 변수의 선언과 사용
/* #include <stdio.h>

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
} */

// char형 변수의 사용
/* #include <stdio.h>

int main(void)
{
	char ch1 = 'A'; // char 형은 문자를 주로 저장하는 용도로 사용된다.
	char ch2 = 65; // 컴파일러는 0 ~ 127 사이의 정수(아스키 코드 값)으로 바꾸어 처리하기에 char형을 사용하면 문자를 효과적으로 저장할 수 있다.

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);

	return 0;
} */

// 여러가지 정수형 변수
#include <stdio.h>

int main(void)
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short형 변수 출력: %d\n", sh);
	printf("int형 변수 출력: %d\n", in);
	printf("long형 변수 출력: %d\n", ln);
	printf("long long형 변수 출력: %lld\n", lln); // lld로 출력하지 않으면 다른 값이 나온다.
}