#include <stdio.h>

long long int jdz(long long int a, long long int m) {
	if (a < m)
		return (m - a);
	else
		return (a - m);
}

int main() {
	long long int a[1001] = {0};
	long long int b[1001] = {0};
	int i, j;
	long long int hold, flag, ahold, m, n, t, aahold;
	scanf("%lld%lld", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%lld", &t);
		a[i] = t;
		b[i] = jdz(t, m);
	}
	for (i = 0; i < n - 1; i++) {
		flag = 0;
		for (j = 0; j < n - 1 - i; j++) {

			if (b[j] > b[j + 1]) {
				hold = b[j];
				b[j] = b[j + 1];
				b[j + 1] = hold;
				ahold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = ahold;
				flag = 1;
			} else if (b[j] == b[j + 1])
				if (a[j] > a[j + 1]) {
					aahold = a[j];
					a[j] = a[j + 1];
					a[j + 1] = aahold;
				}
			if (0 == flag)
				break;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%lld\n", a[i]);
	}
	return 0;
}