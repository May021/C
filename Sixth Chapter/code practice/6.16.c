//Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相当于原始投资的10%）。
//Deirdre以 5%的复合利息投资了 100 美元（也就是说，利息是当前余额的 5%，包含之前的利息）。
//编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。
#include <stdio.h>
#define RATE1 10
#define RATE2 0.05
int main(void)
{
	float Daphne_money = 100, Deirdre_money = 100;
	int year;
	
	for(year = 0; Deirdre_money<=Daphne_money; year++)
	{
		Daphne_money += RATE1;
		Deirdre_money *= (1+RATE2);
	}
	printf("%d年后，Deirdre的投资额超过Daphne\nDaphne的投资额：%f  Deirdre的投资额: %f",year,Daphne_money,Deirdre_money);

	return 0;
} 
