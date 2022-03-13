#include<stdio.h>
long long int sb(long long int,long long int);
int main(){
	long long int n,m,i,t,temp,s,q,o;
	long long int a[1009];
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&t);
		a[i]=t;
	}
	for(i=0;i<n;i++){
		q=a[i];
		for(s=0;s<n;s++){
			o=a[s];
			if(sb(q,m)<sb(o,m)&&i>s){
				temp=a[i];
				a[i]=a[s];
				a[s]=temp;
				
			}else if(sb(q,m)==sb(o,m)){
				if(a[i]<a[s]&&i>s){
				temp=a[i];
				a[i]=a[s];
				a[s]=temp;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}
long long int sb(long long int f,long long int v){ 
 if(f>=v){
 	return f-v;
	} else
	return v-f;
}