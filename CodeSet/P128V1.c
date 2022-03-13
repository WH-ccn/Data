#include<stdio.h>
void bubble(long long [],int ,int);
long long abs(long long );
int main()
{
	int n,m,i;
	long long a[1000];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	bubble(a,m,n);
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}
void bubble(long long b[], int m,int n)
{
int i, j;
int hold;
for(i=0; i<n-1; i++)
for(j=0; j<n-1-i; j++)
if(abs(b[j]-m)>abs(b[j+1]-m))
{
hold = b[j];
b[j] = b[j+1];
b[j+1] = hold;
 } 
 if(abs(b[j]-m)==abs(b[j+1]-m)&&b[j]>b[j+1])
 {
 	hold = b[j];
b[j] = b[j+1];
b[j+1] = hold;
 }
}
 long long abs(long long i)
  {
   scanf("%lld",&i);
 	if(i>=0)
 	return i;
 	else
 	return -i;
 }