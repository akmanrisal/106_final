#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n],max,end;
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
            //end=max;
        }
    }
    printf("%d",max);

}
