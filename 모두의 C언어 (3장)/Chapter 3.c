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
/* #define _CRT_SECURE_NO_WARNINGS // �� ������ ������ ����� ��Ʃ��������� ���Ȼ��� ������ �Ʒ��� �ڵ尡 ������� �ʴ´�.
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
} */


// ������ ������ �� ���� �� ����ϴ� void
/*#include <stdio.h>

int test1(void); // void�� ���� '������', '��' �̶�� ���� ���ϰ� ������ C������ �Լ��� �Է� �Ǵ� ����� ���� �� void�� ���ų� �ƹ��͵� �� ����.
				 // int test1(void)�� int test1()�̶��� ���� �ǹ̶�� �Ҹ��̴�.

main()
{
	int result;
	result = test1();

	printf("test1 �Լ��κ��� �������� ���� %d\n", result);
}

int test1(void) // ���� �׻� ��ܾ��� int main(void)�� ���� main�̶� �Լ��� ��ü���� ���̿���.
{
	return 10;
}*/


// ����� ���� ���� ����ϴ� void
/*#include <stdio.h>

void test2(int x);

main()
{
	test2(3); // ��� ���� main �Լ��� �������� �ʾҴ�.
}

void test2(int x)
{
	printf("���� �Լ��κ��� ���� ���� %d�Դϴ�.\n", x);
}*/


// �Լ� ����
#include <stdio.h>

int func1(void);
char func2(void);
func3(void);
func4(int x);

main()
{
	int input_n;

	func3();
	printf("���Ͻô� ���ڸ� �Է��ϼ���:");
	scanf_s("%d", &input_n); // �Է¹��� ���� 4��° �Լ��� ����.
	printf("�Է��Ͻ� ���ڴ� %d�̰�, ù��° �Լ��κ��� ���� ���� %d�̰�, �ι�° �Լ��κ��� �������� ���ڴ� %c�̴�.\n", input_n, func1(), func2());
	printf("�׸��� �׹�° �Լ��� �Է��� ���ڸ� 10��� �����ֱ⿡ %d�� �����־���.", func4(input_n));

	return 0;
}

int func1() // ���� 1�� ��ȯ�ϴ� �Լ�
{
	return 1;
}

char func2() // ���� A�� ��ȯ�ϴ� �Լ�
{
	return 'A';
}

func3() // ȣ���ϸ� Hello�� ����ϴ� �Լ�
{
	printf("Hello\n");
}

func4(int x) // �Է¹��� ���� 10��� �÷� ��ȯ�ϴ� �Լ�
{
	int new_n, mul;

	new_n = x;
	
	mul = new_n * 10;

	return mul;
}