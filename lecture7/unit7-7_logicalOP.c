#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <iso646.h>

#define PERIOD '.'

int main(void){


    /*
        Logical operators
        && : and
        || : or
        ! : not
    */

//    bool test1 = 3 > 2 || 5 > 6; // true
//    bool test2 = 3 > 2 && 5 > 6; // false
//    bool test3 = !(5>6); //true, equivalent to 5 <= 6

//    printf("%d %d %d\n", test1, test2, test3);

   bool test1 = 3 > 2 or 5 > 6; // true
   bool test2 = 3 > 2 and 5 > 6; // false
   bool test3 = not(5>6); //true, equivalent to 5 <= 6

   printf("%d %d %d\n", test1, test2, test3);

   /* Character counting example */
   char ch;
   int count = 0;

   while ((ch = getchar()) != PERIOD){
       if (ch != '\n' && ch != ' ')
            count++;
   }

   printf("%d\n", count);

    /* 
        Short-circuit Evaluation
        - Logical expressions are evaluated from left to right
        - && and || are sequence points
    */

    int temp = (1+2) * (3+4);

    printf("Before : %d\n", temp);

    if (temp==0 && (++temp == 1024)){

    };
    printf("After : %d\n", temp);


    int x = 1, y = 2;
    if (x++ > 0 && x+y == 4)
        printf("%d %d\n", x,y);


    for (char c=0; c<127; c++){
        if(islower(c))
            printf("%c", c);
    }
    return 0;
}