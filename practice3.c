#include <stdio.h>
int astartes(int n);

void main(){
astartes(5);
}

int astartes(int n){
for(n; n < 500; n = n + 25){
    printf("The Emperors angels are here!\n");
}
}