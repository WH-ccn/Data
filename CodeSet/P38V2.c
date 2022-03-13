#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ 
	int n,m;
     int a[1001]; 
      
      int i, j;
	  int temp,t; 
 for (i = 0; i < 1001; i++) 
 a[i]=0;
      scanf("%d %d",&n,&m);
      
      for (i = 0; i < n; i++) 
            scanf("%d", &a[i]); 
 
     
      for (i = 0; i < n-1; i++) 
      { 
            for (j = 0; j < n-1 - i; j++) {
			
            int x,y,o;
            x=abs(a[j]-m);
            y=abs(a[j+1]-m);
            o=abs(x-y);
            if (x > y) 
            { 
                  temp = a[j]; 
                  a[j] = a[j+1]; 
                  a[j+1] = temp; 
            } if(o<1e-6){
            	if (a[j] > a[j+1]) 
            { 
                  t = a[j]; 
                  a[j] = a[j+1]; 
                  a[j+1] = t; 
            } 
			}
      }} 
  
    
      for (i = 0; i < n; i++) 
            printf("%d\n", a[i]); 
    
      return 0; 
  }