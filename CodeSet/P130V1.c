#include<stdio.h>
#include<stdlib.h> 
void supb(int a[],int n,int m);
int a[2000];
long long abbs(int ,int);
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	supb(a,n,m);
	for(i=0;i<n;i++){
		printf("%d\n",a[i]); 
	}
	return 0;
}
void supb(int a[],int n,int m){
	int i,j;
	int hold1,hold2,flag;
	for(i=0;i<n-1;i++){
		flag=0;
		for(j=0;j<n-i-1;j++){
			if(abbs(a[j],m)>abbs(a[j+1],m)){
				hold1=a[j];
				a[j]=a[j+1];
				a[j+1]=hold1;
				flag=1;
			}
			else if(abbs(a[j],m)==abbs(a[j+1],m)){
				if(a[j]>a[j+1]){
					hold2=a[j];
					a[j]=a[j+1];
					a[j+1]=hold2;
					flag=1;
			}
			}
		}
		if (flag==0)
		break; 
	}
}
long long abbs(int a,int b){
	long long res;
	if(a>=b){
		res=a-b;
	}
	else{
		res=b-a;
	}
	return res;
}