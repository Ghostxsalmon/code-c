
/* Warhammer 40k Casualty Tracker

- A fixed number of marines (just variables, no arrays)
- Each marine has a wounds variable
- A loop simulates rounds of combat
- Each round rolls a dice (rand()) and reduces wounds
- At the end, print who survived and who died

*/

#include <stdio.h> // primary library, will always need
#include <stdlib.h> // general utilites like rand
#include <time.h> // time functions for creating the seed for rand
#include <string.h> // string handling
#include <unistd.h> // posix functions like sleep

int apply_damage();
int scene();


int main(){
    srand(time(NULL));
    int marine_wounds = 10;
    marine_wounds = marine_wounds - scene(); // variable does not use () if you are calling the function then use ()
    printf("%d points worth of life has been taken from you captain. I will summon the apothecary.\n", marine_wounds);
    return 0;
}

int apply_damage(){
    int damage = rand() %6 + 1;
    return damage;
}

int scene(){
    char answer [10]; 
    printf("Are you ready to embark Captain?\n");
    scanf("%s", answer);

    if (strcmp(answer, "yes") == 0)
    printf("good, lets move out.");


    else{
        printf("Let me know when you are ready to depart Captain.\n"); // notice the != it means the inverse, aslong as the answer does not equal yes, repeat the loop. this way "maybe", "idk", "__", doesn't break the loop!
        sleep(2);
        while (strcmp(answer, "yes") != 0){ 
            printf("Are you ready to depart now captain, the chapter master won't want to keep waiting for us.\n");
            scanf("%s", answer);
        }
        printf("good, lets move out.");
    }
    printf("AArrahah, My lord, you're attacked by a tyrranid and are injured!\n");
    int damage_taken = apply_damage();
    return damage_taken;
}


