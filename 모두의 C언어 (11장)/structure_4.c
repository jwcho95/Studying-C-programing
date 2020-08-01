/*기호 상수 열거형 자료형 enum*/

//#include <stdio.h>
//
//enum Day // enum 열거형은 서로 연관된 상수 값들의 집합
//{
//	sun = 0, // 초기값을 입력하면 다음 값들이 자동으로 생성된다.
//	mon,
//	tue,
//	wed,
//	thu,
//	fri,
//	sat
//};
//
//main()
//{
//	enum Day a;
//
//	a = fri;
//
//	printf("%d", a);
//
//	return 0;
//}

/*enum 열거형의 사용법*/

//#include <stdio.h>
//
//enum Gate
//{
//	AND_Gate = 1,
//	OR_Gate,
//	NOT_Gate
//};
//
//main()
//{
//	int input_n;
//	
//	printf("1~3중 입력하세요: ");
//	scanf_s("%d", &input_n);
//	
//	switch (input_n)
//	{
//	case AND_Gate: // enum 열거형을 사용함으로써 가독성이 훨씬 좋아진다.
//		printf("AND_Gate");
//		break;
//	case OR_Gate:
//		printf("OR_Gate");
//		break;
//	case NOT_Gate:
//		printf("NOT_Gate");
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//}

/*enum 열거형을 for문에 적용하는 방법*/

//#include <stdio.h>
//
//enum day
//{
//	one = 1,
//	two,
//	three,
//	four,
//	five
//};
//
//main()
//{
//	for (int i = one; i <= five; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}