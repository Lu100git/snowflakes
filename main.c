#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "conio.h"

struct coordinates{
    int x;
    int y;
};

int main(){
    time_t t;
    srand((unsigned) time(&t));
    int amount = 80;

    struct coordinates coordinatesArray[amount];
    
    for(int i = 0; i < amount; i++){
        struct coordinates coordinate;
        coordinate.x = rand() % 90;
        coordinate.y = abs(rand() % 90);
        coordinatesArray[i] = coordinate;
    }

    system("clear");
    int running = 1;
    while(running){
        for(int z = 0; z < amount; z++){
            coordinatesArray[z].y %= 40;
            coordinatesArray[z].y++;
            gotoxy(coordinatesArray[z].x, coordinatesArray[z].y);
            putchar('#');
        }
        gotoxy(0,0);
        system("sleep 0.2");
        system("clear");
    }
    system("clear");
    return 0;
}