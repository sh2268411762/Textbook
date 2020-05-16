//#include <stdio.h>
//
//
//
//struct clientData {
//	unsigned int acctNum;
//	char lastName[15];
//	char firstNmae[10];
//	double balance;
//};
//int main()
//{
//	FILE* cfPtr;
//
//	if ((cfPtr = fopen("account.dat", "wb")) == NULL)
//	{
//		puts("文件不能被打开");
//	}
//	else
//	{
//		struct clientData blankClient = { 0,"","",0.0 };
//
//		for (unsigned i = 1; i <= 100; i++)
//		{
//			fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr);
//		}
//
//		fclose(cfPtr);
//	}
//	
//}