// ����� C���  2�� "������ ����� - ����"


// �ڷ����� ���ؼ��� ���������� �����ϰ� �������� �����Ѵ�.


// ���� ������ ������
/* #include <stdio.h>

int main(void)
{
	a = 3;
	printf("���� a�� ���� %d�Դϴ�.", a);

	return 0;
} */
// ������ ���� ��� ������ �߻��Ѵ�. a�� �������� �ʾұ� �����̴�. ���̽���� �ٸ��� ��Ȯ�ϰ� �޸𸮰��� �������־���Ѵ�.

/* #include <stdio.h>

int main(void)
{
	int a = 3;
	int b;

	b = 7;

	printf("a�� ���� %d�̰� b�� ���� %d�̴�.", a, b);
} */


// ���� 1 : �� ������ �� ��ȯ�ϱ�
/* #include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int c;

	printf("a�� ���� %d�̰� b�� ���� %d�̴�.\n", a, b);

	c = b;
	b = a;
	a = c;

	printf("a�� ���� %d�̰� b�� ���� %d�̴�.", a, b);
} */


// ���� 2 : ��ź�� ���� ����ϱ�
// ���� ���� ���� A�� B �� ������ ��ź�� �ִ�. A ��ź�� ���԰� 10.5�̰�, ���ư��� ���ӵ��� 8.4�̴�. B ��ź�� ���԰� 12.2�̰�, ���ư��� ���ӵ��� 6.3�̴�.
// A ��ź�� B ��ź���� �� �� �� �밡?
#include <stdio.h>

int main(void)
{
	double weight_A = 10.5;
	double weight_B = 12.2;
	double acceleration_A = 8.4;
	double acceleration_B = 6.3;

	double power_A = weight_A * acceleration_A;
	double power_B = weight_B * acceleration_B;
	double compare = power_A / power_B;

	printf("A�� ��ź�� ���� %.2lf�̰� B�� ��ź�� ���� %.2lf�̴�. A ��ź�� ���� B ��ź�� ������ �� %.2lf�� ���.", power_A, power_B,compare);
}