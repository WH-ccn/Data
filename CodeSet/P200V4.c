#include <stdio.h>
#include <stdlib.h>
#define MAXN 1001

long long int abst(long long int n) {
	if (n < 0) {
		return -n;
	}
	return n;
}
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	long long int a[MAXN];
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abst(a[i] - m) > abst(a[j] - m)) {
				long long int change = a[i];
				a[i] = a[j];
				a[j] = change;
			} else if (abst(a[i] - m) == abst(a[j] - m)) {
				if (a[i] > a[j]) {
					long long int change = a[i];
					a[i] = a[j];
					a[j] = change;
				}
			}//两个距离相等，小的在前。
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%lld\n", a[i]);
	}
	return 0;
}