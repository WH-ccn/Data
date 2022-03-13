//#include <stdio.h>
//double a[1006] = { 0 };
//void bubbleSort(double a[], int n);
//void bubbleSort(double a[], int n) {
//    int i, j;
//    double flag;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n - 1 - i; j++) {
//            if (a[j] > a[j + 1]) {
//                flag = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = flag;
//            }
//        }
//    }
//}
//int main() {
//	int n;
//	int k = 0;
//	scanf("%d", &n);
//	while (n) {
//		scanf("%lf", &a[k]);
//		k++;
//		n--;
//	}
//    bubbleSort(a, k);
//    for (int h = 0; h < k; h++) {
//        printf("%.5f\n", a[h]);
//    }
//	return 0;
//}



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
	long long hold,bb;
	k = k2;
	for (i = 0; i < k-1; i++) {
		for (int j = 0; j < k-1 - i; j++) {
			if (arr2[i] >arr2[i + 1]|| arr2[i] == arr2[i + 1]&& arr[i] > arr[i + 1]) {
				hold = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = hold;
				bb = arr2[i];
				arr2[i] = arr2[i + 1];
				arr2[i + 1] = bb;
			}
		}
	}
	for (i = 0; i < k - 1; i++) {
		for (int j = 0; j < k - 1 - i; j++) {
			if (arr2[i] > arr2[i + 1] || arr2[i] == arr2[i + 1] && arr[i] > arr[i + 1]) {
				hold = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = hold;
				bb = arr2[i];
				arr2[i] = arr2[i + 1];
				arr2[i + 1] = bb;
			}
		}
	}
	for (i = 0; i < k2; i++) {
		printf("%lld\n", arr[i]);
	}
	return 0;
}



//#include <stdio.h>
//int main() {
//
//
//
//	return 0;
//}