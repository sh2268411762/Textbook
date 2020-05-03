//#include <stdio.h>
//
//int main()
//{
//	printf("scanf函数使用扫描集\n");
//	char z[9];
//	printf("Enter string：");
//	//scanf("%8[aeiiuytsou]", z);
//	//printf("The input was \"%s\"\n", z);
//
//	//逆向扫描集
//	scanf("%8[^aeiou]", z);
//	printf("The input was \"%s\"\n", z);
//
//	printf("在scanf函数中指定域宽\n");
//	int x, y;
//	printf("输入整数\n");
//	scanf("%4d%3d", &x, &y);
//	printf("x = %d\ny = %d\n", x, y);
//
//	printf("赋值抑制字符\n");//忽略掉特定字符
//	int month = 0;
//	int day = 0;
//	int year = 0;
//	printf("输入年月日（-）\n");
//	scanf("%d%*c%d%*c%d", &month, &day, &year);
//	printf("month = %d day = %d yera = %d\n", month, day, year);
//	return 0;
//}