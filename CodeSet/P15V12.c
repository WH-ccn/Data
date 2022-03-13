#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[1005];
	int n,m;
int cmp(const void*a,const void*b)
{
	if(abs(*((int*)a)-m)==abs(*((int*)b)-m))return *((int*)a)>*((int*)b)?1:-1;
	return abs(*((int*)a)-m)>abs(*((int*)b)-m)?1:-1;
}
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 qsort(a,n,sizeof(a[0]),cmp);
	 	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	 } 
 } 