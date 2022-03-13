#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int a[],int b[], int n);

int main()
{
	int n, m,i=0,j;
	int b[1010],a[1010];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		j=b[i]-m;
		a[i]=abs(j);
	}
	bubbleSort(a,b,n);
	for(i=0;i<n;i++){
		printf("%d\n",b[i]);
	}
	return 0;
}

void bubbleSort(int a[],int b[], int n) 
{
     int i, j, hold;
     for( i = 0; i < n-1; i++){
     for(j = 0; j < n-1-i; j++){
     if(a[j] > a[j+1]){
        hold = b[j];
        b[j] = b[j+1];
        b[j+1] = hold;
        }
	 else if(a[j]=a[j+1]&&b[j]>b[j+1]){
	 	hold = b[j];
        b[j] = b[j+1];
        b[j+1] = hold;
	 }  
	}
}
}