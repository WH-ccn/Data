#include<stdio.h> 
void bubble(double[],int);
int main()
{
double a[1010];
	int i,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{scanf("%lf",&a[i]);
	}
	
	bubble(a,n);
	for(i=0;i<n;i++)
	printf("%.5lf\n",a[i]);
	return 0;
 } 
void bubble(double b[],int N)
{
	int i,j,hold;
	for(i=0;i<N-1;i++)
		for(j=0;j<N-i-1;j++)
		if(b[j]>b[i+1])
		{
			hold=b[j];
			b[j]=b[j+1];
			b[j+1]=hold;
		}
}