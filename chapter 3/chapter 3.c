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
/* #include <stdio.h>

int main(void)
{
	char ch1 = 'A'; // char ���� ���ڸ� �ַ� �����ϴ� �뵵�� ���ȴ�.
	char ch2 = 65; // �����Ϸ��� 0 ~ 127 ������ ����(�ƽ�Ű �ڵ� ��)���� �ٲپ� ó���ϱ⿡ char���� ����ϸ� ���ڸ� ȿ�������� ������ �� �ִ�.

	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch2, ch2);

	return 0;
} */

// �������� ������ ����
/* #include <stdio.h>

int main(void)
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short�� ���� ���: %d\n", sh);
	printf("int�� ���� ���: %d\n", in);
	printf("long�� ���� ���: %d\n", ln);
	printf("long long�� ���� ���: %lld\n", lln); // lld�� ������� ������ �ٸ� ���� ���´�.
} */
//	char(1����Ʈ) <= short(2����Ʈ) <= int(4����Ʈ) <= long(4����Ʈ) <= long long(8����Ʈ) 
//		: ũ�⿡ ���� �ڷ����� ����� �� �ִ�. ������ int, ���� ū ���� ������ ���� long���� ����Ѵ�.

//unsigned ���� �ڷ��� : ������ ���� �����͸� ������ �� ����Ѵ�.
//unsigned�� �߸� ����� ���
#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295; // �� ������ �޸𸮿� ����Ǵ� ���´� ����.
	printf("%d\n", a); // %d�� ��ȣ�� �ִ� ������ 10������ ����Ѵٴ� �ǹ��̴�.
	a = -1;
	printf("%u\n", a); // %u�� ��ȣ ���� 10������ ����Ѵٴ� �ǹ��̴�.

	return 0;
}
