//#include <stdio.h>
//
//
//
//int main(void)
//{
//	FILE* cfPtr;//cfPtr是一个指向FILE结构体类型的指针变量
//	//w 表示将文件创建或者打开并清空之前的内容   a 表示在文件末尾进行添加数据
//	if ((cfPtr = fopen("clients.txt", "a")) == NULL)//将程序中使用的文件命名为 clients.txt，并建立起一个与这个文件进行通信的通道
//	{//函数fopen的返回值，是指向其所打开文件的FILE结构体类型的指针，并赋值给文件指针变量cfPtr
//		puts("文件不能打开");
//	}
//	else
//	{
//		printf("请输入账户，姓名和余额。\n");
//		puts("输入EOF停止输入");
//		printf("%s", "? ");
//
//		unsigned int account;
//		char name[30];
//		double balance;
//
//		scanf("%d%29s%lf", &account, &name, &balance);
//
//		while (!feof(stdin))//用函数 feof 检查是否为标准输入 stdin 检测到文件结束标记
//		{
//			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);//将数据写入到文件 clients.txt 中
//			printf("%s", "? ");
//			scanf("%d%29s%lf", &account, &name, &balance);
//		}
//		fclose(cfPtr);//函数 fclose 用来关闭文件，接受一个文件指针实参
//	}
//
//}