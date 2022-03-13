#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m;
	int i,j;
	int flag,temp;
	int a[1001],b[1001];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=abs(a[i]-m);
	}
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(b[j]>b[j+1]){
			temp = a[j];
			a[j]=a[j+1];
			a[j+1]= temp;
			flag=1;
			}
			else if(b[j]==b[j+1]){
				if(a[j]>a[j+1]){
			temp = a[j];
			a[j]=a[j+1];
			a[j+1]= temp;
			flag=1;
			}
	    }
	    if(flag==0)
		break;
        }
    }
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);	
		}
	return 0;
}