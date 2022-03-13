#include <stdio.h>
#include <stdlib.h>
#define MAXN 1001

long long int abst(long long int a, long long int b) {
	if (a > b) {
		return a - b;
	} else if (a == b) {
		return 0;
	} else {
		return b - a;
	}
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
			if (abst(a[i], m) > abst(a[j], m)) {
				long long int change = a[i];
				a[i] = a[j];
				a[j] = change;
			} else if (abst(a[i], m) == abst(a[j], m)) {
				if (a[i] > a[j]) {
					long long int change = a[i];
					a[i] = a[j];
					a[j] = change;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%lld\n", a[i]);
	}
	return 0;
}