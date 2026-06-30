
/* Warhammer 40k Casualty Tracker

- A fixed number of marines (just variables, no arrays)
- Each marine has a wounds variable
- A loop simulates rounds of combat
- Each round rolls a dice (rand()) and reduces wounds
- At the end, print who survived and who died

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int apply_damage();

int main(){
    srand(time(NULL));
    return 0;
}

int apply_damage(){
    int damage = rand() %6 + 1;
}