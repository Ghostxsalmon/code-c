#include <stdio.h>


void get_int(int begin, int end){
    if (begin < end){
    printf("I'm working!\n");
}
else{
    printf("I'm not working\n");
}
}


int main(void){
    get_int(3,10);}