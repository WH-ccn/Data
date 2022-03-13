#include<stdio.h>
long long abs_(long long);
void bubbleSort(long long [], int n);
long long m;
int main()
{
	long long n,i,j,t,k,temp;
	long long a[1005],b[1005];
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
	bubbleSort(a,n);
	for(i=0;i<n;i++)
    {
    	for(k=i;k<n;k++)
    	{
    		if(abs_(a[i]-m)==abs_(a[k]-m))
    		    if(a[i]>a[k])
				{
    		    	temp = a[i];
                    a[i] = a[k];
                    a[k] = temp;
				}
		}
	}
	for(i=0;i<n;i++)
	    printf("%lld\n",a[i]);
	return 0;	
}
long long abs_(long long x)
{
	return x<0? -x:x;
}
void bubbleSort(long long a[], int n)
{
    int i, j, hold;
    for( i=0; i < n-1; i++)
        for(j=0; j < n-1-i; j++)
            if(abs_(a[j]-m) > abs_(a[j+1]-m))
            {
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
            }
}