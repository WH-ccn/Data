#include <stdio.h>
long long f(long long,long long);
int main()
{
	int n,i,j,m;
	long long a[1001],b[1001],x,y;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        b[i]=f(a[i],m);
}
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(b[j]>b[j+1]){
               x=a[j];
			   a[j]=a[j+1];
               a[j+1]=x;
               y=b[j];
               b[j]=b[j+1];
               b[j+1]=y;
}
        else
            if(b[j]==b[j+1]){
               if(a[j]>a[j+1]){ 
                  x =a[j]; 
                  a[j]=a[j+1];
                  a[j+1]=x;
				  y=b[j];
                  b[j]=b[j+1];
                  b[j+1]=y;
                }
            }
        }
    }
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}
long long f(long long n,long long m){
	long long int abs;
		if(n>m)
		abs = n-m;
	    else
	    abs = m-n;
	return abs;
}