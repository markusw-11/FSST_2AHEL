#include <stdio.h>
#include <stdbool.h>
#include <time.h>



int main(void){
    bool run = true;
    int mynum;
    const int ri = 19;
    int trys = 0;
    int lefttrys;
    printf("Gib eine Zalh ein\n");
    scanf("%d", &mynum);
    while (run){
    if (mynum > ri)
        {
        printf("Deine Zahl ist groeßer, gib noch eine Zahl ein\n");
        scanf("%d", &mynum);
        trys +=1;
        }
    else if (mynum < ri)
        {
        printf ("Deine Zahl ist kleiner, gib noch eine zahl ein\n");
        scanf("%d", &mynum);
        trys +=1;
        }
    else if (mynum == ri)
    {
        printf("Deine Zahl ist richtig\n");
        run = false;
        trys +=1;
    }
    if (trys >= 10){
        printf("Du hast leider verloren");
        run = false;
    }
    else{
        lefttrys = 10-trys;
        printf("du hast noch %d versuche\n", lefttrys);
    }
    }
    return 0;
}