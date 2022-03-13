#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

#define S scanf
#define P printf
#define L long long
#define Sup 0x7fffffff
#define eps 1e-10 
typedef unsigned long long ull;
void bubbleSort(int a[], int n,int m);
int main(void){
	int number,m,i;
	int a[10100];
	S("%d%d",&number,&m);
	for(i=0;i<number;i++){
		S("%d",&a[i]);
	}
	bubbleSort(a, number, m);
	for(i=0;i<number;i++){
		P("%d\n",a[i]);
	}
	return 0;
} 
void bubbleSort(int a[], int n,int m)
{
	int i, j, hold, flag;
	for (i = 0; i < n-1; i++){
	flag = 0;
	for (j = 0; j < n-1-i; j++) {
	long long x1=(long long)a[j]-m;
	long long x2=(long long)a[j+1]-m;
	if (abs(x1)>abs(x2))
	{
	hold = a[j];
	a[j] = a[j + 1];
	a[j + 1] = hold;
	flag = 1; } 
	else if(abs(x1)==abs(x2)){
		if(a[j]>a[j+1]){
			hold = a[j];
			a[j] = a[j + 1];
			a[j + 1] = hold;
		}
		flag=1;
	}}
	if (0 == flag)
	break; } 
	}