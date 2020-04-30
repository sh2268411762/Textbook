//#include <stdio.h>
//int main()
//{
//	int aCount = 0;
//	int bCount = 0;
//	int cCount = 0;
//	int dCount = 0;
//	int fCount = 0;
//	printf("请输入成绩：\n");
//	printf("输入EOF结束输入\n");
//	int grade = 0;
//	while ((grade = getchar() )!= EOF)
//	{
//		switch (grade)
//		{
//		case 'A':
//		case 'a':
//			aCount++;
//			break;
//
//		case 'B':
//		case 'b':
//			bCount++;
//			break;
//
//		case 'C':
//		case'c':
//			cCount++;
//			break;
//
//		case 'D':
//		case 'd':
//			dCount++;
//			break;
//
//		case 'F':
//		case 'f':
//			fCount++;
//			break;
//
//		case '\n':
//		case '\t':
//		case ' ':
//			break;
//
//		default:
//			printf("%s\n", "成绩输入有误");
//			printf("%s\n", "请重新输入");
//			break;
//		}
//	}
//	puts("\n成绩统计:");
//	printf("A:%d\n", aCount);
//	printf("B:%d\n", bCount);
//	printf("C:%d\n", cCount);
//	printf("D:%d\n", dCount);
//	printf("F:%d\n", fCount);
//	return 0;
//}