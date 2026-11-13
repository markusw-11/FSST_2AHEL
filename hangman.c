#include <stdio.h>

<<<<<<< HEAD
int count_hits(const char *secret[], const char *guessed, int len) {
    int hits = 0;
    for (int i = 0; i < len; i++) {
        if (secret[i] == guessed[i]) {
            hits++;
        }
    }
    return hits;
}




int main()
{
    const char secret []= "REDBULL4EVER";
    const int len = sizeof(secret)-1;
    char guessed[len];
    char guess;


    // variable inizialisieren _ _ _ _

    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }


    printf("Buchstabe eingeben:");
    if ( scanf(" %c", &guess) != 1) {
        printf("Fehler\n");
        return 1;
    }

    if (secret[0] == guess) {
        printf("Treffer %c\n", secret[0]);
    }

    int hits = 0;
    for (int i = 0; i < len; i++) {
        if (secret[i] == guess) {
            hits++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%c", guessed[i]);
    }

    printf("\nAnzahl Treffer: %d\n", hits);

    return 0;
}
=======
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
>>>>>>> bc6e5caf2f54e56ab1c0646cd3c94f3feaa70a8c
