//#include <stdio.h>
//#include <stddef.h>
//
//struct Stu {
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//struct Node {
//	int data;
//	struct Node* next;//结构体内可以包含指向自己的指针————>结构体自引用
//};
//
//
//
//struct S1 {
//	char c1;
//	int i;
//	char c2;
//};
//struct S2 {
//	char c1;
//	char c2;
//	int i;
//};
//
//#pragma pack (4)//默认对齐数修改为4，改为 1 即为没对齐，一般修改为2,4,6……
//struct S3 {
//	double d;
//	char c;
//};
//#pragma pack()//取消默认对齐数的修改
//
//struct A {
//	int _a : 2;//
//	int _b : 3;
//	int _c : 10;
//	int _d : 30;
//};
//struct S4 {
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//};
//int main()//
//{
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct A));
//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	s4.a = 10;
//	s4.b = 12;
//	s4.c = 3;
//	s4.d = 10;
//	//调试
//	return 0;
//}
////
////int main()//结构体内存对齐
////{
////	struct S1 s1 = { 0 };
////	struct S2 s2 = { 0 };
////	printf("S1 = %d\n", sizeof(struct S1));
////	printf("s1 = %d\n", sizeof(s1));
////	puts("");
////	printf("S2 = %d\n", sizeof(struct S2));
////	printf("s2 = %d\n", sizeof(s2));
////	puts("");
////	printf("S2->c1 = %d\n", offsetof(struct S2, c1));
////	printf("S2->c2 = %d\n", offsetof(struct S2, c2));
////	printf("S2->i = %d\n", offsetof(struct S2, i));
////	puts("");
////	printf("S1->c1 = %d\n", offsetof(struct S1, c1));
////	printf("S1->c2 = %d\n", offsetof(struct S1, i));
////	printf("S1->i = %d\n", offsetof(struct S1, c2));
////	return 0;
////}
//
