#include <stdio.h>
#include <float.h>
#include <ctype.h>



int main(void){

    float max = -FLT_MAX; // 매우 작은 값 넣기
    float min = FLT_MAX; // 매우 큰 값 넣기
    float sum = 0.0f;
    float input;
    int n = 0;



    while (scanf("%f", &input) == 1){
        if (input < 0.0f || input > 100.0f) continue;

        max = (max < input) ? input : max;
        min = (min > input) ? input : min;
        sum += input;

        n++;
    }

    if (n > 0)
        printf("min = %f, max = %f, avg = %f\n", min, max, sum/n);
    else
        printf("No inputs\n");

    return 0;
}