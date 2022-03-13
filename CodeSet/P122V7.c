#include<stdio.h>
void bubbleSort(long long[],int,int);
long long abs(long long,int);
int main()
{
	int m,n,p,q;
	scanf("%d %d",&n,&m);
	long long number[n];
	for(p=0;p<n;p++)
	{
	scanf("%lld",&number[p]);
    }
    
    bubbleSort(number,n,m);
	
	for(q=0;q<n;q++)
	printf("%d\n",number[q]);
	return 0;
}

void bubbleSort(long long a[],int x,int y) 
{
int i,j,hold;
for(i=0;i<x-1;i++)
{
for(j=0;j<x-1-i;j++)

if(abs(a[j],y)>abs(a[j+1],y))
{
hold=a[j];
a[j]=a[j+1];
a[j+1]=hold;
}

else if(abs(a[j],y)==abs(a[j+1],y))
{
	if(a[j+1]<a[j])
	{
	hold=a[j];
    a[j]=a[j+1];
    a[j+1]=hold;
    }
	else
    continue;
}

else
continue;
}
 }
 
 long long abs(long long u,int i){
 
 if(u>=i)
 return u-i;
 if(u<i)
 return i-u;  

 }