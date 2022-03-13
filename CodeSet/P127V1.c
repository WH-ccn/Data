#include<stdio.h> 
#include<stdlib.h> 
void bubble(int a[],int b[],int n);
int a[1010];
int b[1010];
int main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);  
	}
	for(i=0;i<n;i++){
		b[i]=abs(a[i]-m);  
	}
	bubble(a,b,n);
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);  
	}
	return 0;
}

void bubble(int a[],int b[],int n){
	int i,j,flag;
	double hold;
	for(i=0;i<n-1;i++){
		flag=0;
		for(j=0;j<n-1-i;j++){  
			if(b[j]>b[j+1]||(b[j]==b[j+1])&&(a[j]>a[j+1])){
			    hold=a[j];
			    a[j]=a[j+1];
			    a[j+1]=hold;
			    flag=1;}}
	   
		if(0==flag){
			break;}}
}