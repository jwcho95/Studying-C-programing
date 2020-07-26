/*malloc() 함수는 개발자가 원하는 바이트 수만큼 메모리 공간을 할당 받을 수 있다. 함수 수행 결과로 할당 받은 메모리의 주소를 반환한다.*/
/*주소를 반환하기에 포인터 변수에 저장해야한다.*/

//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//	char* a;
//	a = malloc(4);
//	*a = 100;
//
//	printf("할당받은 메모리 공간의 주소는 %d\n", a);
//	printf("할당받은 메모리 공간에 저장된 값은 %d\n", *a);
//	free(a); // free 함수의 입력값으로 포인터 변수를 넣으면 메모리를 사용하지 않으면 시스템으로 반환하게 된다.
//	
//	return 0;
//}

/*이름을 사용자로부터 입력받아 이를 저장하고 출력하는 코드를 만들어보자.*/

//#include <stdio.h>
//#include <stdlib.h>
//
//char name[15];
//char* WhatIsYourName(void);
//
//int main()
//{
//	char* name1;
//	char* name2;
//
//	name1 = WhatIsYourName();
//	name2 = WhatIsYourName();
//
//	printf("Hi, %s\n", name1);
//	printf("Hi, %s\n", name2);
//	free(name1); // 메모리를 다시 시스템에 반환한다.
//	free(name2);
//
//	return 0;
//}
//
//char *WhatIsYourName(void)
//{
//	char* name = (char*)malloc(sizeof(char) * 15); // 15바이트 크기의 메모리를 할당받으라는 의미
//	
//	printf("당신의 이름을 입력해주세요: ");
//	gets(name); //get()함수는 문자열을 입력받아 차례대로 배열에 저장하는 함수이다.
//
//	return name;
//}