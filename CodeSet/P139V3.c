#include <stdio.h>
long long mk(int, int);
void bubbleSort(int a[],int n,int m);
int main()
{   int n, m;
    scanf("%d%d",&n,&m);
	int a[1010],i;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	bubbleSort(a,n,m);
	for(i=0;i<n;i++) printf("%d\n",a[i]);
	return 0;
}

long long mk(int a, int b){
	long long c;
	c=a-b;
	if(c>=0) return c;
	else return -c;
}

void bubbleSort(int a[], int n, int m) 
{
    int i, j, hold, flag;
    for(i = 0; i < n-1; i++){
       flag = 0;
    for( j = 0; j < n-1-i; j++){
    if(mk(a[j],m) > mk(a[j+1],m)||(mk(a[j],m)==mk(a[j+1],m)&&a[j]>a[j+1])){
            hold = a[j];
            a[j] = a[j+1];
            a[j+1] = hold;
            flag = 1; 
			}
		}
    if (0 == flag)
            break; 
        } 
}