/*이중 포인터에 대해 공부해보자.*/

//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	int* b = &a;
//	int** c = &b;
//
//	printf("정수형 변수 a의 값은 %d\n", a);
//	printf("정수형 변수 a의 주소 값은 %d\n", &a);
//	printf("정수형 포인터 변수 b의 값은 %d\n", b);
//	printf("정수형 포인터 변수 b의 주소 값은 %d\n", &b);
//	printf("정수형 포인터의 포인터 c의 값은 %d\n", c);
//
//	printf("정수형 포인터 변수 b의 역참조 값은 %d\n", *b);
//	printf("정수형 포인터의 포인터 변수 c의 역참조 값은 %d\n", *c);
//	printf("정수형 포인터의 포인터 변수 c의 역참조의 역참조 값은 %d\n", **c);
//
//	return 0;
//}

/*이중 포인터를 이용하여 예제를 풀어보자. 학교에 a,b,c 반이 있고, 각 학급에는 학생들이 3명씩 있다.*/
/*반을 입력하면 그 반에 해당하는 학생들의 이름을 출력해주는 프로그램을 만들어보자.*/

//#include <stdio.h>
//
//int main(void)
//{
//	char* class_a[3] = { "James", "Tommy", "Ada" };
//	char* class_b[3] = { "Woojin", "Sieun", "Yoonjin" };
//	char* class_c[3] = { "Hyungwoo", "Jiyeon", "Jihoon" };
//	int input_n;
//	char** select = NULL;
//
//	printf("명단을 원하시는 반을 입력해주세요.(참고로 반은 총 3개가 있습니다.): ");
//	scanf_s("%d", &input_n);
//	printf("\n");
//
//	if (input_n == 1) select = class_a;
//	else if (input_n == 2) select = class_b;
//	else if (input_n == 3) select = class_c;
//	else {
//		printf("그런 반은 존재하지 않습니다.\n");
//		return 0;
//	}
//
//	printf("%d반 학생들의 명단은 다음과 같습니다.\n", input_n);
//	printf("\n");
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s\n", select[i]);
//	}
//
//	return 0;
//}