#include <stdio.h>




//Prototypes
int questions();
int answer_array(int correct[], int given[], int size);


int main (void){

//  int correct [total array storage in item count, not bytes] = {answer for q1, answer for q2, answer for q3};
    int correct[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

//  
    int given[10];


    answer_array(correct,given,10)


}





//The Test
int questions(){



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