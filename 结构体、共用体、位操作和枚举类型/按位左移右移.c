//#include <stdio.h>
//
//void displayBits(unsigned int _x)
//{
//	unsigned int displayMask = 1 << 31;
//
//	printf("%7u = ", _x);
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
//	putchar(' ');
//}
//int main()
//{
//	unsigned int n1 = 960;
//
//	puts("左移");
//	displayBits(n1);
//	puts("比特位左移 8 位，结果是：-->");
//	displayBits(n1 << 8);
//
//	puts("右移");
//	displayBits(n1);
//	puts("比特位右移 8 位，结果是：-->");
//	displayBits(n1 >> 8);
//	return 0;
//}