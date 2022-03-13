#include<stdio.h>
long long ab(long long a,int m);
void bubblesort(long long num[],int n,int m);
int main(){
	int n,m,i,j,s;
	long long num[1005];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&num[i]);
	}
	bubblesort( num,n,m);
	for(i=0;i<n;i++){
		printf("%lld\n",num[i]);
	}
	return 0;
}
void bubblesort(long long num[],int n,int m){
	int i,j,lyw;
	long long syx;
	for(i=0;i<n-1;i++){
		lyw=0;
		for(j=0;j<n-1-i;j++){
			if(ab(num[j],m)>ab(num[j+1],m)){
				syx=num[j];
				num[j]=num[j+1];
				num[j+1]=syx;
				lyw=1;
			}else if(ab(num[j],m)==ab(num[j+1],m)){
				if (num[j]>=num[j+1]){
					syx=num[j];
				num[j]=num[j+1];
				num[j+1]=syx;
				lyw=1;
				}
			}
		}
		if (lyw==0){
		break;
	}
	}
}
long long ab(long long a,int m){
	long long jue=0;
	if(a>=m){
		jue=a-m;
	}else{
		jue=m-a;
	}
	return jue;	
}