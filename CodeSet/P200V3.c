#include <stdio.h>
int main() {
	long long int x, y;
	scanf("%lld%lld", &x, &y);
	long long int result = 0;
	while ((x > 0) && (y > 0)) {
		if (x > y) {
			result += (y * 4) * (x / y);
			x = x % y;
		} else if (x < y) {
			result += (x * 4) * (y / x);
			y = y % x;
		} else {
			result += x * 4;
			break;
		}
	}
	printf("%lld", result);
	return 0;
}