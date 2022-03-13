#include<stdio.h>
#include<stdlib.h>
typedef long long ll;

ll myabs(ll a) {
	ll dex = 0;
	if (a >= 0) {
		dex = a;
	}
	else {
		dex = -a;
	}
	return dex;
}

int main() {
	ll n, m;
	scanf("%lld %lld", &n, &m);
	int i, j;
	ll num[n];
	for (i = 0; i < n; i++) {
		scanf("%lld", &num[i]);
	}
	for (i = 0; i < n-1; i++) {
		for(j = 0; j < n - i - 1; j++) {
			if (myabs(num[j] - m) > myabs(num[j + 1] - m)) {
				ll t = num[j];
				num[j] = num[j + 1];
				num[j + 1] = t;
			}
		}
	}
	for (j = 0; j < n-1; j++) {
		if (myabs(num[j] - m) == myabs(num[j + 1] - m)) {
			if (num[j] > num[j + 1]) {
				ll y = num[j];
				num[j] = num[j + 1];
				num[j + 1] = y;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%lld\n", num[i]);
	}
	return 0;
}