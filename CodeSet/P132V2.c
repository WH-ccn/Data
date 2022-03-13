#include<stdio.h>
#include<string.h>
#include<ctype.h> 
#include<math.h>
#include<stdlib.h>
/*#define N (int)1e8
struct num
{
	int a;
	int b;
};
struct num peach[N+10];
int cmp_down(const void* p1, const void* p2);
int main()
{
	int m,n,num_panzi=0,a,b,count=0,i;
	unsigned long long sum=0;
	scanf("%d%d",&m,&n);
	while(~scanf("%d%d",&a,&b))
	{
		peach[num_panzi].a=a;
		peach[num_panzi].b=b;
		num_panzi++;
	}
	qsort(peach,num_panzi, sizeof(struct num), cmp_down);
	
		for(int j=0;j<num_panzi;j++)   //控制盘子，即桃子的种类 ,对于每一种桃子 
		{     //开吃
		     
			 while(peach[j].b>0&&count<m) 
			  {
		       peach[j].b--;       //桃子数减一 
			   i++;                //记录吃掉桃子的总数 
		       sum+=peach[j].a;   //分数累计； 
	           count++;          //记录每个盘子中被吃桃子的个数，对于每一种桃子，最多吃m个 
	         }
	         count=0;
	         if(i>m*n)      
	         {
	         	break;
			 }
	         
		} 
	
	printf("%lld",sum%100007);
}
int cmp_down(const void* p1, const void* p2)
{
	struct num *x1=(struct num*)p1;
	struct num *x2=(struct num*)p2;
	if(x1->a<x2->a)
	{
		return 1;
	}
	else if(x1->a>x2->a)
	{
		return -1;
	}
	else return 0;
}*/ 


void bubble(long long [],int ,int );
long long abs_l(long long );

int main()

{
	int n,m;
	long long a[1005]={0};
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	bubble(a,n,m);
	for(int i=0;i<n;i++)
    {
		printf("%lld\n",a[i]); 
	}
	return 0;
}

void bubble(long long b[],int n,int m)
{
	
	long long  hold;
	for(int i=0;i<n-1;i++)
	{
	  
	  for(int j=0;j<n-i-1;j++)
	  {
	     if(abs_l(b[j]-m)>abs_l(b[j+1]-m))
	     {
		   hold=b[j];
		   b[j]=b[j+1];
		   b[j+1]=hold;
	     }
	     else if(abs_l(b[j]-m)==abs_l(b[j+1]-m))
	     {
	     	  if(b[j]>b[j+1])
	     	  {
	     	  	 hold=b[j];
		         b[j]=b[j+1];
		         b[j+1]=hold;
			   }
		 }
	  
	  }
   }
}

long long abs_l(long long a)
{
    return (a>0?a:-a);
}