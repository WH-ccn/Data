#include <stdio.h>
#define ll long long
ll dis (ll a,ll m) {
	ll ret;
	if (a-m>=0) ret=a-m;
	else ret=m-a;
	return ret;
}
int main ()
{
	ll n,m;
	scanf("%lld%lld",&n,&m);
	int i=0;
	int j=0;
	ll p,q;
	ll a[1010];
	for (i=0;i<n;i++) {
		scanf("%lld",&a[i]);
	}
	
	for (i=0;i<n-1;i++) {
		int flag=0;
		for (j=0;j<n-i-1;j++) {
			p= dis(a[j],m);
			q= dis(a[j+1],m);
			if (p>q) {
				ll x;
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
				flag=1;
			}
			
			else if (p==q && a[j]>a[j]+1) {
				ll x;
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
				flag=1;
			}
		}
		
		if (flag==0) break;
	} 
	
	for (i=0;i<n;i++) {
		printf("%lld\n",a[i]);
	}
	
	
	return 0;
}