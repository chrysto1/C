#include <stdio.h>

int main(){
    
    int age;
    int height;
    int year;

    year = 2002;
    height = 168;
    age =  22;

    printf("Minha idade = %d\nNasci em = %d\nTenho em cm = %d\n",
        age, year, height);

    sleep(5);
    return 0;
}