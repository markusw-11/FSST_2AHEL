#include <stdio.h>

int main()
{
<<<<<<< HEAD
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

=======
    int versuche = 10;
    while (versuche > 0)
    {

        const char secret[] = "REDBULL4EVER";
        char guess;
        printf("Buchstabe: ");
        if (scanf("%c", &guess) != 1)
        {
            printf("Falsche Eingabe\n");
            return 1;
        }

        int hits = 0;
        for (int i = 0; i < sizeof(secret) - 1; i++) {
            if ((secret[i]) == guess) {
                hits++;
            }
        }
    }
>>>>>>> ef4fd6b993adee8e8904e21bfd21ee457c9f23b2

    return 0;
}
