#include <stdio.h>
long long ab(long long,int);
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	long long a[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ab(a[i],m)>=ab(a[j],m)){
				if(ab(a[i],m)==ab(a[j],m)){
					if(a[i]>a[j]){
						long long hold=a[i];
						a[i]=a[j];
						a[j]=hold;
					}
				}else{
					long long hold=a[i];
					a[i]=a[j];
					a[j]=hold;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
    return 0;
}
long long ab(long long ai,int m){
	ai-=m;
	if(ai<0){
		ai=-ai;
	}
	return ai;
}