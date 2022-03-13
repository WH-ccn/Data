#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,m,n,M,N;
	scanf("%d%d",&n,&m);
	int hold,a[1001]={0};
	int b[1001]={0};
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=abs(a[i]-m);
	}
	i--;
	for(M=0;M<n;M++)
	{
		for(N=0;N<=i;N++)
		{
			if(b[N]<b[N+1])
			{
				hold=a[N+1];
				a[N+1]=a[N];
				a[N]=hold;
				hold=b[N+1];
				b[N+1]=b[N];
				b[N]=hold;
			}
		}
		printf("%d\n",a[i]);
		i--;
	}
	return 0;
}