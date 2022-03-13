# include<stdio.h>
 #include<stdlib.h>
 void bubbleSort(int a[], int n, int m)
{
int i, j,  flag;
int hold;
for(i = 0; i < n-1; i++){
flag = 0;
for( j = 0; j < n-1-i; j++)
if(abs(a[j]-m) > abs(a[j+1]-m) || (abs(a[j]-m) == abs(a[j+1]-m) && a[j]>a[j+1])){
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
 	int n, i, m;
 	int a[1001];
 	scanf("%d %d", &n, &m);
 	for(i=0;i<n;i++)
 	scanf("%d", &a[i]);
 	bubbleSort(a, n, m);
 	for(i=0;i<n;i++)
 	printf("%d\n", a[i]);
	 return 0;
 }