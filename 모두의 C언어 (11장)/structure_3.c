/*����ü�� ������ ������ ������ �� �ִ�.*/

#include <stdio.h>

struct Point {
	int x, y;
};

main()
{
	struct Point a;
	struct Point* b;

	b = &a; // b�� ����ü a�� �ּҰ��� ����

	a.x = 1;
	a.y = 2;
	printf("����ü a�� x��ǥ�� %d, y��ǥ�� %d\n", a.x, a.y);

	b->x = 3; // -> �� ��ȣ�� ���� �����ڷ� ����ü ������ ������ ��ҿ� �����ϴ� ����̴�.
	b->y = 4;

	printf("����ü a�� x��ǥ�� %d, y��ǥ�� %d\n", a.x, a.y);

	(*b).x = 5;
	(*b).y = 6; // ������ �����ڸ� �̿��Ͽ� �����ϴ� ����̴�.

	printf("����ü a�� x��ǥ�� %d, y��ǥ�� %d\n", a.x, a.y);
	
	return 0;
}