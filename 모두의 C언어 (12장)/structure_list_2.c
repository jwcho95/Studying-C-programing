/*����ü�� ���� ����Ʈ ������ Ǯ���.*/
/*ģ�� �� ���� ���̿� �̸� ������ �����ϴ� ���� ����Ʈ�� �ڱ� ���� ����ü�� �̿��ؼ� �����Ϸ��� �Ѵ�.*/
/*�� ģ���� ������ ������ �� �ֵ��� ����ü�� �����ϰ� �� ģ���� ���̸� �߰��ϰ�, ���� �����Ͽ� �� ģ�� ���� ����Ʈ�� �����غ���.*/
/*�� ģ���� ������ �����ϴ� ���� ����Ʈ ������ �Ϸ�Ǿ����� ����Ʈ�� ��ȸ�ϸ鼭 �� ģ���� ���̿� �̸��� ���ʴ�� ����ϴ� �ڵ带 �ۼ��϶�.*/

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
//	a.name = "�̽���";
//
//	b.age = 6;
//	b.name = "�̿���";
//
//	c.age = 7;
//	c.name = "������";
//
//	d.age = 7;
//	d.name = "������";
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

/*���� �ڵ���� ����Ʈ�� ����Ͽ� ���� ���� �ִ�.*/

#include <stdlib.h>

struct friend {
	int age;
	char name[10];
	struct friend* next;
};

main()
{
	struct friend a = { 8, "�̽���" };
	struct friend b = { 6, "�̿���" };
	struct friend c = { 7, "������" };
	struct friend d = { 7, "������" };

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