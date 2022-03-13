#include <stdio.h>
long long f(int);
int main()
{
	int a[10001];
	int n,m,i=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j=0,hold,flag;  
    for(i=0;i<n-1;i++)
    {
    	flag=0;
    	for(j=0;j<n-1-i;j++)
    	{
    		if(f(a[j]-m)>f(a[j+1]-m))
        	{
				hold=a[j];
    		a[j]=a[j+1];
    		a[j+1]=hold;
    		flag=1;
			}
		}
		if(0==flag)
		break;
	} 
   for(i=0;i<n;i++)
   printf("%d\n",a[i]);
   return 0;
}
long long f(int x)
{
	if(x>=0)
	return x;
	else 
	return -x;
}