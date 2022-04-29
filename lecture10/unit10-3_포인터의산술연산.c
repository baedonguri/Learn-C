#include <stdio.h>

int main()
{
    int* ptr = 0;

    printf("%p %lld\n", ptr, (long long)ptr);

    ptr ++;

    printf("%p %lld\n", ptr, (long long)ptr);

    double arr[10];
    double* ptr1 = &arr[3], * ptr2 = &arr[5];

    // ptr2 = ptr1 + ptr2; // Not working
    int i = ptr2 - ptr1;

    printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);


    return 0;
}