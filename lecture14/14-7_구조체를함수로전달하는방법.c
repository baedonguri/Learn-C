#include <stdio.h>
#include <string.h>
#define FUNDLEN 50

struct fortune
{
    char bank_name[FUNDLEN];
    double bank_saving;
    char fund_name[FUNDLEN];
    double fund_invest;
};

// double sum(double* x, double* y);
// double sum(struct fortune my_fortune);
double sum(const struct fortune *mf);

int main(){
    struct fortune my_fortune = {
        "Wells-Fargo",
        4032.27,
        "JPMorgan Chase",
        8543.94
    };
    // printf("Total : $%.2f.\n", sum(&my_fortune.bank_saving, &my_fortune.fund_invest));
    // printf("Total : $%.2f.\n", sum(my_fortune));
    printf("Total : $%.2f.\n", sum(&my_fortune));


    return 0;

}
// double sum(double* x, double* y){
//     return *x + *y;
// }


// double sum(struct fortune my_fortune){
//     return my_fortune.bank_saving + my_fortune.fund_invest;
// }


double sum(const struct fortune *mf){
    return mf->bank_saving + mf->fund_invest;
}