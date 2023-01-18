#include<stdio.h>

int main(void)
{
    int n,i;
    scanf("%d",&n);
    int feb_array[n];
    feb_array[0]=0;
    feb_array[1]=1;
    for(i=2; i<n; i++)
    {
        feb_array[i]= feb_array[i-1]+feb_array[i-2];
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d",feb_array[i]);
        if(i!=n-1)
        {
            printf(",");
        }
    }

    return 0;
}