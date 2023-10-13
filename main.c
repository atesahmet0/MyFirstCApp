/*
 * This application is completely written by Ates(Myself)
 * This is mine first C application ever in my life
 * I want to store this as a memory for myself
 * It may not be valuable for me but i believe that for future myself it would mean a lot.
 *
 * Selam gelecekteki ben!
 */

#include <stdio.h>

/*
 * Declare the function that calculates factorial by recursion.
 */
long factorial(long);

/*
 * This function gets a long value from user and returns it.
 * Returns -1 if something goes wrong
 */
long getLong();

int main() {
    while(1){
        printf("\n\n\nGive an integer to calculate it's factorial: ");
        long intToCalculate = getLong();
        printf("\nOutput is: %lu", factorial(intToCalculate));
    }
    return 0;
}

/*
 * Defining the factorial function
 * Example -> 9! = 9*8!
 * So we are using n-1's factorial to calculate n's factorial till n-1 equals to 1.
 * 1! = 1 by definition
 *
 * This function can calculate up to 65 as initial value
 */
long factorial(long initial){
    /*
     * We are checking that our initial value is proper(initial value has to be a positive number or 0)
     * if not we return 0
     */

    if(initial < 0) return 0;

    /*
     * And now we have a value to work on.
     * If our initial value is 0 or 1 then it's factorial equals 1 by definition.
     * If our initial value is > 1 than we simplfy it by using formula: n! = n*(n-1).
     */
    if(initial <= 1) return 1;
    else return factorial(initial -1 )*initial;
}

/*
 * This function allows me to get a long value as input
 */
long getLong(){
    long tmp;
    scanf("%lu", &tmp);
    return tmp;
}

