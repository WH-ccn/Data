#include<stdio.h>
long long fab(long long x){
	if(x>=0)
		return x;
	else
		return -x;
}

int main()
{
	int i, j;
	long long a[1100], temp, lla1, lla2, n, m;
	scanf("%lld%lld", &n, &m);
	for(i=0; i<n; i++)
		scanf("%lld", &a[i]);
	for(i=0; i<n; i++){ 
		for(j=0; j < n-1-i; j++){ 
			lla1 = fab(a[j]-m);
			lla2 = fab(a[j+1]-m);
			if(lla1>lla2 || ( lla1==lla2 && a[j]>a[j+1] ) )
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}