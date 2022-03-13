#include<stdio.h>
long long int jue(long long int x)
{
	if(x<0){
		return -x;
	}
	return x;
}
void bubble(long long int b[], int n,long long int m)
{
int i, j; 
long long int hold;
for(i=0; i<n-1; i++)
for(j=0; j<n-1-i; j++)
if(jue(b[j]-m)>jue(b[j+1]-m))
{
hold = b[j];
b[j] = b[j+1];
b[j+1] = hold;
}
else if ((b[j]>b[j+1])&&(jue(b[j]-m)==jue(b[j+1]-m)))
{
hold = b[j];
b[j] = b[j+1];
b[j+1] = hold;
}
}

int main(){
    int n=0;
    long long int a[1010]={0},m=0;
    scanf("%d%lld",&n,&m);
    for(int i=0;i < n;i++){
		scanf("%lld",&a[i]);
	}
	bubble (a,n,m);
	for(int i=0;i < n;i++){
	printf("%lld\n",a[i]);
	}
	return 0;   
}