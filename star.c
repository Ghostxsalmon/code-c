#include <stdalign.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
/*
  Warhammer odds of heresy calculator

  create an enum template for an astartes

  create an enum array for different Squads

  calculate out squad
 */

// Need to add TIME!!!


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


// Main function
int main (void){
   struct ship tracked_fleet = {0}; //initalize to 0
   float travel_days;
   float travel_time;
   float heading_deg;
   float pitch_deg;
   double distance;


   intro(); // Conversation starter
   tracked_fleet.weight = menu(); // I get my weight listed in main as a working variable.

   //Questions
   printf("\nWhat is your speed in km/s?\n ");
   scanf("%f", &tracked_fleet.speed);

   printf("\nWhat is your position X?\n ");
   scanf("%f", &tracked_fleet.pos.x);

   printf("\nWhat is your position Y?\n ");
   scanf("%f", &tracked_fleet.pos.y);

   printf("\nWhat is your position Z\n ");
   scanf("%f", &tracked_fleet.pos.z);




   printf("\nHow many days will the ship travel for?\n ");
   scanf("%f", &travel_days);

   travel_time = travel_days * 86400;


   printf("\nWhat is your heading? (what angle)\n ");
   scanf("%f", &heading_deg);

   printf("\nWhat is your pitch? (what angle)\n ");
   scanf("%f", &pitch_deg);



   // Heading and pitch math
   distance = tracked_fleet.speed * travel_time;

   double rad = heading_deg * M_PI / 180.0;
   double pitch_rad = pitch_deg * M_PI / 180.0;

   double dz = distance * sin(pitch_rad);

   double horizontal = distance * cos(pitch_rad);

   double dx = horizontal * sin(rad);

   double dy = horizontal * cos(rad);



   tracked_fleet.pos.x += dx;

   tracked_fleet.pos.y += dy;

   tracked_fleet.pos.z += dz;



   printf("\nNew position: X=%.2f Y=%.2f Z=%.2f\n\n", tracked_fleet.pos.x, tracked_fleet.pos.y, tracked_fleet.pos.z);
   printf("Remember your weight of %f megatonnes, some imperial zones may be off limits for your stated weight class. \n\n", tracked_fleet.weight);

    return 0;
}



// Intro begins and does conversation
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





//Menu begins and gets my weight using the enum.
int menu (void) {

int size;
printf("What is your ship size?\nPress 1 for Frigate\nPress 2 for Cruiser\nPress 3 for Battle Barge\nPress 4 for Battle Ship\n\n");
scanf("%d", &size);
sleep(1);

if(size == 1){
    printf("Frigate selected");
    enum ship_weight opt = FRIGATE;
    return opt;
}

else if(size == 2){
    printf("Cruiser selected");
     enum ship_weight opt = CRUISER;
     return opt;
}

else if(size == 3){
    printf("Battle Barge selected");
     enum ship_weight opt = BATTLE_BARGE;
     return opt;
}
else{
    printf("Battle Ship selected");
     enum ship_weight opt = BATTLE_SHIP;
     return opt;
}


}
