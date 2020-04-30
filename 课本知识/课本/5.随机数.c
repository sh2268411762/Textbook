//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int f1 = 0;
//	int f2 = 0;
//	int f3 = 0;
//	int f4 = 0;
//	int f5 = 0;
//	int f6 = 0;
//	int roll = 0;
//	for (roll = 1; roll <= 60000000; roll++)
//	{
//		srand(time(NULL));
//		int face = (rand(time(NULL)))% 6 + 1;
//		switch (face)
//		{
//		case 1:
//			f1++;
//			break;
//
//		case 2:
//			f2++;
//			break;
//
//		case 3:
//			f3++;
//			break;
//
//		case 4:
//			f4++;
//			break;
//
//		case 5:
//			f5++;
//			break;
//
//		case 6:
//			f6++;
//			break;
//		}
//	}
//	printf("%s%13s\n", "Face", "Freqency");
//	printf("   1%13d\n", f1);
//	printf("   2%13d\n", f2);
//	printf("   3%13d\n", f3);
//	printf("   4%13d\n", f4);
//	printf("   5%13d\n", f5);
//	printf("   6%13d\n", f6);
//	return 0;
//}