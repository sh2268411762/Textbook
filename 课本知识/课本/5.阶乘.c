//#include <stdio.h>
//
//long long int factor(int num)
//{
//	if (num <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return (num * factor(num - 1));
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 21; i++)
//	{
//		printf("%d! = %lld\n", i, factor(i));
//	}
//	return 0;
//}