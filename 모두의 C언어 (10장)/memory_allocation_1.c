/*malloc() �Լ��� �����ڰ� ���ϴ� ����Ʈ ����ŭ �޸� ������ �Ҵ� ���� �� �ִ�. �Լ� ���� ����� �Ҵ� ���� �޸��� �ּҸ� ��ȯ�Ѵ�.*/
/*�ּҸ� ��ȯ�ϱ⿡ ������ ������ �����ؾ��Ѵ�.*/

//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//	char* a;
//	a = malloc(4);
//	*a = 100;
//
//	printf("�Ҵ���� �޸� ������ �ּҴ� %d\n", a);
//	printf("�Ҵ���� �޸� ������ ����� ���� %d\n", *a);
//	free(a); // free �Լ��� �Է°����� ������ ������ ������ �޸𸮸� ������� ������ �ý������� ��ȯ�ϰ� �ȴ�.
//	
//	return 0;
//}

/*�̸��� ����ڷκ��� �Է¹޾� �̸� �����ϰ� ����ϴ� �ڵ带 ������.*/

//#include <stdio.h>
//#include <stdlib.h>
//
//char name[15];
//char* WhatIsYourName(void);
//
//int main()
//{
//	char* name1;
//	char* name2;
//
//	name1 = WhatIsYourName();
//	name2 = WhatIsYourName();
//
//	printf("Hi, %s\n", name1);
//	printf("Hi, %s\n", name2);
//	free(name1); // �޸𸮸� �ٽ� �ý��ۿ� ��ȯ�Ѵ�.
//	free(name2);
//
//	return 0;
//}
//
//char *WhatIsYourName(void)
//{
//	char* name = (char*)malloc(sizeof(char) * 15); // 15����Ʈ ũ���� �޸𸮸� �Ҵ������� �ǹ�
//	
//	printf("����� �̸��� �Է����ּ���: ");
//	gets(name); //get()�Լ��� ���ڿ��� �Է¹޾� ���ʴ�� �迭�� �����ϴ� �Լ��̴�.
//
//	return name;
//}