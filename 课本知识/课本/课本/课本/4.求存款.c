//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double principal = 1000.00;   //本金
//	double rate = .05;            //年利率
//	int year = 0;                 //存钱年数
//	double amount = 0;            //本息和
//	printf("%4s%21s\n", "Year", "Amount on deposit"); //%后面的21定义了打印这个变量所占用的域宽，域宽取21表示
//	for (year = 1; year <= 10; year++)                //打印这个变量需要占用21个字符的位置
//	{                                                 //小数点后面的2定义了打印这个变量时所保留的精度（默认为6）
//		amount = principal * pow((1 + rate), year);
//		printf("%4d%21.2f\n", year, amount);
//	}
//	return 0;
//}