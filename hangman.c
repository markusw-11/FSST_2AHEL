#include <stdio.h>

int main()
{
    int hints = 0;
    const char secret[] = "1234";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    int hits = 0;
    char guess;

    for (int i =0; i < len; i++) {
        printf("n");
    }


    printf("Rate eine Zahl: ");
    if (scanf(" %c", &guess) !=1 )
    {
        printf("Keine Eingabe\n");
        return 1;
    }
    for (int i = 0; i < len; i++)
    {
     if ((secret[i]) == guessed)
     {
        hits++;

     }
     
    }
    
        printf("Treffer: %d\n", hints);


    return 0;
}
