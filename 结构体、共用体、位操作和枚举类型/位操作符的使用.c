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
//	//��λ��
//	unsigned int n1 = 65535;
//	unsigned int mask = 1;
//	puts("������и���Ľ��");
//	displayBits(n1);
//	puts("");
//	displayBits(mask);
//	puts("\nʹ�ð�λ���������");
//	displayBits(n1 & mask);
//
//	//��λ��
//	n1 = 15;
//	unsigned int setBits = 241;
//	puts("\n\n������и���Ľ��");
//	displayBits(n1);
//	puts("");
//	displayBits(setBits);
//	puts("\nʹ�ð�λ���������");
//	displayBits(n1 | setBits);
//
//	//��λ���
//	n1 = 139;
//	unsigned int n2 = 199;
//	puts("\n\n������и���Ľ��");
//	displayBits(n1);
//	puts("");
//	displayBits(n2);
//	puts("\nʹ�ð�λ����������");
//	displayBits(n1 ^ n2);
//
//	//��λȡ��
//	n1 = 21845;
//	puts("\n\n��λȡ��");
//	displayBits(n1);
//	puts("\n�����");
//	displayBits(~n1);
//	return 0;
//}