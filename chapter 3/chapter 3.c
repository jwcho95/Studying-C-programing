// <ȥ�� �����ϴ� C���> é�� 3-1

// ������ ����� ���
/* #include <stdio.h>

int main(void)
{
	int a;
	int b, c; // ������ ���°� ������ ���ÿ� 2���� ������ �� �ִ�.
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %c\n", ch);

	return 0;
} */

// char�� ������ ���
#include <stdio.h>

int main(void)
{
	char ch1 = 'A'; // char ���� ���ڸ� �ַ� �����ϴ� �뵵�� ���ȴ�.
	char ch2 = 65; // �����Ϸ��� 0 ~ 127 ������ ����(�ƽ�Ű �ڵ� ��)���� �ٲپ� ó���ϱ⿡ char���� ����ϸ� ���ڸ� ȿ�������� ������ �� �ִ�.

	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch2, ch2);

	return 0;
}