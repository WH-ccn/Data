#include<stdio.h>
#include<stdlib.h> 
long long jdz(long long a)
{
     if(a>0){
     	return a;
	 }
	 if(a<0){
	 	return -a;
	 }
}
void supbubble(int a[],int n,int m)
{
	int i,j;
	int hold;
	for(i=0;i<=n-1;i++)
	{
	   for(j=0;j<n-1-i;j++)
	  {
	    if(jdz(a[j]-m)>jdz(a[j+1]-m))
	   {
	   	hold=a[j];
	   	a[j]=a[j+1];
	   	a[j+1]=hold;
	   }
	   else if(jdz(a[j]-m)==jdz(a[j+1]-m))
	   {
	   	if(a[j]>a[j+1]){
	   		hold=a[j];
	   		a[j]=a[j+1];
	   		a[j+1]=hold;
		   }
	   }
      } 
	}
}
int main()
{
	int n,m;
	int a[1000];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	supbubble(a,n,m);
	for(int j=0;j<n;j++)
	{
	printf("%d\n",a[j]);
    }
    return 0;
}