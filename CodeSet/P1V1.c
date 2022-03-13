#include <stdio.h>

int array[1001];

void Swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

long long labs(long long temp) {
    if (temp < 0) {
        return temp * -1;
    } else {
        return temp;
    }
}

int main() {
    int p, flag, i, N, m;
    long long dist1, dist2;
    scanf("%d%d", &N, &m);
    p = N;
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    while (p--) {
        for (i = 0; i < p; i++) {
            dist1 = labs(array[i] - m);
            dist2 = labs(array[i + 1] - m);
            if (dist1 > dist2 || (dist1 == dist2 && array[i] > array[i + 1])) {
                Swap(&array[i], &array[i + 1]);
            }
        }
    }
    for (int j = 0; j < N; ++j) {
        printf("%d\n", array[j]);
    }
}