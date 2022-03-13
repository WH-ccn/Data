#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
long long labs(long long);
int main(){
	int i,j;
	long long a[1005];
	long long n,m,x,y,temp,p,q;
	scanf("%lld %lld",&n,&m);
//	printf("%lld %lld",n,m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
/*	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}*/
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			p=a[j]-m;x=labs(p);
			q=a[j+1]-m;y=labs(q);
			if(x>y){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else if(x==y){
				if(a[j]>a[j+1]){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}	
		}
	}
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}
long long labs(long long n){
	if(n<0)
	return -n;
	else 
	return n;
}

/*#include<stdio.h>
long long abss(long long);
int main(){
	long long n,m,i,j;
	long long temp,x,y,X,Y,a[1000];
	scanf("%lld",&n);
	scanf("%lld",&m);
//	printf("%d%d",n,m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
//		printf("%lld",a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
		x=a[j]-m;X=abss(x);
//		printf("X=%lld\n",X);
		y=a[j+1]-m;Y=abss(y);
//		printf("Y=%lld\n",Y);
		if(Y<X){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
//		printf("a=%lld,b=%lld",a[j],a[j+1]);
		}
		else if(Y==X){
			if(a[j+1]<a[j]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		}
	}

	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
}
long long abss(long long x){
	if(x>=0)
	return x;
	else if(x<0)
	return -x;
}*/