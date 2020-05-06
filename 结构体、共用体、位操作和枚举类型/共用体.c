//#include <stdio.h>
//
//union number {
//	int x;
//	double y;
//};//声明共用体
//
//int main()
//{
//	union number value;
//
//	value.x = 100;
//	printf("Put 100 in the integer member\nand print both members.\nint ：%d\n    double：%f\n\n", value.x, value.y);
//
//	value.y = 100.0;
//	printf("Put 100.0 in the floating member\nand print both members.\nint ：%d\n    double：%f\n\n", value.x, value.y);
//	return 0;
//}