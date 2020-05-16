//#include <stdio.h>
//
//struct clientData {
//	unsigned int acctNum;
//	char lastName[15];
//	char firstNmae[10];
//	double balance;
//};
//
//int main()
//{
//	FILE* cfPtr;
//
//	if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL)//fopen 打开文件，如果文件不能被打开
//	{
//		puts("文件无法被打开");
//	}
//	else//可以被打开
//	{
//		struct clientData client = { 0,"","",0.0 };
//		//要求用户指定账号
//		printf("%s", "输入账号（1 到 100，输入 0 结束）");
//		scanf("%d", &client.acctNum);
//		while (client.acctNum != 0)
//		{
//			printf("%s", "\n输入姓、名和余额：");
//
//			fscanf(stdin, "%14s%9s%lf", client.lastName, client.firstNmae, &client.balance);
//			//查找文件中用户指定记录的位置
//			//符号常量 SEEK_SET 表示文件位置指针是按从文件开头算起的偏移量来定位的
//			//函数原型     _ACRTIMP int __cdecl fseek(_Inout_ FILE* _Stream,_In_ long  _Offset,_In_ int   _Origin);
//			fseek(cfPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);
//			
//			//在文件中写入用户指定的信息
//			fwrite(&client, sizeof(struct clientData), 1, cfPtr);
//
//			//允许用户进入另一个账户
//			printf("%s", "\n输入账号：");
//			scanf("%d", &client.acctNum);
//		}
//
//		fclose(cfPtr);
//	}
//
//}