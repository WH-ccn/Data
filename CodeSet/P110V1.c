#include <stdio.h>
int recBinFind(int b[],int low,int high,int key);
long ab(int a,int b);
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

long ab(int a,int b)
{
	long ab;
	if(a>b)
		ab=a-b;
	else
		ab=b-a;
	return ab;
}

void bubbleSort(int a[],int n,int key)
{
	int i,j,hold,flag,p,q;

	for( i = 0; i < n-1; i++){
		flag=0;
		for(j=0;j<n-i-1;j++){
			p=ab(a[j],key);
			q=ab(a[j+1],key);
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
	}		
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}		
}