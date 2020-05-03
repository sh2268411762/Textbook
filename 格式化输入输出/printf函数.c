//#include <stdio.h>
//
//
//int main()
//{
//	printf("%d\n", 455);
//	printf("%i\n", 455);
//	printf("%d\n", +455);
//	printf("%d\n", -455);
//	printf("%hd\n", 32000);
//	printf("%ld\n", 2000000000L);
//	printf("%o\n", 455);
//	printf("%u\n", 455);
//	printf("%u\n", -455);
//	printf("%x\n", 455);
//	printf("%X\n", 455);
//	printf("打印整数\n\n");
//
//	printf("%e\n", 1234567.89);
//	printf("%e\n", +1234567.89);
//	printf("%e\n", -1234567.89);
//	printf("%E\n", 1234567.89);
//	printf("%f\n", 1234567.89);
//	printf("%g\n", 1234567.89);
//	printf("%G\n", 1234567.89);
//	printf("打印浮点数\n\n");
//
//	char c = 'A';
//	printf("%c\n", c);
//	printf("This is a string\n");
//	char str[] = "This is a string";
//	printf("%s\n", str);
//	const char* strPtr = "This is a string";
//	printf("%s\n", strPtr);
//	printf("打印字符串或字符\n\n");
//
//	int x = 12345;
//	int* Ptr = &x;
//	printf("The value of Ptr is 0x%p\n", Ptr);
//	printf("The address of x is 0x%p\n", &x);
//	printf("Printing a %% in a format control string\n");
//	printf("%%p打印地址，当%%出现在格式控制字符串中时，他的后面必须跟一个转换说明符\n\n");
//
//	printf("%6d\n", 1);
//	printf("%6d\n", 12);
//	printf("%6d\n", 123);
//	printf("%6d\n", 1234);
//	printf("%6d\n", 12345);
//
//	printf("%6d\n", -1);
//	printf("%6d\n", -12);
//	printf("%6d\n", -123);
//	printf("%6d\n", -1234);
//	printf("%6d\n\n", -12345);
//
//	printf("整数精度：\n");
//	int i = 875;
//	printf("\t%.4d\n\t%.9d\n\n", i, i);
//	printf("浮点数精度：\n");
//	double d = 123.456789;
//	printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", d, d, d);
//	printf("字符串精度：\n");
//	char s[] = "HPPY birthday";
//	printf("\t%.11s\n\n", s);//输出到第11个字符
//
//	printf("同时指定域宽（正数右对齐，负数左对齐）和精度：\n");
//	printf("%9.3f\n", 123.456789);
//	printf("%*.*f\n", 9, 3, 123.456789);
//	printf("%9.4f\n", 123.456789);
//	printf("%*.*f\n\n", 9, 4, 123.456789);
//
//	printf("使用#标记：\n");
//	int c1 = 1427;
//	double p = 1427.0;
//	printf("%#o\n%#x\n%#X\n", c1, c1, c1);
//	printf("%g\n%#g\n\n", p, p);
//
//	printf("使用0标记：\n");
//	printf("%+09d\n", 53267);
//	printf("%09d\n\n", 23567);
//
//
//	return 0;
//}