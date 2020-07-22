/*학교 수업을 통해 배열까지 배웠으므로 배열을 예제를 풀어 복습하고 바로 포인터 파트로 넘어간다.
5개의 과목 성적을 배열로 받아 입력받아 최고 성적, 최저 성적, 모든 과목 성적의 합, 그리고 평균을 구하는 프로그램을 만들어보자.*/

#include <stdio.h>
#define SIZE 5 // 입력하고 싶은 과목의 수

int main(void) {
	int grade[SIZE] = { 0 }; // 학생들의 성적
	int sum = 0, max_grade = 0, min_grade = 100; // 성적들의 합, 최고, 최저 점수
	float aver = 0.0; // 과목 평균

	for (int i = 0; i < SIZE; i++) {
		printf("%d번째 과목 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &grade[i]);
		sum += grade[i];
		if (max_grade < grade[i])
			max_grade = grade[i];
		else if (min_grade > grade[i]) // 점수는 아무리 커도 100보다 낮을 수 밖에 없음
			min_grade = grade[i];
	}

	aver = sum / SIZE;

	printf("모든 과목 성적 총합은 %d\n", sum);
	printf("과목 평균 값은 %f\n", aver);
	printf("최고 성적 과목은 %d\n", max_grade);
	printf("최저 성적 과목은 %d\n", min_grade);

	return 0;
}