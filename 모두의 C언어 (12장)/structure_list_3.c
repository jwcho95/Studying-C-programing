/*����ü���� Ư���� ������ ���� ������ ���� ����ü�� ����� �� �ִ�.*/

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
//	typedef struct man Man; // ����ü man�� ���� struct Ű���� ���� Man �ڷ������� ����Ѵ�.
//
//	Man a = { 8, "�̽���" };
//	Man b = { 6, "�̿���" };
//	Man c = { 7, "������" };
//	Man d = { 7, "������" };
//
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	Man* p;
//
//	for (p = &a; p; p = p->next) {
//		printf("���̴� %d�̰�, �̸��� %s�̴�.\n", p->age, p->name);
//	}
//
//	return 0;
//}