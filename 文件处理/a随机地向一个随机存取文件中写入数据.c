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
//	if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL)//fopen ���ļ�������ļ����ܱ���
//	{
//		puts("�ļ��޷�����");
//	}
//	else//���Ա���
//	{
//		struct clientData client = { 0,"","",0.0 };
//		//Ҫ���û�ָ���˺�
//		printf("%s", "�����˺ţ�1 �� 100������ 0 ������");
//		scanf("%d", &client.acctNum);
//		while (client.acctNum != 0)
//		{
//			printf("%s", "\n�����ա�������");
//
//			fscanf(stdin, "%14s%9s%lf", client.lastName, client.firstNmae, &client.balance);
//			//�����ļ����û�ָ����¼��λ��
//			//���ų��� SEEK_SET ��ʾ�ļ�λ��ָ���ǰ����ļ���ͷ�����ƫ��������λ��
//			//����ԭ��     _ACRTIMP int __cdecl fseek(_Inout_ FILE* _Stream,_In_ long  _Offset,_In_ int   _Origin);
//			fseek(cfPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);
//			
//			//���ļ���д���û�ָ������Ϣ
//			fwrite(&client, sizeof(struct clientData), 1, cfPtr);
//
//			//�����û�������һ���˻�
//			printf("%s", "\n�����˺ţ�");
//			scanf("%d", &client.acctNum);
//		}
//
//		fclose(cfPtr);
//	}
//
//}