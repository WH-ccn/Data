#include <stdio.h>
#include <stdlib.h>
int abs(int x);
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		a[i]=abs(a[i]);	
	}
int main()
 {
    int n;
    int a[1000], t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
            else continue;
        }
    }
    for (int i = 0; i < n; i++) printf("%.5d\n", a[i]);
    return 0;
}