// ����� ���  3�� "�������� ����� - �Լ�"


// �Լ��� ����
/* #include <stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 5;

	a = a * 10;
	b = b * 10;
	c = c * 10;

	printf("a(1), b(3), c(5)�� 10��� ���� %d, %d, %d�̴�.", a, b, c);
} */
// �Լ��� �����ϱ� �� ���´� ���� ����.

/* #include <stdio.h>

func10(int x);

int main(void)
{
	int a = 1, b = 3, c = 5;

	printf("a(1), b(3), c(5)�� 10��� ���� %d, %d, %d�̴�.", func10(a), func10(b), func10(c));
}

func10(int x)
{
	x = x * 10;
} */


// �Լ��� �� ��ȯ
/* #include <stdio.h>

func10(int x);

int main(void)
{
	int a = 1, b = 3, c = 5;

	printf("a(1), b(3), c(5)�� 10��� ���� %d, %d, %d�̴�.", func10(a), func10(b), func10(c));
}

int func10(int x)
{
	x = x * 10;
	return x;
} */


// ���� �Է� �� ���ϱ� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS // �� ������ ������ ����� ��Ʃ��������� ���Ȼ��� ������ �Ʒ��� �ڵ尡 ������� �ʴ´�.
#include <stdio.h>

double abc(int x, int y);

main()
{
	int x, y;
	double z;

	printf("���� x�� ���� �Է����ּ���: ");
	scanf("%d", &x);

	printf("���� y�� ���� �Է����ּ���: ");
	scanf("%d", &y);

	z = abc(x, y);
	printf("z�� ���� %f\n", z);
}

double abc(int x, int y)
{
	return x + y + 3.14;
}