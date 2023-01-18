#include<stdio.h>

int main(void)
{
    int a,b,maximum_num;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    maximum_num= a>b? a:b;
    printf("Maximum number: %d\n",maximum_num);
    return 0;
}