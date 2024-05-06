#include <stdio.h>

int main(){
    
    int numberOne = 23;
    int numberTwo = 47;
    int numberThree = 95;
    int numberFour = 79;
    int operation;

    operation = numberOne / numberTwo * numberThree + numberFour;

    printf("%d\n", operation);

    sleep(5);
    return 0;
}