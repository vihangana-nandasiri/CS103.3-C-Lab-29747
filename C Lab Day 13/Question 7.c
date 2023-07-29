#include<stdio.h>
double product(int a,float b)
{
    return a*b;
}
int main()
{
    int c;
    float d;
    printf("Enter The Integer - ");
    scanf("%d",&c);
    printf("Enter The Float Value - ");
    scanf("%f",&d);
    printf("Product Is %f",product(c,d));
}

