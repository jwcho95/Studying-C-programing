// 모두의 C언어  2장 "기억상자 만들기 - 변수"


// 자료형에 관해서는 공부했으니 생략하고 다음부터 진행한다.


// 변수 사용시의 주의점
/* #include <stdio.h>

int main(void)
{
	a = 3;
	printf("변수 a의 값은 %d입니다.", a);

	return 0;
} */
// 다음과 같은 경우 오류가 발생한다. a를 선언하지 않았기 때문이다. 파이썬과는 다르게 정확하게 메모리값을 선언해주어야한다.

/* #include <stdio.h>

int main(void)
{
	int a = 3;
	int b;

	b = 7;

	printf("a의 값은 %d이고 b의 값은 %d이다.", a, b);
} */


// 예제 1 : 두 변수의 값 교환하기
/* #include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int c;

	printf("a의 값은 %d이고 b의 값은 %d이다.\n", a, b);

	c = b;
	b = a;
	a = c;

	printf("a의 값은 %d이고 b의 값은 %d이다.", a, b);
} */


// 예제 2 : 포탄의 세기 계산하기
// 현재 개발 중인 A와 B 두 종류의 포탄이 있다. A 포탄의 무게가 10.5이고, 날아가는 가속도는 8.4이다. B 포탄은 무게가 12.2이고, 날아가는 가속도는 6.3이다.
// A 포탄이 B 포탄보다 몇 배 더 쎈가?
#include <stdio.h>

int main(void)
{
	double weight_A = 10.5;
	double weight_B = 12.2;
	double acceleration_A = 8.4;
	double acceleration_B = 6.3;

	double power_A = weight_A * acceleration_A;
	double power_B = weight_B * acceleration_B;
	double compare = power_A / power_B;

	printf("A의 포탄의 힘은 %.2lf이고 B의 포탄의 힘은 %.2lf이다. A 포탄의 힘이 B 포탄의 힘보다 약 %.2lf배 쎄다.", power_A, power_B,compare);
}