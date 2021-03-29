#include<stdio.h>
int main()
{
    int n,k,c,sum;
    scanf("%d %d",&n,&c);
    sum=n;
    if(sum>0 || sum<32750)
    {
        for(int i=sum;;sum++)
        {
            if(sum%10==c)
            {
                k=sum;
                if(k>n)
                {
                    printf("%d",k);
                    break;
                }
                else
                    continue;
            }
        }
    }
    else
        printf("Error");

    return 0;
}
