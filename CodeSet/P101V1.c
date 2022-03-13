#include<stdio.h>
#include<math.h>
int a[1010];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int i, j;
	int hold;
 for( i = 0; i < n-1; i++)
 for(j = 0; j < n-1-i; j++)
 if(abs(a[j] -m)> abs(a[j+1]-m))
 {
 hold = a[j];
 a[j] = a[j+1];
 a[j+1] = hold;
 } 
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}