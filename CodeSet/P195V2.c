#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
ll n, m;
ll arr[1005];
ll l_abs(ll num)
{
 if (num < 0)num = -num;
 return num;
}
int main(void) {
 scanf("%lld%lld", &n, &m);
 for (int i = 0; i < n; i++)
 scanf("%lld", &arr[i]);
 for (int i = 0; i < n - 1; i++)
 {
 int flag = 0;
 for (int j = 0; j < n - i - 1; j++) {
 ll dis1 = l_abs(arr[j] - m);
 ll dis2 = l_abs(arr[j + 1] - m);
 if ((dis1 > dis2) || (dis1 == dis2 && arr[j] > arr[j + 1]))
 {
 flag = 1;
 ll temp = arr[j];
 arr[j] = arr[j + 1];
 arr[j + 1] = temp;
 }
 }
 if (!flag)break;
 }
 for (int i = 0; i < n; i++)printf("%lld\n", arr[i]);
 return 0;
}