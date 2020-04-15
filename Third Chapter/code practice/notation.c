#include <stdio.h>
int main(void)
{
    float i;
    
    printf("Enter a floating-point value:");
    scanf("%f", &i);
    printf("fixed-point notation:%f\n", i); 
    printf("exponential notation:%e\n", i);
    printf("p notation:%a\n", i);
    
    return 0;
}
