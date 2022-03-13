#include <stdio.h>
#include <string.h>
long long arr[1005] = { 0 };
long long arr2[1005] = { 0 };
int main() {
	long long n, a;
	int i = 0;
	scanf("%lld%lld", &n, &a);
	while (n) {
		scanf("%lld", &arr[i]);
		i++;
		n--;
	}
	int k = i;
	int k2 = i;
	memcpy(arr2, arr, sizeof(arr));
	i = 0;
	while (k) {
		arr2[i] = arr2[i] - a;
		k--;
		i++;
	}
	k = k2;
	i = 0;
	while (k) {
		if (arr2[i]<0) {
			arr2[i] = -arr2[i];
		}
		k--;
		i++;

	}
	long long hold;
	k = k2;
	for (i = 0; i < k-1; i++) {
		for (int j = 0; j < k-1 - i; j++) {
			if (arr2[j] >arr2[j+ 1]|| (arr2[j] == arr2[j+ 1]&& arr[j] > arr[j+ 1])) {
				hold = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = hold;
				hold = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] =hold;
			}
		}
	}
	for (i = 0; i < k2; i++) {
		printf("%lld\n", arr[i]);
	}
	return 0;
}