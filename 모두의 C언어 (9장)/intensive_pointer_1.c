/*포인터의 기초를 공부하였으니 조금 더 나아가 이제 포인터 배열에 대해 공부해보자.*/
/*특히 문자열을 처리할 때 포인터 배열이 자주 사용된다.*/

//#include <stdio.h>
//
//main()
//{
//	int i;
//	char my[5][7] = { "Hi" , "My" , "Name", "is" , "JW" };
//	
//	for (i = 0; i < 5; i++) {
//		printf("%s\n", my[i]);
//	}
//
//	printf("\n");
//	
//	char *intro[5] = { "Hi" , "My" , "Name", "is" , "JW" }; // 이 방식이 메모리를 더욱 절약할 수 있다.
//	for (i = 0; i < 5; i++) {
//		printf("%s\n", intro[i]);
//	}
//
//
//	return 0;
//}

/*입력한 문자열을 받는 방법*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char input[10];
//	
//	printf("문자열을 입력하세요: ");
//	scanf("%[^\n]s", input);
//
//	printf("%s", input);
//	return 0;
//}