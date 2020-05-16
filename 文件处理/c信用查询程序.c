//#include <stdio.h>
//
//
//int main()
//{
//	FILE* cfPtr;
//
//	if ((cfPtr = fopen("clients.txt", "r")) == NULL)//读
//	{
//		printf("文件不能被打开\n");
//	}
//	else
//	{
//		printf("%s", "输入请求\n 1 - 列出零余额的账户\n 2 - 列出公司欠有钱款的账户\n 3 - 列出欠公司钱款的账户\n 4 - 运行结束\n？");
//		unsigned int request;//定义选项
//		scanf("%u", &request);//输入选项
//
//
//		while (4 != request)
//		{
//			unsigned int account;
//			double balance;
//			char name[30];
//
//			fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
//
//			switch (request)
//			{
//			case 1:
//				puts("\n零余额账户：");
//
//				while (!feof(cfPtr))
//				{
//					if (0 == balance)
//					{
//						printf("%-10d%-13s%7.2f\n", account, name, balance);
//					}
//
//
//					fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
//				}
//
//				break;
//
//			case 2:
//				puts("\n公司欠有钱款的账户");
//
//				while (!feof(cfPtr))
//				{
//					if (balance < 0)
//					{
//						printf("%-10d%-13s%7.2f\n", account, name, balance);
//					}
//
//					fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
//				}
//
//				break;
//
//			case 3:
//				puts("\n有欠公司欠款的账户");
//
//				while (!feof(cfPtr))
//				{
//					if (balance > 0)
//					{
//						printf("%-10d%-13s%7.2f\n", account, name, balance);
//					}
//
//					fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
//				}
//
//				break;
//			}
//
//			rewind(cfPtr);//将文件指针重新定位在cfPtr所指向文件的开头
//
//			printf("%s\n", "\n？");
//			scanf("%d", &request);
//		}
//		puts("结束运行\n");
//		fclose(cfPtr);
//	}
//}