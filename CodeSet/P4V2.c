#include<stdio.h>
int a[100000], n, m;
int abs(int x) {
    return x > 0 ? x : -x;
}
int main() {
    int i, j, temp;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (abs(a[i] - m) > abs(a[j] - m)) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if (abs(a[i] - m) == abs(a[j] - m)) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}