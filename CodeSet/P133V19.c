#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define ll long long 
int fun(ll a,ll b,ll m){
	ll p=0,q=0;
	if(a>m) p=a-m;
	else p=m-a;
	if(b>m) q=b-m;
	else q=m-b;
	if(p>q) return 1;
	else if(p==q&&a>b) return 1;
	else return 0;
}

int main ()
{
	ll n=0,m=0;
	scanf("%lld%lld",&n,&m);
	ll i=0;
	ll x=0;
	ll temp=0;
	ll a[1010]={0};
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	} 
	
	ll j=0,k=0;
	for(j=0;j<n;j++){
		for(k=0;k<n-j-1;k++){
			x=fun(a[k],a[k+1],m);
			if(x){
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
			
		} 
	}
	
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}


	return 0;
}