#include<stdio.h>
#include<string.h>
long long max(long long x[],long long  n,long long m);
long long lbh(long long,long long);
int main(){
    long long n,i,j,m;
    long long a[1001],temp;
scanf("%lld %lld",&n,&m);
for(i=1;i<=n;i++){
    scanf("%lld",&a[i]);
}
for(i = n; i>=1; i--)  {
j = max(a, i, m);
temp = a[j];
a[j] = a[i];
a[i] = temp;
}
for(i=1;i<=n;i++){
printf("%lld\n",a[i]);}
return 0;}
long long max(long long x[], long long n, long long m) {
int i, j=1;
for(i=1; i<=n; i++){
if(lbh(x[i],m) >= lbh(x[j],m)){
if(lbh(x[i],m) == lbh(x[j],m)){
    if(x[i]>x[j])
    j=i;}
else
    j=i;

}}
return j;
}
long long lbh(long long a,long long x){

if((a-x)<0)
    return x-a;
else
    return a-x;