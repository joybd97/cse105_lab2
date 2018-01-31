#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the number of computers:\t");
    scanf("%f",&a);
    printf("\nPrice of each computer:\t\t");
    scanf("%f",&b);
    printf("\nBonus=%.2f\n",a*200);
    printf("\nCommission=%.2f\n",a*b*.02);
    return 0;
}
