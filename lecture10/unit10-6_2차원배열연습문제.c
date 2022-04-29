#include <stdio.h>

#define TIME 22
#define YEAR 3
int main(void){

        double temp_data[YEAR][TIME] = {
        {2.1,2.0,2.3,1.3,1.5,0.7,-1.6,1.6,2.8,5.1,6.3,8.2,7.9,8.0,8.0,7.2,6.8,6.0,5.4,5.6,5.2,5.0},
        {1.7,1.4,1.4,1.0,0.8,0.7,0.4,1.1,3.7,5.5,6.0,5.9,6.9,8.0,7.4,7.1,6.3,5.7,4.8,4.6,4.9,4.9},
        {3.4,4.3,1.4,1.0,0.3,0.7,0.4,2.1,4.7,5.5,6.0,4.9,8.9,8.0,7.4,2.1,5.4,6.1,5.1,7.1,3.0,2.9}

    };

    
    printf("[Temperature Data]\n");
    printf("Time index :");
    for (int i=0; i < TIME; i++){
        printf("%5d", i+1);
    }
    printf("\n");
    
    for (int i=0; i<YEAR; i++){
        printf("Year %d\t :", i);
        for (int j=0; j<TIME; j++){
            printf("%5.1f", temp_data[i][j]);
        }
        printf("\n");
    }


    return 0;
}