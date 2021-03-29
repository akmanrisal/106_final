#include<stdio.h>
int main()
{
    int a,b,c,sum1,sum2,sum3;
    scanf("%d %d %d",&a,&b,&c);
    int num1[a][a],num2[b][b],num3[c][c];

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            scanf("%d",&num1[i][j]);
            if(i==j)
                sum1=num[i][j];
            else
                sum2=num[i][j];
        }
    }
     for(int x=0; x<b; x++)
    {
        for(int y=0; y<b; y++)
        {
            scanf("%d",&num2[x][y]);
        }
    }
     for(int k=0; k<c; k++)
    {
        for(int z=0; z<c; z++)
        {
            scanf("%d",&num3[k][z]);
        }
    }
    printf("%d %d %d",num1[1][1],num2[2][2],num3[3][3]);
}
