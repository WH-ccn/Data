int main(){
	int n,m,i,j;
	long long temp,a[1000];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
//		printf("%lld",a[i]);
	}
	for(i=0;i<n-1;i++){
		if(abss(a[i+1]-m)<abss(a[i]-m)){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		}
		else if(abss(a[i]-m)==abss(a[i+1]-m)){
			if(a[i+1]<a[i]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=a[i];
			}
		}
	}

	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
}
long long abss(long long x){
	if(x>=0)
	return x;
	else if(x<0)
	return -x;
}