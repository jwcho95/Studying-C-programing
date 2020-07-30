/*구조체도 포인터 변수를 선언할 수 있다.*/

#include <stdio.h>

struct Point {
	int x, y;
};

main()
{
	struct Point a;
	struct Point* b;

	b = &a; // b에 구조체 a의 주소값을 저장

	a.x = 1;
	a.y = 2;
	printf("구조체 a점 x좌표는 %d, y좌표는 %d\n", a.x, a.y);

	b->x = 3; // -> 이 기호는 참조 연산자로 구조체 포인터 변수의 요소에 접근하는 방법이다.
	b->y = 4;

	printf("구조체 a점 x좌표는 %d, y좌표는 %d\n", a.x, a.y);

	(*b).x = 5;
	(*b).y = 6; // 역참조 연산자를 이용하여 접근하는 방법이다.

	printf("구조체 a점 x좌표는 %d, y좌표는 %d\n", a.x, a.y);
	
	return 0;
}