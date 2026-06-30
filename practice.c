#include <stdio.h>

/*
 * TASK 1: fill in this function.
 * It should print every number from 'start' down to 'end' (inclusive)
 * using a WHILE loop.
 * The function returns nothing (void).
 */
void countdown(int start, int end) {
    int i = start;
    while(i >= end) {
    printf("%d\n", i);
    i--;
}

    // your code here

}

/*
 * TASK 2: fill in this function.
 * It should print every number from 'start' up to 'end' (inclusive)
 * stepping by 'step', using a FOR loop.
 */
void count_up_by(int start, int end, int step) {
    for(int i = start; i <= end; i = i + step)
    printf("%d\n", i);


    // your code here

}

/*
 * TASK 3: fill in main().
 * Declare three int variables at the top: a, b, c.
 * Assign them meaningful values (your choice).
 * Then call both functions above using your variables as arguments.
 * End with return 0.
 */


int main(void)
{
    int a = 10;
    int b = 5;
    int c = 1;

    countdown(a, b);


    a = 2;
    b = 20;
    c = 2;

    count_up_by(a, b, c);


    return 0;
}