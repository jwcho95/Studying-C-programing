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

#include <stdio.h>

func10(int x);

int main(void)
{
	int a = 1, b = 3, c = 5;

	func10(a);
	func10(b);
	func10(c);

	printf("a(1), b(3), c(5)�� 10��� ���� %d, %d, %d�̴�.", func10(a), func10(b), func10(c));
}

func10(int x)
{
	x = x * 10;
}