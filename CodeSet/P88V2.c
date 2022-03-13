#include<stdio.h> 
#include<stdlib.h>  
int n;
long long m;
int main ()
{
	scanf("%d",&n);
	scanf("%lld",&m);
	void bubbleSort(int a[],int n);
	int k,p;
	int a[100001];
	for (k=0;k<n;k++){
		scanf("%d",&a[k]);		
	}
	bubbleSort(a,n);
	for (p=0;p<n;p++){
		printf("%d\n",a[p]);
	}	
	
	return 0;
}
void bubbleSort(int a[],int n)
{
	int j;
	int i;
	int temp;
	int flag;
	for (j=n;j>0;j--){      
		flag=0;
		for (i=0;i<n-1;i++)     
		{
			if (llabs(a[i]-m)>llabs(a[i+1]-m)){     
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				flag=1;
			}else if (llabs(a[i]-m)==llabs(a[i+1]-m)) {
				if (a[i]>a[i+1]){
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
							
				}else {
					a[i]=a[i];
					a[i+1]=a[i+1];
				}
				flag=1;
			}
		}
		if (flag==0)
		break;
	}					
}