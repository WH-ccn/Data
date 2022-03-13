#include<stdio.h>
#include<math.h>
void bubble(long long [],long long,long long);
long long fff(long long);
long long a[1000];
int main() {
	long long n,m,i;
	scanf("%lld%lld",&n,&m);
	for(i=0; i<n; i++) {
		scanf("%lld",&a[i]);
	}
	bubble(a,n,m);
	for(i=0; i<n; i++) {
		printf("%lld\n",a[i]);
	}
	return 0;
}
long long fff(long long a) {
	if(a>=0) {
		return a;
	} else {
		return -a;
	}
}
void bubble(long long b[],long long n,long long m) {
	long long i,j,hold,x,y;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			x=fff(b[j]-m),y=fff(b[j+1]-m);
			if(x>y) {
				hold=b[j];
				b[j]=b[j+1];
				b[j+1]=hold;
			}
			if(x==y) {
				if(b[j]>b[j+1]) {
					hold=b[j];
					b[j]=b[j+1];
					b[j+1]=hold;
				}
			}
		}

	}
}