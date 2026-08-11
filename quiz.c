#include <stdio.h>




// Prototypes
void questions(int given[]); // An array edits in realtime and doesnt require a return, so void is the correct pick here
int answer_array(int correct[], int given[], int size);


int main (void){

//  int correct [total array storage in item count, not bytes] = {answer for q1, answer for q2, answer for q3};
    int correct[10] = {3, 2, 1, 1, 2, 4, 1, 2, 2, 4};

//  
    int given[10];

    questions(given); // In function, its being called. drop [] and datatyoe
    int score =  answer_array(correct,given,10);

    // Block 0-3
    if (score <= 3){

        printf("\nYou stand before us a heretic! You shall serve as a Servitor!\n");
    }

    // Block 4-6
    else if (score > 3 && score < 7){

        printf("\nYou passed, you will recieve your onboarding paperwork soon.\n");
    }

    // Block 7-9
    else if (score > 6 && score < 10){

        printf("\n You are well read and will be reached out to by an instructor.\n");

    }

    // else must mean 10
    else {
        printf("a 10 out of 10, very suspicous for a common child, you will meet with the Inquisition.\n");
    }
}



// The test
void questions(int given[]){
// We already have the bare bones of the loop from answer_array()
    

    printf("Welcome to your Schola Progenium aptitude test, this will help up determine your fate in the imperium of man.\n");
    printf("Each question will have four possible answers, please respond with only the number for that answer. for example 1\n");
    printf("Expected scoring is at least 4/10, 7/10 will guarantee admission, scoring 10 will have special intrest taken in you!\n ");



    printf("Who is the light of the imperium?\n 1. Robutte Guillimon\n 2. Saint Celestine\n 3. The Emperor of Mankind\n 4. There is no 'light' \n");
    scanf("%d", &given[0]);

    printf("Which of the Emperor's sons died defending him against Horus?\n 1. Rogal Dorn\n 2. Sanguinius\n 3. Vulkan\n 4. Sigismund\n");
    scanf("%d", &given[1]);


    printf("Which figure was a historic part of the creation of the Emperor's church?\n 1. Euphrati Keeler\n 2. Lorgar Aurilien\n 3. the Tyranid hive mind\n 4. Tyberos the Red Wake\n");
    scanf("%d", &given[2]);


    printf("Who is the current Regent of the imperium Nhilius?\n 1. Commander Dante\n 2. Lord Calgar\n 3. High Marshall Helbrecht\n 4. this position doesn't exist\n");
    scanf("%d", &given[3]);


    printf("Who are the emperors personal Guards?\n 1. the Deathwing\n 2. the Adeptus Custodians\n 3. the Deathwatch\n 4. The UltraMarines\n");
    scanf("%d", &given[4]);


    printf("What as the name of the time period that humanity fought the men of iron?\n 1. The age of strife\n 2. the Great Crusade\n 3. the Era Indomitus\n 4. The dark Age Of Technology\n");
    scanf("%d", &given[5]);


    printf("Which of these allow for warp travel?\n 1. Gellerfields\n 2. the proto-discombobulator\n 3. Necron Pylons\n 4. Humans cant travel via the warp\n ");
    scanf("%d", &given[6]);



    printf("Which of these are NOT a loyal astartes faction?\n 1. The Raven Guard\n 2. The Night Lords\n 3. the Salamanders\n 4. The Blood Angels\n");
    scanf("%d", &given[7]);


    printf("What unit acts as common police for Holy Terra?\n 1. the Inquisition\n 2. The adeptus Arbites\n 3. the Astartes\n 4. the Drukhari\n");
    scanf("%d", &given[8]);



    printf("What Primarch returned to lead the imperium?\n 1. Rogal Dorn\n 2. Jaime Lanaster\n 3. Angron\n 4. Robutte Guillimon\n");
    scanf("%d", &given[9]);



}






// answer checking 
int answer_array(int correct[], int given[], int size){

    int counter = 0;
    for (int i = 0; i < size; i++){
        if (correct[i] == given[i]){
            counter++;
        }
    }
    return counter;

    /* 
    * How this function works. 
    * via arguements it recieves your correct[] answers, it has the given array with no data yet since you give it as the program runs, size is determined on line 20.
    * 
    * i will be our number for every question answered, array index starts at 0 and goes to one number prior to our total questions because of it, counter will be our correct answers.
    *
    * i runs everytime we answer and will add 1, counter only adds one if given[i] == correct[i]. the function knows an answer is correct because we essentially hand it the answer key. answers are listed in line 14.
    the loop knows that first run is the first number before the comma 2, then the second loop is the next one in the chain 4, and so on.
    *
    * now we have a way to tie to the number of questions, we have a way to mark our correct answers, all we need to do is pass back how many questions we got correct.
    */
}