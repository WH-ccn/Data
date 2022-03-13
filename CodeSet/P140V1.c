#include<stdio.h>
#include<stdlib.h>
int cmp(const void* p1, const void* p2) ;
int m;
int main()
{
	int n,i,a[1005]={0};
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	qsort(a , n, sizeof(a[0]), cmp);
	for(i=0;i<n;i++){
		
		printf("%d\n",a[i]);
	}
	
	
	return 0;
}

int cmp(const void* p1, const void* p2) 
{
	int* a = (int*)p1, * b = (int*)p2;

	long long int x1 = llabs((long long)(* a) -m);//niu
	long long int x2 = llabs((long long)(* b) -m);
//	long long ans = x1-x2;可能超 
	
	
	if (x1 < x2)return -1;//a要排在b前面时，返回负数值
	else if (x1 > x2) return 1;//a要排在b后面时，返回正数值
	else{
		if (* a < * b)return -1;
	else if (* a > * b) return 1;
	else return 0;//不需要变动时，返回0
	}
	
}