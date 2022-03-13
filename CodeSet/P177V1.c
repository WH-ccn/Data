#include<stdio.h>
#include<stdlib.h>
void bubblesort(int b[],int a[] ,int n);
int main()
{
	int n, m, i, a[1080]={0},b[1080]={0};
	scanf("%d %d",&n,&m);	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=abs(a[i]-m);
	}
	bubblesort(b,a, n);
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("\n");
	return 0;
}
void bubblesort(int b[],int a[] ,int n)
{
	int i, j, hold,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(b[j] > b[j+1])
			{
				hold = b[j];
				b[j] = b[j+1];
				b[j+1] = hold;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
			}
}