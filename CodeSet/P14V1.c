#include<stdio.h> 
long long abs(long long);
int main ()
{
	int n,m;
	long long i,k,j,temp1,temp2,h;
	long long a[2000],b[2000],c;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%lld",&c);
		a[i]=c;
		b[i]=abs(c-m);
	}
	for(k=1;k<=n;k++){
	
	for(j=1;j<=n-k;j++)
	{
		if(b[j]>b[j+1])
		{
		temp1=a[j+1];
		a[j+1]=a[j];
		a[j]=temp1;
		temp2=b[j+1];
		b[j+1]=b[j];
		b[j]=temp2;
	}
	if(b[j]==b[j+1]){
		if(a[j]>a[j+1]){
		
		temp1=a[j+1];
		a[j+1]=a[j];
		a[j]=temp1;
		temp2=b[j+1];
		b[j+1]=b[j];
		b[j]=temp2;
	}
	}
	}
	}
	for(h=1;h<=n;h++){
	
	printf("%d\n",a[h]);}
	return 0;
	
}
long long abs(long long a){
	if(a>=0)
	return a;
	return -a;
}