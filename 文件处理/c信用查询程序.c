//#include <stdio.h>
//
//
//int main()
//{
//	FILE* cfPtr;
//
//	if ((cfPtr = fopen("clients.txt", "r")) == NULL)//��
//	{
//		printf("�ļ����ܱ���\n");
//	}
//	else
//	{
//		printf("%s", "��������\n 1 - �г��������˻�\n 2 - �г���˾Ƿ��Ǯ����˻�\n 3 - �г�Ƿ��˾Ǯ����˻�\n 4 - ���н���\n��");
//		unsigned int request;//����ѡ��
//		scanf("%u", &request);//����ѡ��
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
//				puts("\n������˻���");
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
//				puts("\n��˾Ƿ��Ǯ����˻�");
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
//				puts("\n��Ƿ��˾Ƿ����˻�");
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
//			rewind(cfPtr);//���ļ�ָ�����¶�λ��cfPtr��ָ���ļ��Ŀ�ͷ
//
//			printf("%s\n", "\n��");
//			scanf("%d", &request);
//		}
//		puts("��������\n");
//		fclose(cfPtr);
//	}
//}