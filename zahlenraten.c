#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    bool run = true;
    int mynum;
    int trys = 0;
    int lefttrys;
    srand(time(NULL));
    int rn = rand()%20 + 1;
    int cheat = -1;

    printf("Gib eine Zalh ein\n");
    scanf("%d", &mynum);
    while (run)
    {
        if (mynum == cheat)
        {
            printf("Die Zahl ist %d\n", rn);
            printf("Gib eine Zahl ein");
            scanf("%d", &mynum);
        }
        else if (mynum > rn)
        {
            printf("Deine Zahl ist groeßer, gib noch eine Zahl ein\n");
            scanf("%d", &mynum);
            trys += 1;
        }
        else if (mynum < rn)
        {
            printf("Deine Zahl ist kleiner, gib noch eine zahl ein\n");
            scanf("%d", &mynum);
            trys += 1;
        }
        else if (mynum == rn)
        {
            printf("Deine Zahl ist richtig\n");
            run = false;
            trys += 1;
        }

        if (trys >= 10)
        {
            printf("Du hast leider verloren");
            run = false;
        }
        else if (mynum = !rn)
        {
            lefttrys = 10 - trys;
            printf("du hast noch %d versuche\n", lefttrys);
        }
    }
    return 0;
}