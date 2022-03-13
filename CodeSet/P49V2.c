#include<stdio.h>
#include<math.h>
int main()
{
  long long hold,a[1005]={0};
  int n,m;
  scanf("%d%d",&n,&m);
  for(int i = 0; i < n;i++){
   scanf("%lld",&a[i]);
  }
  for(int i = 0;i < n-1;i++){
  for(int j = 0;j < n - 1 - i;j++){
    if(llabs(a[j]-m)>llabs(a[j+1]-m)){
      hold = a[j];
      a[j] = a[j + 1];
      a[j + 1]= hold;
    }
  else if(llabs(a[j]-m)==llabs(a[j+1]-m)){
       if(a[j]>a[j+1]){
        hold = a[j];
      a[j] = a[j + 1];
      a[j + 1]= hold;
       }
  }
}
  }
  for(int i = 0;i < n;i++){
    printf("%lld\n",a[i]);
  }
}