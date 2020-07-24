/*2차원 배열과 주소의 상관 관계*/

//#include <stdio.h>
//
//int main()
//{
//	int a[2][3] = { 1,2,3,4,5,6 };
//
//	printf("배열 a 시작 메모리 주소는 %d\n", a);
//	printf("배열 a에 포함된 첫 번째 배열의 시작 주소는 %d\n", a[0]);
//	printf("배열 a 시작 메모리 주소는 %d\n", &a[0][0]);
//	printf("배열 a에 포함된 두 번째 배열의 시작 주소는 %d\n", a[1]);
//	printf("배열 a에 포함된 두 번째 배열의 시작 주소는 %d\n", &a[1][0]);
//	printf("\n");
//	printf("배열 a의 크기는 %d 바이트\n", sizeof(a));
//	printf("배열 a에 포함된 첫 번째 배열의 크기는 %d바이트\n", sizeof(a[0]));
//	printf("배열 a에 포함된 두 번째 배열의 크기는 %d바이트\n", sizeof(a[1]));
//
//	return 0;
//}

/*포인터 배열을 이용하는 방법 예시*/

//#include <stdio.h>
//
//main()
//{
//	char* name[6] = { "Hyungwoo", "Yoonjin", "Sieun", "Woojin", "Jiyeon", "Jihoon" };
//
//	for (int i = 0; i < 6; i++) {
//		printf("%s\n", name[i]);
//	}
//	return 0;
//}