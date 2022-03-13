#include <stdio.h>
long long a[2000];
long long funabs(long long a,long long b);
void bubbleSortNew(long long a[], int n,int m);
long long funabs(long long a,long long b)
{
	long long temp,max,min;
	if(a>b){
		max=a;
		min=b;
	}
	else{
		max=b;
		min=a;
	}
	temp=max-min;
	if(temp<0) temp=-temp;
	//printf("temp=%lld\n",temp);
	return temp;
	
}
int main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	bubbleSortNew(a,n,m);
	for(i=0;i<n;i++)
		printf("%lld\n",a[i]);
	return 0;
	
	
}
void bubbleSortNew(long long a[], int n,int m)
{
   	int i, j;
   	long long hold;
   	for( i=0; i < n-1; i++)
      	for(j=0; j < n-1-i; j++)
          	if(funabs(a[j],m) > funabs(a[j+1],m))
          	{
            hold = a[j];
            a[j] = a[j+1];
            a[j+1] = hold;
          	}
    for( i=0; i < n-1; i++)
        for(j=0; j < n-1-i; j++)
        	if(funabs(a[j],m) == funabs(a[j+1],m))
          	{
          		if(a[j]>a[j+1]){
          			hold = a[j];
            		a[j] = a[j+1];
           			a[j+1] = hold;
				  	}
			}   
}