/*��ȣ ��� ������ �ڷ��� enum*/

//#include <stdio.h>
//
//enum Day // enum �������� ���� ������ ��� ������ ����
//{
//	sun = 0, // �ʱⰪ�� �Է��ϸ� ���� ������ �ڵ����� �����ȴ�.
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

/*enum �������� ����*/

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
//	printf("1~3�� �Է��ϼ���: ");
//	scanf_s("%d", &input_n);
//	
//	switch (input_n)
//	{
//	case AND_Gate: // enum �������� ��������ν� �������� �ξ� ��������.
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

/*enum �������� for���� �����ϴ� ���*/

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