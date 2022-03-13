#include<stdio.h>

int n,k,maxn;
int t[100010];

int cmp(int a1,int a2){
	long long d1=(1ll*a1-k),d2=(1ll*a2-k);
	if(d1<0)d1=-d1;if(d2<0)d2=-d2;
	return d1==d2?a1<a2:d1<d2;
}

void ms(int *a,int l,int r){
	if(l==r)return;int mid=(l+r)>>1;
	ms(a,l,mid);ms(a,mid+1,r);
	int dq1=l,dq2=mid+1,dq=l;
	while(dq1<=mid || dq2<=r){
		int a1=dq1>mid?maxn:a[dq1];
		int a2=dq2>r?maxn:a[dq2];
		if(cmp(a1,a2))t[dq++]=a[dq1++];
		else t[dq++]=a[dq2++];
	}
	for(int i=l;i<=r;i++)a[i]=t[i];
}

int a[100010];

int main(){
	scanf("%d %d",&n,&k);maxn=k>=0?0x8000000:0x7fffffff;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}ms(a,1,n);
	for(int i=1;i<=n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}