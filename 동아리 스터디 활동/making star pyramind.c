/*�Ƕ�̵� �����*/

#include <stdio.h>

main()
{
	int length, vertical, center;
	int i, j;
	printf("������ ���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", &length);
	printf("������ ���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", &vertical);
	center = (length - 1) / 2;

	for (i = 0; i < vertical; i++) {
		for (j = 0; j < length; j++) {
			int sum = i + j;
			if (sum == center + i) // (i,j) ������� �̿��Ͽ� ��� ���� ���� �Ƕ�̵��� �߾ӿ� �ش��ϴ� ���� ��ġ�� ��� ���� ������
			{
				printf("*");
			}
			else if ((sum < center + i) && (sum >= center - i))  // �� ��° ����� (�߾��� �� +- i)�� �̿��Ͽ� ���� �� ������ �յ��ϰ� ��ġ�ȴ�
			{
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		center++;
		printf("\n");
	}

	return 0;
}

/*���� ���� ���Ƕ�̵�*/
#include <stdio.h>

main()
{
	int i, j;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i <= j) {
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}