//#include <stdio.h>
//#include <string.h>
//
//
////int cubeByValue(int n)
////{
////	return n * n * n;
////}
//
//void cubeByReference(int* nPtr)
//{
//	*nPtr = *nPtr * *nPtr * *nPtr;
//}
//int main()
//{
//	/*int a = 7;
//	int* aPtr = &a;
//	printf("a�ĵ�ַ0x%p\naPtr�ĵ�ַ0x%p\n", &a, aPtr);
//	printf("a=%d\naPtr=%d\n", a, *aPtr);
//	printf("a�ĵ�ַ0x%p\naPtr�ĵ�ַ0x%p\n", &*aPtr, *&aPtr);*/
//
//	//��ֵ����
//	//int num = 5;
//	//printf("�������ǣ�-->%d\n", num);
//	//num = cubeByValue(num);
//	//printf("��������������-->%d\n", num);
//
//	//�����ô���
//	int num = 5;
//	printf("�������ǣ�-->%d\n", num);
//	cubeByReference(&num);
//	printf("�������������ǣ�-->%d\n", num);
//
//	return 0;
//}