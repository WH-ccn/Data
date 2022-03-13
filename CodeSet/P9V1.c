#include<stdio.h>
#include<math.h>
long int ab(long int );
void bubblesort(long int[],long int b[],int);

long int a[1007],b[1007];
int main()
{
	int n,m,i;
	long int num;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
		b[i]=a[i];
		num=(a[i]-m);
		a[i]=abs(num);
	}
	bubblesort(a,b,n);
	for(i=0;i<n;i++)
	{
		printf("%ld\n",b[i]);
	}
	return 0;
	
}
void bubblesort(long int a[],long int b[],int n)
{
	int i,j,flag;
	long int hold;
	for(i=0;i<n-1;i++)
	{flag=0;
		for(j=0;j<n-1-i;j++)
		{
			
			if((a[j]>a[j+1])||((a[j]==a[j+1])&&(b[j]>b[j+1])))
			{
				hold=b[j];
				b[j]=b[j+1];
				b[j+1]=hold;
				flag=1;	
				
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				flag=1;	
			}
		
			
		}
		if(0==flag)
			{break;
			}
	}
	return;
}
long int ab(long int num)
{
	if(num<0)
	num=0-num;
	return num;
}