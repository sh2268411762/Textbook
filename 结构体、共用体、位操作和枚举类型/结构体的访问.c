//#include <stdio.h>
//
//struct card {
//	char* face;
//	char* suit;
//};
//int main()
//{
//	struct card aCard;
//	struct card c1;
//
//
//	aCard.face = "Ace";
//	aCard.suit = "Spades";
//	c1 = aCard;
//	struct card c2 = { "2","Hearts" };
//
//	struct card* cardPtr = &aCard;//定义一个指向aCard的指针
//	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit, cardPtr->face, " of ", cardPtr->suit, (*cardPtr).face, " of ", (*cardPtr).suit);
//	printf("%s%s%s\n", c1.face, " of ", c1.suit);
//	printf("%s%s%s\n", c2.face, " of ", c2.suit);
//
//
//	return 0;
//}