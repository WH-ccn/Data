#include<stdio.h>
int main(void)
{
    int m,n,p,q,i,ii,j,a[100][100],b[100][100],ab[100][100];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&p,&q);
	if(n==p)
	{        
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
		    {
                scanf("%d",&b[i][j]);
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            ab[i][j]=0;
            for(ii=0;ii<p;ii++)
            {
                    ab[i][j]=ab[i][j]+a[i][ii]*b[ii][j];
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",ab[i][j]);
        }
        printf("\n");
    }
    return 0;
}