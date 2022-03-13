#include<stdio.h>
#include<string.h>
int max(int x[],int n,int m);
int main(){
    int n,i,j,m;
    int a[1001],temp;
scanf("%d %d",&n,&m);
for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
}
for(i = n; i>=1; i--)  {
j = max(a, i, m);
temp = a[j];
a[j] = a[i];
a[i] = temp;
}
for(i=1;i<=n;i++){
printf("%d\n",a[i]);}
return 0;}
int max(int x[], int n, int m) {
int i, j=1;
for(i=1; i<=n; i++){
if(abs(x[i]-m) >= abs(x[j]-m)){
if(abs(x[i]-m) == abs(x[j]-m)){
    if(x[i]>x[j])
    j=i;}
else
    j=i;

}}
return j;
}