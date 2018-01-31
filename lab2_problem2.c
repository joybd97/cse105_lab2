#include<stdio.h>
int main()
{
    float m,y,k;
    printf("Enter the distance in miles and yards \nMiles: ");
    scanf("%f",&m);
    printf("Yards: ");
    scanf("%f",&y);
    k=(m+y/1760)*1.609;
    printf("The distance in kilometer is: %f km\n",k);
    return 0;

}
