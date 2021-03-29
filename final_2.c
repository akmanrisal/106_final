#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n],max,end,sum=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(int i=1;i<n;i++)
    {
        if(max<num[i])
        {
            max=num[i];
            end=num[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(end!=num[i])
        {
             sum++;
        }
        else
            break;
    }
    printf("%d",sum);

}
