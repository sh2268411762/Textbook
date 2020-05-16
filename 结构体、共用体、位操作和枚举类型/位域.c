//#include <stdio.h>
//#define C 52
//
//struct bC {
//	unsigned int face : 4;
//	unsigned int suit : 2;
//	unsigned int color : 1;
//};
//typedef struct bC c;
//void fill(c* const wDeck)
//{
//	for (size_t i = 0; i < C; i++)
//	{
//		wDeck[i].face = i % (C / 4);
//		wDeck[i].suit = i % (C / 4);
//		wDeck[i].face = i % (C / 2);
//	}
//}
//
//void deal(const c* const wDeck)
//{
//	printf("%-6s%-6s%-15s%-6s%-6s%s\n", "Card", "Suit", "Color", "Card", "Suit", "Color");
//
//	for (size_t k1 = 0, k2 = k1 + 26; k1 < C / 2; k1++, k2++)
//	{
//		printf("%3d   %2d   %2d              ", wDeck[k1].face, wDeck[k1].suit, wDeck[k1].color);
//		printf("%3d   %2d   %2d\n", wDeck[k2].face, wDeck[k2].suit, wDeck[k2].color);
//
//	}
//}
//
//int main()
//{
//	c deck[C];
//	fill(deck);
//	deal(deck);
//	return 0;
//}