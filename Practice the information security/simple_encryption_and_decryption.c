#include <stdio.h>

int main(void)
{
	char data = 'a'; // a XOR a = 0, a XOR 0 = a, (a XOR b) XOR b = a를 활용한 암호화 복호화 방식
	char key = 0xff;

	char encrpted_data = data ^ key; // encryption 암호화

	printf("암호화된 문자 = %c \n", encrpted_data);

	char orig_data = encrpted_data ^ key; // decryption 복호화

	printf("원래의 데이터 = %c\n", orig_data);

	return 0;
}