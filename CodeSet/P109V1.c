#include<stdio.h>
#include<stdlib.h>
#define MAX_N 1000

int arr[MAX_N];
void imp_bubbleSort(int a[],int n,int m);
 
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	imp_bubbleSort(arr,n,m);
	for(int j=0;j<n;j++){
		printf("%d\n",arr[j]);
	}
	
	return 0;
}

void imp_bubbleSort(int a[],int n,int m)
{
	int i,j,hold,flag;
	for(i=0;i<n-1;i++){
		flag=0;//记得初始化
		for(j=0;j<n-1-i;j++){
			if(abs(a[j]-m)>abs(a[j+1]-m)){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				flag=1;
			}else if(abs(a[j]-m)==abs(a[j+1]-m)){
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