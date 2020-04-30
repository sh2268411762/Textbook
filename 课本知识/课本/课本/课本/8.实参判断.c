//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	printf("%s\n%s%s\n%s%s\n", "According to isdigit：", isdigit('8') ? "8 is a " : "8 is not a ", "digit", isdigit('#') ? "# is a " : "# is not a ", "digit");
//	printf("判断数字是否为(0 到 9)\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "According to isalpha：",
//		isalpha('A') ? "A is a " : "A is not a ", "letter",
//		isalpha('b') ? "b is a " : "b is not a ", "letter",
//		isalpha('&') ? "& is a " : "& is not a ", "letter",
//		isalpha('4') ? "4 is a " : "4 is not a ", "letter");
//	printf("判断字母是否为（大写：A 到 Z 或 小写 a 到 z）\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n", "According to isalnum：",
//		isalnum('A') ? "A is a " : "A is not a ", "digit or letter",
//		isalnum('8') ? "8 is a " : "8 is not a ", "digit or letter",
//		isalnum('#') ? "# is a " : "# is not a ", "digit or letter");
//	printf("判断是否为数字或字母\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "According to isxdigit：",
//		isxdigit('F') ? "F is a " : "F is not a ", "hexadecimal digit",
//		isxdigit('J') ? "J is a " : "J is not a ", "hexadecimal digit",
//		isxdigit('7') ? "7 is a " : "7 is not a ", "hexadecimal digit",
//		isxdigit('S') ? "S is a " : "S is not a ", "hexadecimal digit",
//		isxdigit('f') ? "f is a " : "f is not a ", "hexadecimal digit");
//	printf("判断是否为十六进制数字\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "According to islower：",
//		islower('p') ? "p is a " : "p is not a ", "lowercase letter",
//		islower('P') ? "P is a " : "P is not a ", "lowercase letter",
//		islower('5') ? "5 is a " : "5 is not a ", "lowercase letter",
//		islower('!') ? "! is a " : "! is not a ", "lowercase letter");
//	printf("判断字母是否为小写字母\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "According to isupper：",
//		isupper('D') ? "D is an " : "D is not an ", "uppercase letter",
//		isupper('d') ? "d is an " : "d is not an ", "uppercase letter",
//		isupper('8') ? "8 is an " : "8 is not an ", "uppercase letter",
//		isupper('&') ? "& is an " : "& is not an ", "uppercase letter");
//	printf("判断字母是否为大写字母\n\n");
//
//	printf("%s%c\n%s%c\n%s%c\n%s%c\n",
//		"u is coverted to uppercase is ", toupper('u'),
//		"7 is coverted to uppercase is ", toupper('7'),
//		"$ is coverted to uppercase is ", toupper('$'),
//		"L is coverted to uppercase is ", tolower('L'));
//	printf("函数tolower将一个大写字母转换成小写字母并返回这个小写字母，若实参不是大写字母，则返回未改变的实参\n");
//	printf("函数toupper将一个小写字母转换成大写字母并返回这个大写字母，若实参不是小写字母，则返回未改变的实参\n\n");
//
//	printf("%s\n%s%s%s\n%s%s%s\n%s%s\n", "According to isspace：",
//		"Newline", isspace('\n') ? " is a " : " is not a ", "whitespace character", "Horizontal tab",
//		isspace('\t') ? " is a " : " is not a ", "whitespace character",
//		isspace('%') ? "% is a " : "% is not a ", "whitespace character");
//	printf("判断是否是空白字符包括（空格符(' ')，换页符('\\f')，换行符('\\n')，回车符('\\r')，水平制表符('\\t')，垂直制表符('\\v')\n\n");
//
//	printf("%s\n%s%s%s\n%s%s\n", "According to iscntrl：",
//		"Newline", iscntrl('\n') ? " is a " : " is not a ", "control character",
//		iscntrl('$') ? "$ is a " : "$ is not a ", "control character");
//	printf("判断是否是控制字符包括（报警符('\\a')，换页符('\\f')，换行符('\\n')，回车符('\\r')，水平制表符('\\t')，垂直制表符('\\v')，退格符('\\b')\n\n");
//	
//	printf("%s\n%s%s\n%s%s\n%s%s\n", "According to ispunct：",
//		ispunct(';') ? "; is a " : "; is not a ", "punctuation character",
//		ispunct('Y') ? "Y is a " : "Y is not a ", "punctuation character",
//		ispunct('#') ? "# is a " : "# is not a ", "punctuation character");
//	printf("判断是否是一个除空格、数字、字母以外的可打印字符\n\n");
//
//	printf("%s\n%s%s\n%s%s%s\n", "According to isprint：",
//		isprint('$') ? "$ is a ": "$ is not a ", "printing character",
//		"Alert", isprint('\a') ? " is a " : " is not a ", "printing character");
//	printf("判断是否是一个可以打印在屏幕上的字符\n\n");
//
//	printf("%s\n%s%s\n%s%s%s\n", "According to isgraph：",
//		isgraph('Q') ? "Q is a " : "Q is not a ", "printing character other than space",
//		"Space", isgraph(' ') ? " is a " : " is not a ", "printing character other than space");
//	printf("判断是否是一个可以打印在屏幕上的字符（不包含空格符）\n\n");
//	return 0;
//}