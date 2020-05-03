//要求用户输入一个上限整数和一个下限整数，计算从上限到下限范围内所有整数的平方和，并显示计算结果。
//然后程序继续提示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数小于下限整数为止。
#include <stdio.h>
int main(void)
{
	int upper, lower;
	int i;
	
	printf("Enter　lower　and　upper　integer　limits: ");
	while( scanf("%d %d",&lower,&upper) == 2 && lower < upper){
		int sum = 0;
		for(i=lower; i<=upper; i++)
		{
			sum += i*i;
		}
		printf("The sums of the squares from %d to %d is %d\n",lower*lower,upper*upper,sum);
		printf("Enter　next　set　of　limits: ");
	}
	printf("Done\n");
	
	return 0;
}
