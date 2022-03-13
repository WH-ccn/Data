#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m,temp;
	int i,j,hold,k;
	int a[1000],b[1000];
	scanf ("%d%d",&n,&m);
	for (k=0;k<n;k++)
	{
		scanf ("%d",&a[k]);
		b[k] = a[k]-m;
	}
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1-i;j++)
		if ( abs(b[j])> abs(b[j+1]))
		{
			hold = b[j];
			b[j]=b[j+1];
			b[j+1] = hold;
			hold = a[j];
			a[j]=a[j+1];
			a[j+1] = hold;
		}
		if ( abs(b[j])== abs(b[j+1]) && b[j] >b[j+1])
		{
			hold = b[j];
			b[j]=b[j+1];
			b[j+1] = hold;
			hold = a[j];
			a[j]=a[j+1];
			a[j+1] = hold;
		}
	}
	for (k=0;k<n;k++)
		printf ("%d\n",a[k]);
	return 0;
}