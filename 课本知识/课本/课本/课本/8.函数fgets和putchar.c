//#include <stdio.h>
//#define SIZE 80
//
//
//void reverse(const char* const sPtr);
//
//int main()
//{
//	char s[SIZE] = { 0 };
//
//	puts("Enter a line of text ��");
//
//	fgets(s, SIZE, stdin);
//
//	printf("\n%s", "The line printed backward is��");
//
//	//size_t i = 0;
//	//for (; i < SIZE; i++)
//	//{
//	//	putchar(s[i]);
//	//}   //�����ӡ������ַ�
//
//
//	reverse(s);
//	return 0;
//}
//
//void reverse(const char* const sPtr)//�����ӡ
//{
//	if ('\0' == sPtr[0])
//	{
//		return;
//	}
//	else
//	{
//		reverse(&sPtr[1]);
//		putchar(sPtr[0]);
//	}
//}
