#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
int sum(){
    int i, sum=0;
    for(i=1; i<=100; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int a = sum();
    printf("The sum is %d\n", a);
    return 0;
}void hello(){
    printf ("Hello,world \n");
  
}
long long m;
long long longlabs(long long a)
{
    if(a>0)
        return a;
    else
        return -a;
}
int sort(const void* _a, const void* _b)
{
    long long* a = (long long *)_a;
    long long* b = (long long *)_b;
    if (longlabs(*a - m) < longlabs(*b - m))
        return -1;
    else if(longlabs(*a - m) == longlabs(*b - m)){
        if(*a < *b)
            return -1;
        else
            return 1;
    }
    else
        return 1;
}

int main()
{
    long long n = 0;
    scanf("%lld%lld", &n,&m);
    long long* list = malloc(n*sizeof(long long));
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", list + i);
    }
    qsort(list, n, sizeof(long long), sort);
    for (long long i = 0; i < n; i++)
    {
        printf("%lld\n", list[i]);
    }
}