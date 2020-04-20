// 모두의 C언어 5장 조건문 (4장은 수업으로 배웠으니 생략한다.)

// 조건문의 기본형식

// 1.	if (조건문) 문장 1;
//		문장 2
//
// 2.	if (조건문)
//			문장 1;
//		문장 2

// 기본 예시
/*#include <stdio.h>

main()
{
	if (5 > 3)
	{
		printf("위 조건은 참입니다.\n");
		printf("이 코드는 예시일 뿐입니다.\n");
	}
	printf("C\n");

	if (5 < 3) // 다음에 오는 문장들은 조건이 거짓이기 때문에 실행되지 않는다.
	{
		printf("위 조건은 거짓입니다.\n");
		printf("이 코드 역시 예시입니다.\n");
	}
	printf("finish");

	return 0;
}*/


// if-else 구문 연습
/*#include <stdio.h>

main()
{
	int a = 5;

	if (a > 3)
			printf("A\n");
	else
		printf("B\n");
	printf("C\n");

	if (a > 8)	printf("D\n");
	
	else	printf("E\n");
	
	printf("F\n");
}*/


// 정수를 양의 정수, 음의 정수 그리고 0으로 구분하기(with while 조건문)
/*#include <stdio.h>

main()
{
	int input_n;

	while (1)
	{
		printf("정수를 입력해주세요: ");
		scanf_s("%d", &input_n);

		if (input_n == 0) printf("입력하신 정수는 0입니다.\n");

		else
			input_n > 0 ? printf("입력하신 정수는 양의 정수입니다.\n") : printf("입력하신 정수는 음의 정수입니다.\n");
	}
}*/

// 두 수를 입력받아 절댓값이 큰 수를 출력하기
/*#include <stdio.h>

int max(int x, int y);

main()
{
	int input_n_1, input_n_2;

	printf("정수를 입력해주세요: ");
	scanf_s("%d %d", &input_n_1, &input_n_2);

	printf("입력한 수는 %d와 %d이고, 절댓값이 큰 수는 %d이다.", input_n_1, input_n_2, max(input_n_1, input_n_2));
}

int max(int x, int y)
{
	int plus_n1, plus_n2;
	
	if (x < 0)
		plus_n1 = x * -1;
	else
		plus_n1 = x;

	if (y < 0)
		plus_n2 = y * -1;
	else
		plus_n2 = y;

	if (plus_n1 > plus_n2)
		return x;
	else
		return y;
}*/