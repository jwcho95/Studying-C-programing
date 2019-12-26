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
/* #include <stdio.h>

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
} */
//	char(1바이트) <= short(2바이트) <= int(4바이트) <= long(4바이트) <= long long(8바이트) 
//		: 크기에 따라 자료형을 사용할 수 있다. 보통은 int, 정말 큰 값을 저장할 때는 long형을 사용한다.

//unsigned 정수 자료형 : 음수가 없는 데이터를 저장할 때 사용한다.
//unsigned를 잘못 사용한 경우
#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295; // 두 정수가 메모리에 저장되는 형태는 같다.
	printf("%d\n", a); // %d는 부호가 있는 정수를 10진수로 출력한다는 의미이다.
	a = -1;
	printf("%u\n", a); // %u는 부호 없이 10진수로 출력한다는 의미이다.

	return 0;
}
