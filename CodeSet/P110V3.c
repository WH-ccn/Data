#include <stdio.h>
long long mabs(int a,int b);
void bubbleSort(int a[],int n,int key);
int main()
{
	int s[1001];
	int n,m,i,key;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	
	bubbleSort(s,n,m);
	
	return 0;	
} 

long long mabs(int a,int b)
{
	long long ab;
	if(a>b)
		ab=a-b;
	else
		ab=b-a;
	return ab;
}

void bubbleSort(int a[],int n,int key)
{
	int i,j,hold,flag;
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