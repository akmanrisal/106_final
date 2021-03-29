#include<stdio.h>
int main()
{
    int a,b,c,z;
    scanf("%d %d %d",&a,&b,&c);
    int num1[a][a],num2[b][b],num3[c][c];
    int sum1[a],sum2[b],sum3[c];
    sum1[0]=0;
    sum2[0]=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            scanf("%d",&num1[i][j]);
            sum1[i]=sum1[i]+num1[i][j];
            if(i==j || i>j-2 )
                sum2[i]=sum2[i]+num1[i][j];

        }
    }
    for(int x=0; x<b; x++)
    {
       for(int y=0; y<b; y++)
       {
           scanf("%d",&num2[x][y]);
            sum2[x]=sum1[x]+num1[x][y];
       }
    }
    for(int k=0; k<c; k++)
    {
       for(int z=0; z<c; z++)
       {
           scanf("%d",&num3[k][z]);
           sum1[k]=sum1[k]+num1[k][z];
       }
    }
    printf("%d %d %d",sum1[0],sum2[0],z);


    // printf("%d %d %d",num1[1][1],num2[2][2],num3[3][3]);
}
