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
//typedef struct card Card;//����������
//
//
//void fillDeck(Card* const wDeck, const char* wFace[], const char* wSuit[])//���ַ�������ṹ��Card��
//{
//	for (size_t i = 0; i < CARDS; i++)
//	{
//		wDeck[i].face = wFace[i % FACES];
//		wDeck[i].suit = wSuit[i / FACES];
//	}
//}
//void shuffle(Card* const wDeck)//ϴ��
//{
//	for (size_t i = 0; i < CARDS; i++)
//	{
//		size_t j = rand() % CARDS;
//		Card temp = wDeck[i];
//		wDeck[i] = wDeck[j];
//		wDeck[j] = temp;
//	}
//}
//void deal(const Card* const wDeck)//����
//{
//	for (size_t i = 0; i < CARDS; i++)
//	{
//		printf("%5s %-8s%s", wDeck[i].suit, wDeck[i].face, (i + 1) % 4 ? " " : "\n");
//	}
//}
//
//int main()
//{
//	Card deck[CARDS];//����һ������
//
//	const char* face[] = { "A","1","2","3","4","5","6","7","8","9","10","J","Q","K" };//��ʼ��ָ������
//	const char* suit[] = { "����","����","����","÷��" };//��ʼ��ָ������
//
//	srand((unsigned int)time(NULL));//��ȡ�����
//	fillDeck(deck, face, suit);//����deck
//	shuffle(deck);//�����������deck
//	deal(deck);//����
//
//	return 0;
//}