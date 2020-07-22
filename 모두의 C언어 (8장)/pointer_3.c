/*배열을 포인터 연산을 통해서 접근하고 변경하는 것을 연습해보자.*/

//#include <stdio.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* b = a;
//
//	for (int i = 0; i < 5; i++)
//	{
//		*b = 11 + i;
//		b += 1;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("a[%d]의 값은 %d\n", i, a[i]);
//	}
//	return 0;
//}

/*아래의 코드는 책 속에 제시된 여러 방법들이다.*/

//#include <stdio.h>

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* b = a;
//	int i;
//
//	for (i = 0; i < 5; i++)
//		*(b + i) += 10;
//
//	printf("첫 번째 방법\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//
//	printf("두 번째 방법\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", *(b + i));
//	printf("\n");
//
//	printf("세 번째 방법\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", b[i]); // 포인터 b가 배열 a[0]의 주소를 가리키고 있다면 b[i]는 곧 a[i]를 의미한다.
//	printf("\n");
//
//	return 0;
//}