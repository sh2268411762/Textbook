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
//	if ((cfPtr = fopen("accounts.dat", "rb")) == NULL)
//	{
//		printf("文件无法被打开\n");
//	}
//	else
//	{
//		printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");
//
//		while (!feof(cfPtr))
//		{
//			struct clientData client = { 0,"","",0 };
//
//			int ret = fread(&client, sizeof(struct clientData), 1, cfPtr);
//
//			if (ret != 0 && client.acctNum != 0)
//			{
//				printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstNmae, client.balance);
//			}
//		}
//		fclose(cfPtr);
//	}
//
//}