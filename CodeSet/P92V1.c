#include <stdio.h>
int main()
void bubbleSort(int a[], int n, int m)

{
	scanf ("%d", &n);
	bubbleSort(int a[], int n);
	return 0;
}
 
void bubbleSort(int a[], int n, int m)
{
    int i, j, m, hold, flag;
    for(i = 0; i < n-1; i++){
       flag = 0;
       for( j = 0; j < n-1-i-m; j++)
          if(a[j] > a[j+1]){
              hold = a[j];
              a[j] = a[j+1];
              a[j+1] = hold;
              flag = 1;
          }
       if (0 == flag)
          break;
   }
}