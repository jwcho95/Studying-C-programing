/*구조체는 배열과 다르게 대입 연산자로 복사가 가능하다.*/

//#include <stdio.h>
//
//struct abc {
//	int x;
//	int y;
//	int z;
//};
//
//main()
//{
//	struct abc a;
//	struct abc b;
//
//	a.x = 100;
//	a.y = 200;
//	a.z = 300;
//
//	b = a;
//
//	printf("b의 x좌표의 값은 %d이고, y좌표의 값은 %d이고, z좌표의 값은 %d이다.", b.x, b.y, b.z);
//	
//	return 0;
//}

/*구조체를 이용하여 사각형을 만들 수 있다.*/

//#include <stdio.h>
//
//struct Point {
//	int x, y;
//};
//
//struct Rectangle
//{
//	struct Point a;
//	struct Point b; // 구조체 안에 구조체를 사용하는 것 또한 가능하다.
//};
//
//main()
//{
//	struct Rectangle rect;
//
//	rect.a.x = 1;
//	rect.a.y = 2;
//	rect.b.x = 3;
//	rect.b.y = 4;
//
//	return 0;
//}