/*�б� ������ ���� �迭���� ������Ƿ� �迭�� ������ Ǯ�� �����ϰ� �ٷ� ������ ��Ʈ�� �Ѿ��.
5���� ���� ������ �迭�� �޾� �Է¹޾� �ְ� ����, ���� ����, ��� ���� ������ ��, �׸��� ����� ���ϴ� ���α׷��� ������.*/

#include <stdio.h>
#define SIZE 5 // �Է��ϰ� ���� ������ ��

int main(void) {
	int grade[SIZE] = { 0 }; // �л����� ����
	int sum = 0, max_grade = 0, min_grade = 100; // �������� ��, �ְ�, ���� ����
	float aver = 0.0; // ���� ���

	for (int i = 0; i < SIZE; i++) {
		printf("%d��° ���� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &grade[i]);
		sum += grade[i];
		if (max_grade < grade[i])
			max_grade = grade[i];
		else if (min_grade > grade[i]) // ������ �ƹ��� Ŀ�� 100���� ���� �� �ۿ� ����
			min_grade = grade[i];
	}

	aver = sum / SIZE;

	printf("��� ���� ���� ������ %d\n", sum);
	printf("���� ��� ���� %f\n", aver);
	printf("�ְ� ���� ������ %d\n", max_grade);
	printf("���� ���� ������ %d\n", min_grade);

	return 0;
}