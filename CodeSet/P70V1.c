#include<stdio.h>
#include<math.h>
int main()
{int a,j,i,m;
scanf("%d",&a);
int b[a],c;
scanf("%d",&m);
for(i=0;i<a;i++)
{
	scanf("%da",&b[i]);
}
for(i=a-1;i>=0;i--)
{
	for(j=a-2;j>=a-i-1;j--)
	{
		if(fabs(b[j]-m)>fabs(b[j+1]-m)||fabs(b[j]-m)==fabs(b[j+1]-m)&&b[j]>b[j+1]){
			c=b[j];
			b[j]=b[j+1];
			b[j+1]=c;
		}
	}
	printf("%d",b[a-1-i]);
}
	return 0;
}