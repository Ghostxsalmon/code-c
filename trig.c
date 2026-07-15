#include <stdio.h> 
#include <math.h>

// These will not come out to whole numbers, I will need to use decimals so i will need float not int.
float hypotenuse();
float adjacent();
float opposite();
int ratio();


int main(void){
    int choice = ratio();
    printf("you have chosen %d", choice);

    return 0;
}

int ratio(){ // char might seem more obvious but it is harder to manage memory so stick with int for now
    int trig;
    printf("What are you atttempting?\n\n 1 for sin\n 2 for cos\n 3 for tan\n\n");
    scanf("%d", &trig);
    return trig;
}

