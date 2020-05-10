#include <stdio.h>
#include <stddef.h>

struct Stu {
	char name[20];
	int age;
	char sex[5];
};

struct Node {
	int data;
	struct Node* next;//结构体内可以包含指向自己的指针————>结构体自引用
};



struct S1 {
	char c1;
	int i;
	char c2;
};
struct S2 {
	char c1;
	char c2;
	int i;
};

int main()//结构体内存对齐
{
	struct S1 s1 = { 0 };
	struct S2 s2 = { 0 };
	printf("S1 = %d\n", sizeof(struct S1));
	printf("s1 = %d\n", sizeof(s1));
	puts("");
	printf("S2 = %d\n", sizeof(struct S2));
	printf("s2 = %d\n", sizeof(s2));
	puts("");
	printf("S2->c1 = %d\n", offsetof(struct S2, c1));
	printf("S2->c2 = %d\n", offsetof(struct S2, c2));
	printf("S2->i = %d\n", offsetof(struct S2, i));
	puts("");
	printf("S1->c1 = %d\n", offsetof(struct S1, c1));
	printf("S1->c2 = %d\n", offsetof(struct S1, i));
	printf("S1->i = %d\n", offsetof(struct S1, c2));
	return 0;
}