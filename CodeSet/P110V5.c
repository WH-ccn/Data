#include <stdio.h>
long long mabs(long long a,long long b);
void bubbleSort(long long a[],long long n,long long key);
long long main()
{
	long long s[1001];
	long long n,m,i,key;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&s[i]);
	}
	
	bubbleSort(s,n,m);
	
	return 0;	
} 

long long mabs(long long a,long long b)
{
	long long ab;
	if(a>b)
		ab=a-b;
	else
		ab=b-a;
	return ab;
}

void bubbleSort(long long a[],long long n,long long key)
{
	long long i,j,hold,flag;
	long long p,q;
	for( i = 0; i < n-1; i++){
		flag=0;
		for(j=0;j<n-i-1;j++){
			p=mabs(a[j],key);
			q=mabs(a[j+1],key);
			if(p>q){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				flag=1;
			}else if(p==q){
				if(a[j] > a[j+1]){
					hold=a[j];
					a[j]=a[j+1];
					a[j+1]=hold;
					flag=1;
				}
			}
		}
		if(0==flag)
			break;
	}		
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}		
}