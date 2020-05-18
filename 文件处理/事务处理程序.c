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
//		puts("�ļ��޷�����\n");
//	}
//	else
//	{
//		unsigned int choice = 0;
//
//		while ((choice = enterChoice()) != 5)//�����û�ָ������
//		{
//			switch (choice) 
//			{
//			case 1:
//				textFile(cfPtr);//�Ӽ�¼�ļ��д����ı��ļ�
//				break;
//
//			case 2:
//				updateRecord(cfPtr);//���¼�¼
//				break;
//
//			case 3:
//				newRecord(cfPtr);//������¼
//				break;
//
//			case 4:
//				deleteRecord(cfPtr);//ɾ��
//				break;
//
//			default ://����û�û��ѡ����Ч��ѡ�����ʾ
//				puts("�����ѡ��\n");
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
//	//��ʾ���õ�ѡ��
//	printf("%s", "\n���������ѡ��\n1 - �洢һ����ʽ�����ı��ļ����˻�����\n\"accounts.txt\" ��ӡ\n2 - ���������˻�\n3 - ���һ�����˻�\n4 - ɾ��һ���˻�\n5 - ��������\n�� ");
//
//	unsigned int menuChoice = 0;
//	scanf("%u", &menuChoice);
//	return menuChoice;
//	return 0;
//}
//
//void textFile(FILE* readPtr)//�������ڴ�ӡ�ĸ�ʽ���ı��ļ�
//{
//	FILE* writePtr;
//	if ((writePtr = fopen("accounts.dat", "rb")) == NULL)
//	{
//		printf("�ļ��޷�����\n");
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
//	//	puts("�ļ��޷�����\n");
//	//}
//	//else
//	//{
//	//	rewind(readPtr);//����ָ���ļ���ʼ��ָ��
//	//	fprintf(writePtr, "%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");
//
//	//	//�����м�¼����������ļ����Ƶ��ı��ļ�
//	//	while (!feof(readPtr))
//	//	{
//	//		struct clientData client = { 0,"","",0.0 };//ʹ��Ĭ����Ϣ����clientData
//	//		int ret = fread(&client, sizeof(struct clientData), 1, readPtr);
//
//	//		//��ÿ����¼д���ı��ļ�
//	//		if (ret != 0 && client.acctNum != 0)
//	//		{
//	//			fprintf(writePtr, "%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
//	//		}
//	//	}
//	//	fclose(writePtr);
//	//}
//}
//
//void updateRecord(FILE* fPtr)//���¼�¼�е����
//{
//	//��ȡҪ���µ��˺�
//	printf("%s", "�����˺ţ�1 �� 100����-->");
//	unsigned int account = 0;
//	scanf("%u", &account);
//
//	//���ļ�ָ���ƶ�����ȷ���ļ���¼
//	fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
//
//	//����û����Ϣ��clientData
//	struct clientData client = { 0,"","",0 };
//
//	//���ļ��ж�ȡ��¼
//	fread(&client, sizeof(struct clientData), 1, fPtr);
//
//	//����˻�����������ʾ����
//	if (0 == client.acctNum)
//	{
//		printf("Account #%d û����Ϣ��\n", account);
//	}
//	else
//	{
//		printf("%-6d%-16s%-11s%10.2f\n\n", client.acctNum, client.lastName, client.firstName, client.balance);
//
//		printf("%s", "Enter charge(+) or payment(-)��");
//		double transaction;
//		scanf("%lf", &transaction);
//
//		client.balance += transaction;//��������¼
//
//		printf("%-6d%-16s%-11s%10.2f", client.acctNum, client.lastName, client.firstName, client.balance);
//
//		//���ļ�ָ���ƶ�����ȷ���ļ���¼
//		fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
//
//		//���ļ����ø��º�ļ�¼���Ǿɼ�¼
//		fwrite(&client, sizeof(struct clientData), 1, fPtr);
//	}
//}
//
//void newRecord(FILE* fPtr)
//{
//	//��ȡҪ�������˺�
//	printf("%s", "������һ�����˺ţ�1 �� 100����-->");
//	unsigned int accountNum = 0;
//	scanf("%u", &accountNum);
//
//	//���ļ�ָ���ƶ�����ȷ���ļ���¼
//	fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);
//
//	//ʹ��Ĭ����Ϣ���� clientData
//	struct clientData client = { 0,"","",0 };
//
//	//���ļ����Ķ���¼
//	fread(&client, sizeof(struct clientData), 1, fPtr);
//
//	//�˺Ŵ�����ʾ
//	if (client.acctNum != 0)
//	{
////		printf("Account #%d already contains information��\n", client.acctNum);
//		printf("�˺� #%d �Ѿ����ڡ�\n", client.acctNum);
//
//	}
//	else
//	{
//		printf("%s", "���������գ����\n�� ");
//		scanf("%14s%9s%lf", &client.lastName, &client.firstName, &client.balance);
//
//		client.acctNum = accountNum;
//
//		//
//		fseek(fPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);
//
//		//���ļ��в����¼
//		fwrite(&client, sizeof(struct clientData), 1, fPtr);
//	}
//}
//
//void deleteRecord(FILE* fPtr)
//{
//	//��ȡҪɾ�����˺�
//	printf("%s", "����Ҫɾ�����˺ţ�1 �� 100����-->");
//	unsigned int accountNum = 0;
//	scanf("%u", &accountNum);
//
//	//
//	fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);
//
//	struct clientData client;
//
//	//���ļ����Ķ���¼
//	fread(&client, sizeof(struct clientData), 1, fPtr);
//
//	if (0 == client.acctNum)
//	{
//		//printf("Account %d is does not exist��\n", accountNum);
//		printf("�˺ţ�%d �����ڡ�\n", accountNum);
//	}
//	else
//	{
//		fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);
//
//		struct clientData blankClient = { 0,"","",0 };
//
//		//�ÿհ׼�¼�滻���м�¼
//		fwrite(&blankClient, sizeof(struct clientData), 1, fPtr);
//	}
//}
