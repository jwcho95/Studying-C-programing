/*구조체와 연결 리스트 예제를 풀어보자.*/
/*친구 네 명의 나이와 이름 정보를 저장하는 연결 리스트를 자기 참조 구조체를 이용해서 생성하려고 한다.*/
/*내 친구의 정보를 저장할 수 있도록 구조체를 선언하고 내 친구의 나이를 추가하고, 서로 연결하여 내 친구 연결 리스트를 구성해보라.*/
/*내 친구의 정보를 저장하는 연결 리스트 구성이 완료되었으면 리스트를 순회하면서 내 친구의 나이와 이름을 차례대로 출력하는 코드를 작성하라.*/

#include <stdio.h>
//#include <stdlib.h>
//
//struct friend {
//	int age;
//	char* name;
//	struct friend *next;
//};
//
//main()
//{
//	struct friend a, b, c, d;
//	
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	a.age = 8;
//	a.name = "이시은";
//
//	b.age = 6;
//	b.name = "이우진";
//
//	c.age = 7;
//	c.name = "이지훈";
//
//	d.age = 7;
//	d.name = "이지연";
//
//	struct friend* p;
//
//	for (p = &a; p != NULL; p = p->next) {
//		printf("%d", p->age);
//		printf("%s ", p->name);
//	}
//	
//	return 0;
//}

/*위의 코드들을 리스트를 사용하여 만들 수도 있다.*/

#include <stdlib.h>

struct friend {
	int age;
	char name[10];
	struct friend* next;
};

main()
{
	struct friend a = { 8, "이시은" };
	struct friend b = { 6, "이우진" };
	struct friend c = { 7, "이지훈" };
	struct friend d = { 7, "이지연" };

	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = NULL;

	struct friend* p;

	for (p = &a; p != NULL; p = p->next) {
		printf("%d", p->age);
		printf("%s ", p->name);
	}

	return 0;
}