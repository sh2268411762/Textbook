//#include <stdio.h>
//
//void displayBits(unsigned int _x)
//{
//	unsigned int displayMask = 1 << 31;
//
//	printf("%10u = ", _x);
//
//	for (unsigned int c = 1; c <= 32; c++)
//	{
//		putchar(_x & displayMask ? '1' : '0');
//		_x <<= 1;
//
//		if (0 == c % 8)
//		{
//			putchar(' ');
//		}
//	}
//}
//
//int main()
//{
//	unsigned int x;
//
//	printf("����һ���޷���������-->");
//	scanf("%u", &x);
//
//	displayBits(x);
//	return 0;
//}