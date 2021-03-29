#include<stdio.h>
int main()
{
    int n,k,c;
    scanf("%d %d",&n,&c);

    for(int i=n;; n++)
    {
        if(n%10==c)
        {
            printf("%d",n);
            break;
        }
    }
}
