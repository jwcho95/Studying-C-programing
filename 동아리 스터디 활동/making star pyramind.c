/*피라미드 만들기*/

#include <stdio.h>

main()
{
	int length, vertical, center;
	int i, j;
	printf("가로의 길이를 입력하시오: ");
	scanf_s("%d", &length);
	printf("세로의 길이를 입력하시오: ");
	scanf_s("%d", &vertical);
	center = (length - 1) / 2;

	for (i = 0; i < vertical; i++) {
		for (j = 0; j < length; j++) {
			int sum = i + j;
			if (sum == center + i) // (i,j) 행렬임을 이용하여 행과 열의 합이 피라미드의 중앙에 해당하는 값과 일치할 경우 별이 생성됨
			{
				printf("*");
			}
			else if ((sum < center + i) && (sum >= center - i))  // 두 번째 행부터 (중앙의 값 +- i)를 이용하여 별이 양 옆으로 균등하게 배치된다
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

/*우측 정렬 역피라미드*/
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