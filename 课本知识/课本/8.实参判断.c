//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	printf("%s\n%s%s\n%s%s\n", "According to isdigit��", isdigit('8') ? "8 is a " : "8 is not a ", "digit", isdigit('#') ? "# is a " : "# is not a ", "digit");
//	printf("�ж������Ƿ�Ϊ(0 �� 9)\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "According to isalpha��",
//		isalpha('A') ? "A is a " : "A is not a ", "letter",
//		isalpha('b') ? "b is a " : "b is not a ", "letter",
//		isalpha('&') ? "& is a " : "& is not a ", "letter",
//		isalpha('4') ? "4 is a " : "4 is not a ", "letter");
//	printf("�ж���ĸ�Ƿ�Ϊ����д��A �� Z �� Сд a �� z��\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n", "According to isalnum��",
//		isalnum('A') ? "A is a " : "A is not a ", "digit or letter",
//		isalnum('8') ? "8 is a " : "8 is not a ", "digit or letter",
//		isalnum('#') ? "# is a " : "# is not a ", "digit or letter");
//	printf("�ж��Ƿ�Ϊ���ֻ���ĸ\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "According to isxdigit��",
//		isxdigit('F') ? "F is a " : "F is not a ", "hexadecimal digit",
//		isxdigit('J') ? "J is a " : "J is not a ", "hexadecimal digit",
//		isxdigit('7') ? "7 is a " : "7 is not a ", "hexadecimal digit",
//		isxdigit('S') ? "S is a " : "S is not a ", "hexadecimal digit",
//		isxdigit('f') ? "f is a " : "f is not a ", "hexadecimal digit");
//	printf("�ж��Ƿ�Ϊʮ����������\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "According to islower��",
//		islower('p') ? "p is a " : "p is not a ", "lowercase letter",
//		islower('P') ? "P is a " : "P is not a ", "lowercase letter",
//		islower('5') ? "5 is a " : "5 is not a ", "lowercase letter",
//		islower('!') ? "! is a " : "! is not a ", "lowercase letter");
//	printf("�ж���ĸ�Ƿ�ΪСд��ĸ\n\n");
//
//	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "According to isupper��",
//		isupper('D') ? "D is an " : "D is not an ", "uppercase letter",
//		isupper('d') ? "d is an " : "d is not an ", "uppercase letter",
//		isupper('8') ? "8 is an " : "8 is not an ", "uppercase letter",
//		isupper('&') ? "& is an " : "& is not an ", "uppercase letter");
//	printf("�ж���ĸ�Ƿ�Ϊ��д��ĸ\n\n");
//
//	printf("%s%c\n%s%c\n%s%c\n%s%c\n",
//		"u is coverted to uppercase is ", toupper('u'),
//		"7 is coverted to uppercase is ", toupper('7'),
//		"$ is coverted to uppercase is ", toupper('$'),
//		"L is coverted to uppercase is ", tolower('L'));
//	printf("����tolower��һ����д��ĸת����Сд��ĸ���������Сд��ĸ����ʵ�β��Ǵ�д��ĸ���򷵻�δ�ı��ʵ��\n");
//	printf("����toupper��һ��Сд��ĸת���ɴ�д��ĸ�����������д��ĸ����ʵ�β���Сд��ĸ���򷵻�δ�ı��ʵ��\n\n");
//
//	printf("%s\n%s%s%s\n%s%s%s\n%s%s\n", "According to isspace��",
//		"Newline", isspace('\n') ? " is a " : " is not a ", "whitespace character", "Horizontal tab",
//		isspace('\t') ? " is a " : " is not a ", "whitespace character",
//		isspace('%') ? "% is a " : "% is not a ", "whitespace character");
//	printf("�ж��Ƿ��ǿհ��ַ��������ո��(' ')����ҳ��('\\f')�����з�('\\n')���س���('\\r')��ˮƽ�Ʊ��('\\t')����ֱ�Ʊ��('\\v')\n\n");
//
//	printf("%s\n%s%s%s\n%s%s\n", "According to iscntrl��",
//		"Newline", iscntrl('\n') ? " is a " : " is not a ", "control character",
//		iscntrl('$') ? "$ is a " : "$ is not a ", "control character");
//	printf("�ж��Ƿ��ǿ����ַ�������������('\\a')����ҳ��('\\f')�����з�('\\n')���س���('\\r')��ˮƽ�Ʊ��('\\t')����ֱ�Ʊ��('\\v')���˸��('\\b')\n\n");
//	
//	printf("%s\n%s%s\n%s%s\n%s%s\n", "According to ispunct��",
//		ispunct(';') ? "; is a " : "; is not a ", "punctuation character",
//		ispunct('Y') ? "Y is a " : "Y is not a ", "punctuation character",
//		ispunct('#') ? "# is a " : "# is not a ", "punctuation character");
//	printf("�ж��Ƿ���һ�����ո����֡���ĸ����Ŀɴ�ӡ�ַ�\n\n");
//
//	printf("%s\n%s%s\n%s%s%s\n", "According to isprint��",
//		isprint('$') ? "$ is a ": "$ is not a ", "printing character",
//		"Alert", isprint('\a') ? " is a " : " is not a ", "printing character");
//	printf("�ж��Ƿ���һ�����Դ�ӡ����Ļ�ϵ��ַ�\n\n");
//
//	printf("%s\n%s%s\n%s%s%s\n", "According to isgraph��",
//		isgraph('Q') ? "Q is a " : "Q is not a ", "printing character other than space",
//		"Space", isgraph(' ') ? " is a " : " is not a ", "printing character other than space");
//	printf("�ж��Ƿ���һ�����Դ�ӡ����Ļ�ϵ��ַ����������ո����\n\n");
//	return 0;
//}