//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int rollDice(void)
//{
//	int die1 = 1 + (rand() % 6);
//	int die2 = 1 + (rand() % 6);
//	printf("Player rolled %d + %d =%d\n", die1, die2, die1 + die2);
//	return die1 + die2;
//}
//enum Status{CONTINUE,WON,LOST};
//
//int main()
//{
//	srand(time(NULL));
//	int MyPoint;
//	enum Status gameStatus;
//	int sum = rollDice();
//	switch (sum)
//	{
//	case 7:
//	case 11:
//		gameStatus = WON;
//		break;
//
//	case 2:
//	case 3:
//	case 12:
//		gameStatus = LOST;
//		break;
//
//	default :
//		gameStatus = CONTINUE;
//		MyPoint = sum;
//		printf("Point is %d\n", MyPoint);
//		break;
//	}
//	while (gameStatus == CONTINUE)
//	{
//		sum = rollDice();
//		if (sum == MyPoint)
//		{
//			gameStatus = WON;
//		}
//		else
//		{
//			if (7 == sum)
//			{
//				gameStatus = LOST;
//			}
//		}
//	}
//	if (WON == gameStatus)
//	{
//		puts("Player wins");
//	}
//	else
//	{
//		puts("Player loses");
//	}
//	return 0;
//}