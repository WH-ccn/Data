#include<stdio.h>
void bubbleSort(int[],int,int);
long long abs(int,int);
int main()
{
	int m,n,p,q;
	scanf("%d%d",&n,&m);
	int number[n];
	for(p=0;p<n;p++)
	scanf("%d",&number[p]);
	
	bubbleSort(number,n,m);
	
	for(q=0;q<n;q++)
	printf("%d\n",number[q]);
	return 0;
}

void bubbleSort(int a[],int x,int y) 
{
int i,j,hold;
for(i=0;i<x-1;i++)
{
for(j=0;j<x-1-i;j++)

if(abs(a[j],y)>abs(a[j+1],y))
{
hold=a[j];
a[j]=a[j+1];
a[j+1]=hold;
}

else if(abs(a[j],y)==abs(a[j+1],y))
{
	if(a[j+1]<a[j])
	hold=a[j];
    a[j]=a[j+1];
    a[j+1]=hold;
}
else 
break;

}
 }
 
 long long abs(int u,int i){
 
 if(u>=i)
 return u-i;
 if(u<i)
 return i-u;  

 }