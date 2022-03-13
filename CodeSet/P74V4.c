#include <stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int m;
long long int myabs(int a, int b)
{
	long long result;
	if (a > 0 && b < 0) result = (long long)a - (long long)b;
	else if (a < 0 && b>0) result = -(long long)a + (long long)b;
	else if (a > b) result = (long long)a - (long long)b;
	else result = -(long long)a + (long long)b;
	return result;
}

int comp(const void* a, const void* b)//ug序排序，需在a>b时输出正值，a>b时输出负值
{
	const int* p = (int *)a;
	const int* q = (int *)b;
	if (*p - *q == 0) return 0;
	else if (myabs(*p,m) >myabs(*q, m)) return 1;
	else if (myabs(*p, m) ==myabs(*q ,m)&& *p > *q) return 1;
	else return -1;
}
int main()
{
	int n;
	int score[1002] ;
	scanf("%d %d", &n,&m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
	}
	qsort(score, n, sizeof(score[0]), comp);//lb：要比较的数组名（地址），k：要比较的数据的个数，sizeof: 每个数据的大小,comp ：用于判断谁大谁小的自定义函数
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", score[i]);
	}
	return 0;
}