#include<stdio.h>
#include<stdlib.h>
int row,sta,tim,swt;
int main()
{
	scanf("%d %d",&row,&sta);
	long num[row];
	for(int i=0;i<row;i++)
	{
		scanf("%ld",&num[i]);
	}
	do 
	{
		tim=0;
		for (int s=0;s<row-1;s++)
		{
			if(abs(num[s]-sta)>abs(num[s+1]-sta))
			{
				swt=num[s+1];
				num[s+1]=num[s];
				num[s]=swt;
				tim+=1;
			}
			else if(abs(num[s]-sta)==abs(num[s+1]-sta))
			{
					if(num[s]>num[s+1])
				{
					swt=num[s+1];
					num[s+1]=num[s];
					num[s]=swt;
					tim+=1;
				}
			}
			
			
			
		}
	}
	while(tim>0);
	
	
			

	
	
	for(int f=0;f<row;f++)
	{
		printf("%ld\n",num[f]);
	}
	return 0;
}