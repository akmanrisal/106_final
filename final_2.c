#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n],max,end,sum=1,a=0,min;
    if(n>=2 && n<=1000)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
        }
        max=num[0];
        end=num[0];
        for(int i=1; i<n; i++)
        {
            if(max<=num[i])
            {
                if(max==num[i])
                 {
                     a++;
                 }
                max=num[i];
                end=num[i];
            }

        }
        for(int i=0; i<n; i++)
        {
            if(end!=num[i])
                sum++;
            else
                break;
        }
        if(a==0)
            printf("%d",sum);
        else
            printf("%d %d",sum,max);
    }
    else
        printf("Error");

    return 0;

}
