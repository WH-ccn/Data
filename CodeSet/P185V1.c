#include<stdio.h>
#include<stdlib.h>
int abs(int c);
int cmp(const void *num1,const void *num2); 
int a[1002][2];
int main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i][0]);
		a[i][1]=abs(a[i][0]-m);
	}qsort(a,n,sizeof(a[0]),cmp);
	for(i=0;i<n;i++){
		printf("%d\n",a[i][0]);
	}return 0;
}
int abs(int c){
	if(c>=0) return c;
	if(c<0)  return -c;
}
int cmp(const void *num1,const void *num2){
	int *p1=(int*)num1;
	int *p2=(int*)num2;
	if(p1[1]<p2[1]) return -1;
	else if(p1[1]>p2[1]) return 1;
	else if(p1[1]==p2[1]){
		if(p1[0]<p2[0]) return -1;
		else if(p1[0]>p2[0]) return 1;
		else return 0;
	}
}