/*구조체 배열에 대해서 공부해보자.*/
/*한 반의 학생 5명의 학번과 몸무게, 키를 구조체 배열에 입력받아 저장하고, 그 결과를 for 반복문을 사용해서 차례대로 출력해보자.*/

//#include <stdio.h>
//#define STUDENT_NUM 5
//
//main()
//{
//	struct student {
//		int number;
//		int weight;
//		int height;
//	};
//
//	struct student class[STUDENT_NUM]; // 구조체도 배열을 이용하여 저장할 수 있다.
//	
//	for (int i = 0; i < STUDENT_NUM; i++) {
//		printf("%d번 학생 번호는 ", i + 1);
//		scanf_s("%d", &class[i].number);
//		printf("%d번 학생의 몸무게는 ", i + 1);
//		scanf_s("%d", &class[i].weight);
//		printf("%d번 학생의 키는 ", i + 1);
//		scanf_s("%d", &class[i].height);
//	}
//
//	printf("\n");
//
//	for (int i = 0; i < STUDENT_NUM; i++)
//	{
//		printf("%d번 학생의 번호는 %d이다.\n", i + 1, class[i].number);
//		printf("%d번 학생의 몸무게는 %d이다.\n", i + 1, class[i].weight);
//		printf("%d번 학생의 키는 %d이다.\n", i + 1, class[i].height);
//	}
//
//	return 0;
//}

/*위와 같은 방식은 후에 수정을 하는 경우에 메모리 빈 공간을 찾는 점이 어렵다는 문제가 있다. 그래서 연결 리스트를 사용하게 된다.*/
/*이 과정에서 포인터를 이용하게 된다.*/

//#include <stdio.h>
//
//struct abc
//{
//	int data; // 해당하는 값이 들어가는 자리
//	struct abc* next; // 다음에 올 값의 주소가 저장되는 자리, 자기 참조 구조체를 이용한다.
//};
//
//main()
//{
//	struct abc x, y, z;
//
//	x.data = 10;
//	y.data = 20;
//	z.data = 30;
//
//	x.next = &y; // 다음에 올 값들을 저장한다.
//	y.next = &z;
//	z.next = NULL;
//
//	/*y를 삭제한다고 해보자.*/
//	x.next = y.next; // y.next에는 구조체 z의 주소값이 담겨있다.
//	y.next = NULL; // NULL값을 y.next에 넣음으로써 y는 완전히 연결 리스트에서 떨어져 나왔다.
//	
//	struct abc* i;
//	for (i = &x; i != NULL; i = i->next)
//	{
//		printf("%d\n", i->data);
//	}
//
//	return 0;
//}