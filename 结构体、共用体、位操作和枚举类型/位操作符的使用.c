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
//	putchar(' ');
//
//}
//
//int main()
//{
//	//按位与
//	unsigned int n1 = 65535;
//	unsigned int mask = 1;
//	puts("结合下列各项的结果");
//	displayBits(n1);
//	puts("");
//	displayBits(mask);
//	puts("\n使用按位与运算符是");
//	displayBits(n1 & mask);
//
//	//按位或
//	n1 = 15;
//	unsigned int setBits = 241;
//	puts("\n\n结合下列各项的结果");
//	displayBits(n1);
//	puts("");
//	displayBits(setBits);
//	puts("\n使用按位或运算符是");
//	displayBits(n1 | setBits);
//
//	//按位异或
//	n1 = 139;
//	unsigned int n2 = 199;
//	puts("\n\n结合下列各项的结果");
//	displayBits(n1);
//	puts("");
//	displayBits(n2);
//	puts("\n使用按位异或运算符是");
//	displayBits(n1 ^ n2);
//
//	//按位取反
//	n1 = 21845;
//	puts("\n\n按位取反");
//	displayBits(n1);
//	puts("\n结果是");
//	displayBits(~n1);
//	return 0;
//}