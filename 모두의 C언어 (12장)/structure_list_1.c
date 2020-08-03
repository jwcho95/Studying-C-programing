/*구조체 배열에 대해서 공부해보자.*/
/*한 반의 학생 5명의 학번과 몸무게, 키를 구조체 배열에 입력받아 저장하고, 그 결과를 for 반복문을 사용해서 차례대로 출력해보자.*/

#include <stdio.h>
#define STUDENT_NUM 5

main()
{
	struct student {
		int number;
		int weight;
		int height;
	};

	struct student class[STUDENT_NUM]; // 구조체도 배열을 이용하여 저장할 수 있다.
	
	for (int i = 0; i < STUDENT_NUM; i++) {
		printf("%d번 학생 번호는 ", i + 1);
		scanf_s("%d", &class[i].number);
		printf("%d번 학생의 몸무게는 ", i + 1);
		scanf_s("%d", &class[i].weight);
		printf("%d번 학생의 키는 ", i + 1);
		scanf_s("%d", &class[i].height);
	}

	printf("\n");

	for (int i = 0; i < STUDENT_NUM; i++)
	{
		printf("%d번 학생의 번호는 %d이다.\n", i + 1, class[i].number);
		printf("%d번 학생의 몸무게는 %d이다.\n", i + 1, class[i].weight);
		printf("%d번 학생의 키는 %d이다.\n", i + 1, class[i].height);
	}

	return 0;
}