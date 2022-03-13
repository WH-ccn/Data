#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int m,i,n,hold;
	int a[n];
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[n]);
	for(i=0;i<n-1;i++)
	 if(abs(a[i]-m)>abs(a[i+1]-m))
	 {
	 	hold = a[i]; 
	    a[i] = a[i+1]; 
	    a[i+1] = hold;
	 }
	 if(abs(a[i]-m)=abs(a[i+1]-m)&&a[i+1]<a[i])
	 {
	 	hold = a[i]; 
	    a[i] = a[i+1]; 
	    a[i+1] = hold;
 	 }
 	for(i=0;i<n;i++)
    printf("%d",a[n]);
    return 0;
	 
}