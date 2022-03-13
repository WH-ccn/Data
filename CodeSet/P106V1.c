#include<stdio.h>
long long absd(long long n);
int main()
{int hold,i,j,n,m;
long long a[1000]={0};
 scanf("%d %d",&n,&m);
 
 for (i=0;i<n;i++)
  { scanf("%lld",&a[i]);}
 
 for (i=0;i<n-1;i++)
  {for(j=0;j<n-1-i;j++)
  {if(absd(a[j]-m)>absd(a[j+1]-m))
    {hold=a[j];
     a[j]=a[j+1];
     a[j+1]=hold;
 }
 else if(absd(a[j]-m)==absd(a[j+1]-m))
       {if(a[j]>a[j+1]){hold=a[j];
     a[j]=a[j+1];
     a[j+1]=hold;
 }
 }
  }
 } 
 
 for (i=0;i<n;i++)
  { printf("%d\n",a[i]);}
 return 0;
 
}
long long absd(long long n)
{if(n>=0){n=n;}
 else{n=-n;}
 return n;
}