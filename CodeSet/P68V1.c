#include<stdio.h>
#define N 1005
long long abs(long long[], long long n);
void bubbleSort(long long [], long long, int);
int main()
{
	int m, i;
	long long n, a[N];
	scanf("%lld%d",&n, &m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	bubbleSort(a, n, m);
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}

long long abs(long long c[], long long i)
{
		if(c[i]<0)
		    return -c[i];
		else
		    return c[i];
	
}

void bubbleSort(long long d[], long long n, int m)
{
	int i, j;
	long long hold1, hold2, hold3, hold4, e[N], f[N];
	for(i=0;i<n;i++){
		e[i]=d[i]-m;
	}
	for(i=0;i<n;i++)
	    f[i]=abs(e, i);
	for(i=0;i<n;i++)
	    for(j=0;j<n-1-i;j++){
	    	if(f[j]>f[j+1])
	        {
	        	hold1=d[j];
	        	d[j]=d[j+1];
	        	d[j+1]=hold1;
	        	hold3=f[j];
	        	f[j]=f[j+1];
	        	f[j+1]=hold3;
			}
			if(f[j]==f[j+1])
			{
				if(d[j]>d[j+1])
				{
					hold2=d[j];
					d[j]=d[j+1];
					d[j+1]=hold2;
					hold4=f[j];
	        	    f[j]=f[j+1];
	        	    f[j+1]=hold4;
				}
		    }
		}
}