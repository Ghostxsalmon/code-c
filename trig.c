#include <stdio.h> 
#include <math.h>

// These will not come out to whole numbers, I will need to use decimals so i will need float not int.
float hypotenuse();
float adjacent();
float opposite();
int ratio();


int main(void){
    int choice = ratio();
    
    if (choice == 1){
        printf("You have chosen sin\n");
    }
    else if (choice == 2){
        printf("You have chosen cos\n");
    }
    else {
        printf("You have chosen tan\n");
    }




    if (choice == 1) {
        printf ("%f\n", opposite() / hypotenuse());  
    }
    else if (choice == 2) {
        printf ("%f\n", adjacent() / hypotenuse());
    }
    else {
        printf ("%f\n", opposite() / adjacent() );
    }

    return 0;
}

int ratio(){ // char might seem more obvious but it is harder to manage memory so stick with int for now
    int trig;
    printf("What are you atttempting?\n\n 1 for sin\n 2 for cos\n 3 for tan\n\n");
    scanf("%d", &trig);
    return trig;
}

float hypotenuse(){
    float h;
    printf("what is the Hypotenuse?\n");
    scanf("%f", &h);
    return h;
}

float adjacent(){
    float a;
    printf("what is the adjacent?\n");
    scanf("%f", &a);
    return a;
}

float opposite(){
    float o;
    printf("what is the opposite?\n");
    scanf("%f", &o);
    return o;
}

