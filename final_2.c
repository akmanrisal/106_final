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
        min=num[0];
         for(int i=1; i<n; i++)
        {
            if(min>num[i])
            {
                min=num[i];
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
            printf("%d %d",min,max);
    }
    else
        printf("Error");

    return 0;

}
 /*max=num[0];
        for(int i=1; i<n; i++)
        {
            if(max==num[i])
            {
                min=num[i]
                max=num[i+1];
                num[i]=0;
                 printf("%d",min);
            }

            else
                break;

        }*/
