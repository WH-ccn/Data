#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,a[1005],i,j1,j2,hold,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       for(j1 = 0; j1 < n-1; j1++){
       for(j2 = 0; j2 < n-1-j1; j2++){
       if(abs(a[j2]-m)>abs(a[j2+1]-m)){
           hold = a[j2];
           a[j2] = a[j2+1];
           a[j2+1] = hold;
      }
      else if(abs(a[j2]-m)==abs(a[j2+1]-m)){
        if(a[j2]>a[j2+1]){
           hold = a[j2];
           a[j2] = a[j2+1];
           a[j2+1] = hold;
        }
      }
      }

}
 for(j=0;j<n;j++)
      {
          printf("%d\n",a[j]);
      }
      return 0;
}