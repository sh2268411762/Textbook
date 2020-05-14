//#include <stdio.h>
//
//union Un {
//	char c;//1
//	int i;//4
//	double d;//8
//};
//int check_sys()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	union Un u = { 0 };
//	printf("%d\n", sizeof(union Un));
//	printf("0X%p\n", &(u.c));
//	printf("0X%p\n", &(u.i));
//	printf("0X%p\n", &(u.d));
//
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");//大——>小  01 00 00 00
//	}
//	else
//	{
//		printf("大端\n");//小——.大 00 00 00 01
//	}
//	return 0;
//}