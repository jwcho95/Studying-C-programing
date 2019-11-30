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


#include <stdio.h>
/*int main(void)
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
