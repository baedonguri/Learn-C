#include <stdio.h>


int main(void){

    const double speed = 1.0;
    const unsigned repeat_max = 100;

    double time = 0.0;
    double dist_arch = 0.0;
    double dist_turtle = 1.0;

    double speed_arch = 10.0;
    double speed_turtle = 0.001;
    double dt = 0.01;

    for (unsigned i=0; i < repeat_max; ++i){
        dist_arch += speed_arch * dt;
        dist_turtle += speed_turtle * dt;
        time += dt;

        printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n",time, dt, dist_arch, dist_turtle);

        dt *= 0.5;
    }

    return 0;
}