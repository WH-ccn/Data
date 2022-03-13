#include<stdio.h>
#define MAX_N 1000

long long arr[MAX_N];
void imp_bubbleSort(long long a[],int n,long long m);

long long int abs(long long a,long long b);

int main()
{
	int n;
	long long int m;
	scanf("%d%lld",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	imp_bubbleSort(arr,n,m);
	for(int j=0;j<n;j++){
		printf("%lld\n",arr[j]);
	}
	
	return 0;
}

void imp_bubbleSort(long long a[],int n,long long m)
{
	int i,j,flag;
	long long hold;
	for(i=0;i<n-1;i++){
		flag=0;//记得初始化
		for(j=0;j<n-1-i;j++){
			if(abs(a[j],m)>abs(a[j+1],m)){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				flag=1;
			}else if(abs(a[j],m)==abs(a[j+1],m)){
				if(a[j]>a[j+1]){
					hold=a[j];
					a[j]=a[j+1];
					a[j+1]=hold;
					flag=1;
				}
			}
		}
		if(flag==0){
			break;
		} 
	}
 } 
 
long long int abs(long long a,long long b)
{
	if(a>=b){
		return a-b;
	}else{
		return b-a;
	}
}