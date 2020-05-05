//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define CARDS 52
//#define FACES 13
//
//struct card {
//	const char* face;
//	const char* suit;
//};
//
//typedef struct card Card;//类型重命名
//
//
//void fillDeck(Card* const wDeck, const char* wFace[], const char* wSuit[])//把字符串放入结构体Card中
//{
//	for (size_t i = 0; i < CARDS; i++)
//	{
//		wDeck[i].face = wFace[i % FACES];
//		wDeck[i].suit = wSuit[i / FACES];
//	}
//}
//void shuffle(Card* const wDeck)//洗牌
//{
//	for (size_t i = 0; i < CARDS; i++)
//	{
//		size_t j = rand() % CARDS;
//		Card temp = wDeck[i];
//		wDeck[i] = wDeck[j];
//		wDeck[j] = temp;
//	}
//}
//void deal(const Card* const wDeck)//发牌
//{
//	for (size_t i = 0; i < CARDS; i++)
//	{
//		printf("%5s %-8s%s", wDeck[i].suit, wDeck[i].face, (i + 1) % 4 ? " " : "\n");
//	}
//}
//
//int main()
//{
//	Card deck[CARDS];//创建一个数组
//
//	const char* face[] = { "A","1","2","3","4","5","6","7","8","9","10","J","Q","K" };//初始化指针数组
//	const char* suit[] = { "黑桃","方块","红桃","梅花" };//初始化指针数组
//
//	srand((unsigned int)time(NULL));//获取随机数
//	fillDeck(deck, face, suit);//加载deck
//	shuffle(deck);//将牌随机放入deck
//	deal(deck);//发牌
//
//	return 0;
//}