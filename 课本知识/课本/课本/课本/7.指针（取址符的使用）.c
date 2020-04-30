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
//	printf("a的地址0x%p\naPtr的地址0x%p\n", &a, aPtr);
//	printf("a=%d\naPtr=%d\n", a, *aPtr);
//	printf("a的地址0x%p\naPtr的地址0x%p\n", &*aPtr, *&aPtr);*/
//
//	//按值传递
//	//int num = 5;
//	//printf("操作数是：-->%d\n", num);
//	//num = cubeByValue(num);
//	//printf("操作数的立方是-->%d\n", num);
//
//	//按引用传递
//	int num = 5;
//	printf("操作数是：-->%d\n", num);
//	cubeByReference(&num);
//	printf("操作数的立方是：-->%d\n", num);
//
//	return 0;
//}