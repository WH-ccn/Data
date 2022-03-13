/* 
 Author: ÕÅºÕÄÐ(43485)
 Result: WA	Submission_id: 3360213
 Created at: Thu Apr 08 2021 22:06:49 GMT+0800 (China Standard Time)
 Problem: 4334	Time: 11	Memory: 1716
*/

#include<stdio.h>

long long funabs(long long);

int main() {
    int n;
    long long m;
    scanf("%d%lld", &n, &m);
    long long a[1001], b[1001];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        b[i] = a[i];
        a[i] = funabs(a[i] - m);
        //printf("%d",a[i]);
    }

    long long i, j, hold, temp;
    

    for (int k = 0; k < n; k++) {
        if (a[k] == a[k + 1]) {
            if (b[k] > b[k + 1]) {
                temp = b[k];
                b[k] = b[k + 1];
                b[k + 1] = temp;
            }
        }
    }

    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
    }


    for (int k = 0; k < n; k++) {
        printf("%lld\n", b[k]);
    }


}

long long funabs(long long x) {
    if (x < 0)
        x = -x;
    return x;

}