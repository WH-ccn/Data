#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h> 
#include<stdbool.h>
#define rep(i,a,n) for(i=a;i<=n;i++)
#define per(i,a,n) for(i=a;i>=n;i--)
#define Clear(a,x) memset(a,x,sizeof(a))
#define INF 2000000000
long long read(){
	long long x=0,f=1;
	char ch=getchar();
	while (ch<'0'||ch>'9') f=ch=='-'?-1:f,ch=getchar();
	while (ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	return x*f;
}
long long Abs(long long x)
{
	return x>0? x:-x;
}
int main()
{
	long long n=read(),m=read(),i,j,a[1004],t;
	rep(i,1,n) a[i]=read();
	rep(i,1,n-1)
		rep(j,1,n-1)
		{
			if(Abs(a[j+1]-m)<Abs(a[j]-m) || Abs(a[j+1]-m)==Abs(a[j]-m)&&(a[j+1]<a[j]))
			{
				
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}

	rep(i,1,n) printf("%lld\n",a[i]);
}