#include<stdio.h>
#include<stdlib.h>
int a[1001]={0};
int abs(int);
void bubblesuper(int a[1001], int n,int m);
int main()
{
	int n,i,m;
	
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=0;i<n;i++)
		 scanf("%d",&a[i]);
		 
		bubblesuper(a,n,m); 
		
		for(i=0;i<n;i++)
	 printf("%d\n",a[i]);
	}	
	return 0;
} 

void bubblesuper(int a[1001], int n,int m)
{
  int i, j,flag, hold,x,y;
  for (i = 0; i < n-1; i++)
  {
    flag = 0;
    for (j = 0; j < n-1-i; j++)
    {
    	x=abs(a[j]-m);
    	y=abs(a[j+1]-m);
    	if(x>y){
    	 hold = a[j];
         a[j] = a[j + 1];
         a[j + 1] = hold;
         flag = 1;
		}
		if(x==y)
		{
        if (a[j] > a[j + 1])
        {
         hold = a[j];
         a[j] = a[j + 1];
         a[j + 1] = hold;
         flag = 1;
        }
		} 
    }
    if (0 == flag)
      break; 
 } 
}