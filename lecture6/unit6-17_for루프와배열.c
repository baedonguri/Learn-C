#include <stdio.h>

#define SIZE 5

int main(void)
{
    /*  Motivation */
    // int i1 = 0;
    // int i2 = 1;
    // int i3 = 2;

    // printf("%d\n", i1);
    // printf("%d\n", i2);
    // printf("%d\n", i3);

    // int my_arr[SIZE];

    // prepare for array data
    // for (int i=0; i< SIZE; i++)
    //     my_arr[i] = i+1;

    // for (int i=0; i< SIZE; i++)
    //     printf("%d ", my_arr[i]);

    // return 0;

    int arr[SIZE];
    int sum = 0;

    printf("Enter 5 numbers : ");
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0; i < SIZE; i++){
        sum += arr[i];
    }


    printf("Sum = %d\n", sum);
    
}