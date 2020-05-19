#include <stdio.h>

int main()
{
    int fibo[100],a,b,sum,n;
    fibo[0]=0;fibo[1]=1;
    printf("Enter limit.");
    scanf("%d",&n);
    printf("Series:");
    for(int i=0;i<n;i++)
    {
        fibo[i+2]=fibo[i]+fibo[i+1];
        printf("%d",fibo[i]);
    }

    return 0;
}
