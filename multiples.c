#include <stdio.h>

void count_multiples(int start, int end, int step){
    for(int i=start; i<=end; i=i+step)
    printf("%d\n", i);
}

int main() {
    count_multiples(10, 30, 5);
    return 0;
}