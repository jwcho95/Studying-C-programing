// ����� C��� 5�� ���ǹ� (4���� �������� ������� �����Ѵ�.)

// ���ǹ��� �⺻����

// 1.	if (���ǹ�) ���� 1;
//		���� 2
//
// 2.	if (���ǹ�)
//			���� 1;
//		���� 2

// �⺻ ����
/*#include <stdio.h>

main()
{
	if (5 > 3)
	{
		printf("�� ������ ���Դϴ�.\n");
		printf("�� �ڵ�� ������ ���Դϴ�.\n");
	}
	printf("C\n");

	if (5 < 3) // ������ ���� ������� ������ �����̱� ������ ������� �ʴ´�.
	{
		printf("�� ������ �����Դϴ�.\n");
		printf("�� �ڵ� ���� �����Դϴ�.\n");
	}
	printf("finish");

	return 0;
}*/


// if-else ���� ����
/*#include <stdio.h>

main()
{
	int a = 5;

	if (a > 3)
			printf("A\n");
	else
		printf("B\n");
	printf("C\n");

	if (a > 8)	printf("D\n");
	
	else	printf("E\n");
	
	printf("F\n");
}*/


// ������ ���� ����, ���� ���� �׸��� 0���� �����ϱ�(with while ���ǹ�)
/*#include <stdio.h>

main()
{
	int input_n;

	while (1)
	{
		printf("������ �Է����ּ���: ");
		scanf_s("%d", &input_n);

		if (input_n == 0) printf("�Է��Ͻ� ������ 0�Դϴ�.\n");

		else
			input_n > 0 ? printf("�Է��Ͻ� ������ ���� �����Դϴ�.\n") : printf("�Է��Ͻ� ������ ���� �����Դϴ�.\n");
	}
}*/

// �� ���� �Է¹޾� ������ ū ���� ����ϱ�
/*#include <stdio.h>

int max(int x, int y);

main()
{
	int input_n_1, input_n_2;

	printf("������ �Է����ּ���: ");
	scanf_s("%d %d", &input_n_1, &input_n_2);

	printf("�Է��� ���� %d�� %d�̰�, ������ ū ���� %d�̴�.", input_n_1, input_n_2, max(input_n_1, input_n_2));
}

int max(int x, int y)
{
	int plus_n1, plus_n2;
	
	if (x < 0)
		plus_n1 = x * -1;
	else
		plus_n1 = x;

	if (y < 0)
		plus_n2 = y * -1;
	else
		plus_n2 = y;

	if (plus_n1 > plus_n2)
		return x;
	else
		return y;
}*/