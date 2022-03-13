#include <stdio.h>
long long mk(long long , long long );
void bubbleSort(long long a[],long long n,long long m);
int main()
{   long long  n, m;
    scanf("%lld%lld",&n,&m);
	long long  a[1010];
	int i;
	for(i=0;i<n;i++) scanf("%lld",&a[i]);
	bubbleSort(a,n,m);
	for(i=0;i<n;i++) printf("%lld\n",a[i]);
	return 0;
}

long long mk(long long  a, long long  b){
	long long c;
	c=a-b;
	if(c>=0) return c;
	else return -c;
}

void bubbleSort(long long a[], long long n, long long m) 
{
    int i, j, flag;
	long long hold;
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