//#include <stdio.h>
//
//struct clientData{
//	unsigned int acctNum;
//	char lastName[15];
//	char firstName[10];
//	double balance;
//};
//
//unsigned int enterChoice(void);
//void textFile(FILE* readPtr);
//void updateRecord(FILE* fPtr);
//void newRecord(FILE* fPtr);
//void deleteRecord(FILE* fPtr);
//
//int main()
//{
//	FILE* cfPtr;
//
//	if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL)
//	{
//		puts("文件无法被打开\n");
//	}
//	else
//	{
//		unsigned int choice = 0;
//
//		while ((choice = enterChoice()) != 5)//允许用户指定操作
//		{
//			switch (choice) 
//			{
//			case 1:
//				textFile(cfPtr);//从记录文件中创建文本文件
//				break;
//
//			case 2:
//				updateRecord(cfPtr);//更新记录
//				break;
//
//			case 3:
//				newRecord(cfPtr);//创建记录
//				break;
//
//			case 4:
//				deleteRecord(cfPtr);//删除
//				break;
//
//			default ://如果用户没有选择有效的选项，则显示
//				puts("错误的选择\n");
//				break;
//			}
//		}
//		fclose(cfPtr);
//	}
//	return 0;
//}
//
//unsigned int enterChoice(void)
//{
//	//显示可用的选项
//	printf("%s", "\n请输入你的选择\n1 - 存储一个格式化的文本文件的账户调用\n\"accounts.txt\" 打印\n2 - 更新现有账户\n3 - 添加一个新账户\n4 - 删除一个账户\n5 - 结束程序\n？ ");
//
//	unsigned int menuChoice = 0;
//	scanf("%u", &menuChoice);
//	return menuChoice;
//	return 0;
//}
//
//void textFile(FILE* readPtr)//创建用于打印的格式化文本文件
//{
//	FILE* writePtr;
//	if ((writePtr = fopen("accounts.dat", "rb")) == NULL)
//	{
//		printf("文件无法被打开\n");
//	}
//	else
//	{
//		printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");
//
//		while (!feof(writePtr))
//		{
//			struct clientData client = { 0,"","",0 };
//
//			int ret = fread(&client, sizeof(struct clientData), 1, writePtr);
//
//			if (ret != 0 && client.acctNum != 0)
//			{
//				printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
//			}
//		}
//		fclose(writePtr);
//	}
//
//	//if ((writePtr = fopen("accounts.txt", "rb")) == NULL)
//	//{
//	//	puts("文件无法被打开\n");
//	//}
//	//else
//	//{
//	//	rewind(readPtr);//设置指向文件开始的指针
//	//	fprintf(writePtr, "%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");
//
//	//	//将所有记录从随机访问文件复制到文本文件
//	//	while (!feof(readPtr))
//	//	{
//	//		struct clientData client = { 0,"","",0.0 };//使用默认信息创建clientData
//	//		int ret = fread(&client, sizeof(struct clientData), 1, readPtr);
//
//	//		//将每个记录写入文本文件
//	//		if (ret != 0 && client.acctNum != 0)
//	//		{
//	//			fprintf(writePtr, "%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
//	//		}
//	//	}
//	//	fclose(writePtr);
//	//}
//}
//
//void updateRecord(FILE* fPtr)//更新记录中的余额
//{
//	//获取要更新的账号
//	printf("%s", "输入账号（1 到 100）：-->");
//	unsigned int account = 0;
//	scanf("%u", &account);
//
//	//将文件指针移动到正确的文件记录
//	fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
//
//	//创建没有信息的clientData
//	struct clientData client = { 0,"","",0 };
//
//	//从文件中读取记录
//	fread(&client, sizeof(struct clientData), 1, fPtr);
//
//	//如果账户不存在则显示错误
//	if (0 == client.acctNum)
//	{
//		printf("Account #%d 没有信息。\n", account);
//	}
//	else
//	{
//		printf("%-6d%-16s%-11s%10.2f\n\n", client.acctNum, client.lastName, client.firstName, client.balance);
//
//		printf("%s", "Enter charge(+) or payment(-)：");
//		double transaction;
//		scanf("%lf", &transaction);
//
//		client.balance += transaction;//更新余额记录
//
//		printf("%-6d%-16s%-11s%10.2f", client.acctNum, client.lastName, client.firstName, client.balance);
//
//		//将文件指针移动到正确的文件记录
//		fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
//
//		//在文件中用更新后的记录覆盖旧记录
//		fwrite(&client, sizeof(struct clientData), 1, fPtr);
//	}
//}
//
//void newRecord(FILE* fPtr)
//{
//	//获取要创建的账号
//	printf("%s", "请输入一个新账号（1 到 100）：-->");
//	unsigned int accountNum = 0;
//	scanf("%u", &accountNum);
//
//	//将文件指针移动到正确的文件记录
//	fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);
//
//	//使用默认信息创建 clientData
//	struct clientData client = { 0,"","",0 };
//
//	//从文件中阅读记录
//	fread(&client, sizeof(struct clientData), 1, fPtr);
//
//	//账号错误显示
//	if (client.acctNum != 0)
//	{
////		printf("Account #%d already contains information。\n", client.acctNum);
//		printf("账号 #%d 已经存在。\n", client.acctNum);
//
//	}
//	else
//	{
//		printf("%s", "输入名，姓，余额\n？ ");
//		scanf("%14s%9s%lf", &client.lastName, &client.firstName, &client.balance);
//
//		client.acctNum = accountNum;
//
//		//
//		fseek(fPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);
//
//		//在文件中插入记录
//		fwrite(&client, sizeof(struct clientData), 1, fPtr);
//	}
//}
//
//void deleteRecord(FILE* fPtr)
//{
//	//获取要删除的账号
//	printf("%s", "输入要删除的账号（1 到 100）：-->");
//	unsigned int accountNum = 0;
//	scanf("%u", &accountNum);
//
//	//
//	fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);
//
//	struct clientData client;
//
//	//从文件中阅读记录
//	fread(&client, sizeof(struct clientData), 1, fPtr);
//
//	if (0 == client.acctNum)
//	{
//		//printf("Account %d is does not exist。\n", accountNum);
//		printf("账号：%d 不存在。\n", accountNum);
//	}
//	else
//	{
//		fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);
//
//		struct clientData blankClient = { 0,"","",0 };
//
//		//用空白记录替换现有记录
//		fwrite(&blankClient, sizeof(struct clientData), 1, fPtr);
//	}
//}
