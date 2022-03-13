#include<stdio.h>
long long a[100000];
int n, m;
long long abs(long long x) {
    return x > 0 ? x : -x;
}
int main() {
    int i, j;
    long long temp;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (abs(a[i] - m) > abs(a[j] - m)) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if (abs(a[i] - m) == abs(a[j] - m) && a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%lld\n", a[i]);
    }
    return 0;
}