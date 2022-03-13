#include<stdio.h>
#include<math.h>
int main()
{
  int hold,a[1005]={0};
  int n,m;
  scanf("%d%d",&n,&m);
  for(int i = 0; i < n;i++){
   scanf("%d",&a[i]);
  }
  for(int i = 0;i < n-1;i++){
  for(int j = 0;j < n - 1 - i;j++){
    if(abs(a[j]-m)>abs(m-a[j + 1])){
      hold = a[j];
      a[j] = a[j + 1];
      a[j + 1]= hold;
    }
  else if(abs(a[j]-m)==abs(m-a[j + 1])){
       if(a[j]>a[j+1]){
        hold = a[j];
      a[j] = a[j + 1];
      a[j + 1]= hold;
       }
  }
}
  }
  for(int i = 0;i < n;i++){
    printf("%d\n",a[i]);
  }
}