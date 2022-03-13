#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
long long a[1005];
long long b[1005];
void bubbleSort(long n){
    long long i,j, hold, flag;
    for(i = 0; i < n-1; i++){
        flag = 0;
        for( j = 0; j < n-1-i; j++){
            if(b[j] > b[j+1]){
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
                hold = b[j];
                b[j] = b[j+1];
                b[j+1] = hold;
                flag = 1;
            }
            else if(b[j] == b[j+1]&&a[j]>a[j+1]){
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
                hold = b[j];
                b[j] = b[j+1];
                b[j+1] = hold;
                flag = 1;
            }
		}	
        if (flag == 0) break;
    }
}
long long g,m;
int main()
{
	int i;
    scanf("%lld%lld",&g,&m);
    for(i=0;i<g;i++){
    	scanf("%lld",&a[i]);
    	b[i]=a[i]-m;
    	if(b[i]<0) b[i]=-1*b[i];
	}
	bubbleSort(g);
	for(i=0;i<g;i++){
		printf("%lld\n",a[i]);
	}
    return 0;
}