/*�迭�� ������ ������ ���ؼ� �����ϰ� �����ϴ� ���� �����غ���.*/

//#include <stdio.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* b = a;
//
//	for (int i = 0; i < 5; i++)
//	{
//		*b = 11 + i;
//		b += 1;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("a[%d]�� ���� %d\n", i, a[i]);
//	}
//	return 0;
//}

/*�Ʒ��� �ڵ�� å �ӿ� ���õ� ���� ������̴�.*/

//#include <stdio.h>

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* b = a;
//	int i;
//
//	for (i = 0; i < 5; i++)
//		*(b + i) += 10;
//
//	printf("ù ��° ���\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//
//	printf("�� ��° ���\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", *(b + i));
//	printf("\n");
//
//	printf("�� ��° ���\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", b[i]); // ������ b�� �迭 a[0]�� �ּҸ� ����Ű�� �ִٸ� b[i]�� �� a[i]�� �ǹ��Ѵ�.
//	printf("\n");
//
//	return 0;
//}