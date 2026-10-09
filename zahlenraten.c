#include <stdio.h>
#include <stdbool.h>

int main(void)
    {
    bool run = true;
    int mynum;
    const int ri = 19;
    printf("Gib eine Zalh ein\n");
    scanf("%d", &mynum);
    while (run){
    if (mynum > ri)
        {
        printf("Deine Zahl ist groeßer, gib noch eine Zahl ein\n");
        scanf("%d", &mynum);
        }
    else if (mynum < ri)
        {
        printf ("Deine Zahl ist kleiner, gib noch eine zahl ein\n");
        scanf("%d", &mynum);
        }
    else if (mynum == ri)
    {
        printf("Deine Zahl ist richtig\n");
        run = false;
    }
    }
    return 0;
    }