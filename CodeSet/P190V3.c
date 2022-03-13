#include <stdio.h>
#include <math.h>

int array1[10000];
long long array2[10000];

void ichange2(long long  *a, long long *b) {
	long long temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void ichange1(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n, m, i;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &array1[i]);
	}

	for (i = 0; i < n; i++) {
		array2[i] = labs(array1[i] - m);
	}

	int j, flag;
	for (i = 0; i < n - 1; i++) {
		flag = 0;
		for (j = i + 1; j < n; j++) {
			if (array2[i] > array2[j] || (   (  array2[i] == array2[j]  )  &&   (array1[i] > array1[j])) )  {
				ichange2(&array2[i], &array2[j]);
				ichange1(&array1[i], &array1[j]);
				flag = 1;
			}
		}
		if (!flag)
			break;

	}

	for (i = 0; i < n; i++) {
		printf("%d\n", array1[i]);
	}
	return 0;
}