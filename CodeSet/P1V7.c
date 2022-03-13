/*
 Author: ��˳��(43246)
 Result: WA	Submission_id: 3360003
 Created at: Thu Apr 08 2021 21:32:00 GMT+0800 (China Standard Time)
 Problem: 4334	Time: 25	Memory: 1708
*/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>

long long judge(long long a, long long b) {
    long long c;
    if (a < b)c = b - a;
    else c = a - b;
    return c;
}

long long a[2000];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++) {
            if (judge(a[j], m) > judge(a[j + 1], m)) {
                long long mi;
                mi = a[j];
                a[j] = a[j + 1];
                a[j + 1] = mi;
            }
        }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++) {
            if (judge(a[j], m) == judge(a[j + 1], m) && a[j] > a[j + 1]) {
                long long mi;
                mi = a[j];
                a[j] = a[j + 1];
                a[j + 1] = mi;
            }
        }


    for (int i = 0; i < n; i++) {
        printf("%lld\n", a[i]);
    }
}