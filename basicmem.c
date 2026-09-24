#include <stdalign.h>
#include <stdio.h>
#include <unistd.h>
/*
  Warhammer odds of heresy calculator

  create an enum template for an astartes

  create an enum array for different Squads

  calculate out squad
 */

int intro (void);
int menu (void);

struct position {
    float x;
    float y;
    float z;
};

struct ship {
    struct position pos;
    float weight;
    float speed;
};


enum ship_weight { FRIGATE = 6, CRUISER =  28, BATTLE_BARGE = 100, BATTLE_SHIP = 300
// Weights are listed in megatonnes, not pounds!
};



int main (void){


    intro(); // Conversation starter
   int option = menu(); // I get my weight listed in main as a working variable.






    return 0;
}


int intro (void){


    printf("Imperial Track estimation Service...\n");
    sleep(1);
    printf("Error 312Fe26\n");
    for(int e = 0; e < 3; e++) {
    printf("Module Failure E16272\n");
    sleep(1);
    printf("Module Failure E72339\n");
    sleep(1);
    printf("Module Failure E53237\n");
    sleep(1);
    printf("Module Failure E23333\n");
    sleep(1);
    printf("Module Failure E92870\n");
    sleep(1);
    printf("Module Failure E49920\n");
    sleep(1);
    printf("reattempting\n");
    sleep(2);
    printf("5\n");
    sleep(1);
    printf("4\n");
    sleep(1);
    printf("3\n");
    sleep(1);
    printf("2\n");
    sleep(1);
    printf("1\n");
    }
    printf("Error unrecoverable, Contact Mechanicus operations immediately.\n");
    sleep(2);
    printf("Manual entry required.\n");


    return 0;

}


int menu (void) {

int size;
printf("What is your curiser size?\nPress 1 for Frigate\nPress 2 for Cruiser\nPress 3 for Battle Barge\nPress 4 for Battle Ship\n\n");
scanf("%d", &size);
sleep(1);

if(size == 1){
    printf("Frigate slected");
    enum ship_weight opt = FRIGATE;
    return opt;
}

else if(size == 2){
    printf("Cruiser slected");
     enum ship_weight opt = CRUISER;
     return opt;
}

else if(size == 3){
    printf("Battle Barge slected");
     enum ship_weight opt = BATTLE_BARGE;
     return opt;
}
else{
    printf("Battle Ship selected");
     enum ship_weight opt = BATTLE_SHIP;
     return opt;
}


}
