/*���� �����Ϳ� ���� �����غ���.*/

//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	int* b = &a;
//	int** c = &b;
//
//	printf("������ ���� a�� ���� %d\n", a);
//	printf("������ ���� a�� �ּ� ���� %d\n", &a);
//	printf("������ ������ ���� b�� ���� %d\n", b);
//	printf("������ ������ ���� b�� �ּ� ���� %d\n", &b);
//	printf("������ �������� ������ c�� ���� %d\n", c);
//
//	printf("������ ������ ���� b�� ������ ���� %d\n", *b);
//	printf("������ �������� ������ ���� c�� ������ ���� %d\n", *c);
//	printf("������ �������� ������ ���� c�� �������� ������ ���� %d\n", **c);
//
//	return 0;
//}

/*���� �����͸� �̿��Ͽ� ������ Ǯ���. �б��� a,b,c ���� �ְ�, �� �б޿��� �л����� 3�� �ִ�.*/
/*���� �Է��ϸ� �� �ݿ� �ش��ϴ� �л����� �̸��� ������ִ� ���α׷��� ������.*/

//#include <stdio.h>
//
//int main(void)
//{
//	char* class_a[3] = { "James", "Tommy", "Ada" };
//	char* class_b[3] = { "Woojin", "Sieun", "Yoonjin" };
//	char* class_c[3] = { "Hyungwoo", "Jiyeon", "Jihoon" };
//	int input_n;
//	char** select = NULL;
//
//	printf("����� ���Ͻô� ���� �Է����ּ���.(����� ���� �� 3���� �ֽ��ϴ�.): ");
//	scanf_s("%d", &input_n);
//	printf("\n");
//
//	if (input_n == 1) select = class_a;
//	else if (input_n == 2) select = class_b;
//	else if (input_n == 3) select = class_c;
//	else {
//		printf("�׷� ���� �������� �ʽ��ϴ�.\n");
//		return 0;
//	}
//
//	printf("%d�� �л����� ����� ������ �����ϴ�.\n", input_n);
//	printf("\n");
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s\n", select[i]);
//	}
//
//	return 0;
//}