#include <stdio.h>

int arr[1005];

long long l_abs(long long a) {
	if (a >= 0)
		return a;
	if (a < 0)
		return -a;
}

void bubbleSort(int a[], int n, int m) {
	int i, j, hold, flag;
	for (i = 0; i < n - 1; i++) {
		flag = 0; //记得初始化
		for (j = 0; j < n - 1 - i; j++) {
			if (l_abs(a[j] - m) > l_abs(a[j + 1] - m)) {
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
				flag = 1;
			}
			if (l_abs(a[j] - m) == l_abs(a[j + 1] - m)) {
				if (a[j] > a[j + 1]) {
					hold = a[j];
					a[j] = a[j + 1];
					a[j + 1] = hold;
					flag = 1;
				}
			}
		}
		if (flag == 0) {
			break;
		}
	}
}

int main() {
	int n, m, i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	bubbleSort(arr, n, m);
	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}