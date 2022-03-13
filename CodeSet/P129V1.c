#include<stdio.h>
#include<string.h>
int a[1050]={};

long long LLabs(long long a){
	if (a<0)
		return (-a); 
	else if(a>0)
		return a;
}

void sort(int arr[],int n,int m){
	int i,j,hold;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if ((LLabs(a[j]-m)>LLabs(a[j+1]-m))||(LLabs(a[j]-m)==LLabs(a[j+1]-m)&&a[j]>a[j+1])){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				}	
}

int main(){
	int n,m,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n,m);
	for (i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
return 0;}