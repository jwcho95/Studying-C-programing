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
/* #define _CRT_SECURE_NO_WARNINGS // 이 문장이 없으면 비쥬얼 스튜디오에서는 보안상의 이유로 아래의 코드가 실행되지 않는다.
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
} */


// 들어오고 나가는 게 없을 때 사용하는 void
/*#include <stdio.h>

int test1(void); // void의 뜻은 '공허한', '빈' 이라는 뜻을 지니고 있으며 C언어에서는 함수의 입력 또는 출력이 없을 때 void를 쓰거나 아무것도 안 쓴다.
				 // int test1(void)랑 int test1()이랑은 같은 의미라는 소리이다.

main()
{
	int result;
	result = test1();

	printf("test1 함수로부터 돌려받은 값은 %d\n", result);
}

int test1(void) // 내가 항상 즐겨쓰는 int main(void)는 그저 main이란 함수의 본체였을 뿐이였다.
{
	return 10;
}*/


// 출력이 없을 때도 사용하는 void
/*#include <stdio.h>

void test2(int x);

main()
{
	test2(3); // 어떠한 값도 main 함수에 돌려주지 않았다.
}

void test2(int x)
{
	printf("메인 함수로부터 받은 값은 %d입니다.\n", x);
}*/


// 함수 연습
#include <stdio.h>

int func1(void);
char func2(void);
func3(void);
func4(int x);

main()
{
	int input_n;

	func3();
	printf("원하시는 숫자를 입력하세요:");
	scanf_s("%d", &input_n); // 입력받은 값은 4번째 함수로 간다.
	printf("입력하신 숫자는 %d이고, 첫번째 함수로부터 받은 값은 %d이고, 두번째 함수로부터 돌려받은 문자는 %c이다.\n", input_n, func1(), func2());
	printf("그리고 네번째 함수는 입력한 숫자를 10배로 돌려주기에 %d을 돌려주었다.", func4(input_n));

	return 0;
}

int func1() // 숫자 1을 반환하는 함수
{
	return 1;
}

char func2() // 문자 A를 반환하는 함수
{
	return 'A';
}

func3() // 호출하면 Hello를 출력하는 함수
{
	printf("Hello\n");
}

func4(int x) // 입력받은 수를 10배로 늘려 반환하는 함수
{
	int new_n, mul;

	new_n = x;
	
	mul = new_n * 10;

	return mul;
}