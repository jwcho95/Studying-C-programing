/*����ü �迭�� ���ؼ� �����غ���.*/
/*�� ���� �л� 5���� �й��� ������, Ű�� ����ü �迭�� �Է¹޾� �����ϰ�, �� ����� for �ݺ����� ����ؼ� ���ʴ�� ����غ���.*/

#include <stdio.h>
#define STUDENT_NUM 5

main()
{
	struct student {
		int number;
		int weight;
		int height;
	};

	struct student class[STUDENT_NUM]; // ����ü�� �迭�� �̿��Ͽ� ������ �� �ִ�.
	
	for (int i = 0; i < STUDENT_NUM; i++) {
		printf("%d�� �л� ��ȣ�� ", i + 1);
		scanf_s("%d", &class[i].number);
		printf("%d�� �л��� �����Դ� ", i + 1);
		scanf_s("%d", &class[i].weight);
		printf("%d�� �л��� Ű�� ", i + 1);
		scanf_s("%d", &class[i].height);
	}

	printf("\n");

	for (int i = 0; i < STUDENT_NUM; i++)
	{
		printf("%d�� �л��� ��ȣ�� %d�̴�.\n", i + 1, class[i].number);
		printf("%d�� �л��� �����Դ� %d�̴�.\n", i + 1, class[i].weight);
		printf("%d�� �л��� Ű�� %d�̴�.\n", i + 1, class[i].height);
	}

	return 0;
}