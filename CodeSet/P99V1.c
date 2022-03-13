#include <stdio.h>
long long int jue(long long int m);
int main()
{
 int n,i,l,m,a[1005]={0};
 scanf("%lld %lld",&n,&m);
 for(i=0;i<n;i++)
 scanf("%lld",&a[i]);
 int j,k,hold;
 for(j=0;j<n-1;j++)
 for(k=0;k<n-1-j;k++)
 if(jue(a[k]-m)>jue(a[k+1]-m))
 {
 	hold=a[k];
 	a[k]=a[k+1];
 	a[k+1]=hold;
 }
 else if(jue(a[k]-m)==jue(a[k+1]-m))
 {
 	if(a[k]>a[k+1])
 	{
 	hold=a[k];
 	a[k]=a[k+1];
 	a[k+1]=hold;
 }
 	
 }
 
 for (l=0;l<n;l++)
 printf("%lld\n",a[l]);
  
} 
long long int jue(long long int y){
    if (y>=0)
    y=y;
    if(y<0)
    y=(-y);
    return y;}