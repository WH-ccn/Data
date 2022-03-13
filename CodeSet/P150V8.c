#include<stdio.h>
#include<math.h> 
#include<stdlib.h>
#include<ctype.h>
int m,n;
int a[1200];
int i;
int cmp(void *a,void *b){
	int a1=*(int *)a;
	int b1=*(int *)b;
	
	if(abs(a1-m)>abs(b1-m)){
		return 1;
	}else if(abs(a1-m)<abs(b1-m)){
		return -1;
	}else {
		if(a1>b1){
			return 1;
		}else return -1;
	}
}
int main()
{
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),cmp);
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}