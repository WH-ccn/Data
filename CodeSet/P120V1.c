#include<stdio.h>
#define xunhuan(i,a,n) for(i=a;i<=n;i++)
long long getit(){
	long long x=0,f=1;
	char ch=getchar();
	while (ch<'0'||ch>'9') f=ch=='-'?-1:f,ch=getchar();
	while (ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	return x*f;
}
long long jdz(long long x)
{
	return x>0? x:-x;
}
int main()
{
	long long n=getit(),m=getit(),i,j,a[1004],t;
	xunhuan(i,1,n) a[i]=getit();
	xunhuan(i,1,n-1)
		xunhuan(j,1,n-1)
		{
			if(jdz(a[j+1]-m)<jdz(a[j]-m) || jdz(a[j+1]-m)==jdz(a[j]-m)&&(a[j+1]<a[j]))
			{	
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	xunhuan(i,1,n) printf("%lld\n",a[i]);
}