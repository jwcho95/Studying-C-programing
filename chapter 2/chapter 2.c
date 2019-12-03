// <혼자 공부하는 C언어> 챕터 2-1

// 1. main 함수의 활용
/*작성자 : 조재완
  제목 : 10과 20을 더하는 프로그램*/

/*int main(void)
{
	10 + 20;
	//실행코드
	return 0; // 함수의 종료를 알린다.
}*/


/* #include <stdio.h>
int main(void)
{
	printf("Be happy!");
	printf("My friend.");

	return 0;
}*/
// 결과를 보면 이 두 문장은 서로 연속되어서 나온다. 그 이유는 개행 문자가 없기 때문이다. 파이썬과는 다르게 개행 문자를 집어 넣어주어야한다.

// 2. 제어 문자를 사용한 출력
/*#include <stdio.h>

int main(void)
{
	printf("Be happy!\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");	// 파이썬과 마찬가지로 문자열 내에 \t를 삽입하여서 띄어쓰기를 할 수 있다.
	printf("Goot\bd\tchance\n"); // \b는 backspace를 한 후에 새로운 단어로 수정할 수 있게 도와준다.
	printf("Cow!\rW\a\n"); // \r은 carriage return 즉, 맨 앞으로 이동하여 수정을 할 수 있게 한다. \a는 벨소리를 내는 기능이다. \b와 \r의 기능을 보아 컴퓨터는 기본적으로 삽입이 아닌 수정의 기능을 사용하는 것으로 보인다.
}*/

// 3. 정수와 실수의 출력
/* #include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d 와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	
	return 0;
} */

// <혼자 공부하는 C언어> 챕터 2-2

// 세 가지 진법의 정수 상수 (10진수, 8진수, 16진수)
/* #include <stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc); // 10진수, 8진수, 16진수를 10진수로 표현한 것이다.

	printf("\n");

	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12); // 10진수를 각각 8진수, 16진수로 표현하도록 한 것이다. X를 대문자로 쓰면 16진수에서 대문자로 출력된다.
	
	return 0;
} */

// 정규화 표기법 : 소수점 앞에 0이 아닌 유효 숫자 한 자리를 사용하여 지수형태로 변화 시킨 것. ex) 3.14e-5, 5.69e7
#include <stdio.h>

int main(void)
{
	printf("%.1lf\n", 1e6); // 1 * 10^6을 소수점 이하 한 자리까지만 출력하라는 뜻
	printf("%.7lf\n", 3.14e-5); // 3.14 * 10^(-5)을 소수점 이하 7번째 자리까지만 출력하라는 뜻
	printf("%le\n", 0.0000314); // 소수점 형태의 실수를 지수 형태로 출력하라는 뜻
	printf("%.2le\n", 0.0000314); // 소수점 형태의 실수를 지수 형태로 소수점 이하 2번째 자리까지만 출력하라는 뜻
}