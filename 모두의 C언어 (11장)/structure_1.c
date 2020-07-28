/*다양한 종류의 서로 다른 자료형을 하나로 묶을 수 있는 자료형이 structure, 즉, 구조체이다.*/

//#include <stdio.h>
//
//struct myclass
//{
//	int number;
//	double weight;
//}; // 구조체의 형태를 정의한다.
//
//main()
//{
//	
//	struct myclass a;
//	struct myclass b; // 구조체 변수 선언
//
//	a.number = 12; // 구조체 내의 요소에 접근하는 방법
//	a.weight = 55.3;
//	b.number = 27;
//	b.weight = 57.6;
//
//	printf("1번 학생 번호는 %d이고, 몸무게는 %.1f입니다.\n", a.number, a.weight);
//	printf("2번 학생 번호는 %d이고, 몸무게는 %.1f입니다.\n", b.number, b.weight);
//
//	return 0;
//}

/*구조체를 간단하게 연습해보자. 3차원 정수 좌표를 저장하기 위한 구조체 Three_D를 각 멤버 변수 x,y,z를 사용하여 정의하시오.*/
/*그리고 구조체 Three_D 변수 a를 선언하여 각 멤버 변수 x,y,z에 100,200,300을 할당하고, 멤버 변수 값을 출력하세요.*/

//#include <stdio.h>
//
//struct Three_D
//{
//	int x, y, z;
//};
//
//main(void)
//{
//	struct Three_D a;
//
//	a.x = 100;
//	a.y = 200;
//	a.z = 300;
//
//	printf("x좌표,y좌표,z좌표의 값은 각각 %d,%d,%d입니다.", a.x,a.y,a.z);
//	return 0;
//}