# include<stdio.h>
 #include<stdlib.h>
 long long fun(long long a){
 	return a>0? a: -a;
 }
 void bubbleSort(long long a[], int n, long long m)
{
int i, j,  flag;
int hold;
for(i = 0; i < n-1; i++){
flag = 0;
for( j = 0; j < n-1-i; j++)
if(fun(a[j]-m) > fun(a[j+1]-m) || (fun(a[j]-m) == fun(a[j+1]-m) && a[j]>a[j+1])){
hold = a[j];
a[j] = a[j+1];
a[j+1] = hold;
flag = 1;
}
if (0 == flag)
break;
}
}
 int main () {
 	int n, i;
 	long long a[1001], m;
 	scanf("%d %lld", &n, &m);
 	for(i=0;i<n;i++)
 	scanf("%lld", &a[i]);
 	bubbleSort(a, n, m);
 	for(i=0;i<n;i++)
 	printf("%lld\n", a[i]);
	 return 0;
 }