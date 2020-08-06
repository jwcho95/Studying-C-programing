/*구조체에게 특정한 별명을 지어 별명을 통해 구조체를 사용할 수 있다.*/

//#include <stdio.h>
//
//main()
//{
//	struct man {
//		int age;
//		char name[10];
//		struct man* next;
//	};
//	
//	typedef struct man Man; // 구조체 man은 이제 struct 키워드 없이 Man 자료형으로 사용한다.
//
//	Man a = { 8, "이시은" };
//	Man b = { 6, "이우진" };
//	Man c = { 7, "이지훈" };
//	Man d = { 7, "이지연" };
//
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	Man* p;
//
//	for (p = &a; p; p = p->next) {
//		printf("나이는 %d이고, 이름은 %s이다.\n", p->age, p->name);
//	}
//
//	return 0;
//}