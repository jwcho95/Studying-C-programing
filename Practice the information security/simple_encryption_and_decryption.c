#include <stdio.h>

int main(void)
{
	char data = 'a'; // a XOR a = 0, a XOR 0 = a, (a XOR b) XOR b = a�� Ȱ���� ��ȣȭ ��ȣȭ ���
	char key = 0xff;

	char encrpted_data = data ^ key; // encryption ��ȣȭ

	printf("��ȣȭ�� ���� = %c \n", encrpted_data);

	char orig_data = encrpted_data ^ key; // decryption ��ȣȭ

	printf("������ ������ = %c\n", orig_data);

	return 0;
}