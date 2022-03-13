#include<stdio.h> 
void bubble(long long a[],long long b[],int n);
long long fun(long long);
long long a[1010];
long long b[1010];
int main()
{
	int n,i;
	long long m;
	scanf("%d%lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);  
	}
	for(i=0;i<n;i++){
		b[i]=fun(a[i]-m);  
	}
	bubble(a,b,n);
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);  
	}
	return 0;
}

void bubble(long long a[],long long b[],int n){
	int i,j,flag;
	long long hold;
	for(i=0;i<n-1;i++){
		flag=0;
		for(j=0;j<n-1-i;j++){  
			if(b[j]>b[j+1]||(b[j]==b[j+1])&&(a[j]>a[j+1])){
			    hold=a[j];
			    a[j]=a[j+1];
			    a[j+1]=hold;
			    hold=b[j];
			    b[j]=b[j+1];
			    b[j+1]=hold;
			    flag=1;}}
	   
		if(0==flag){
			break;}}
}  
  
long long fun(long long x){

	if(x<0)
		return -x;
	
	else
		return x;
}