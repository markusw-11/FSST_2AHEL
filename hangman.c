
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
    const char secret[] = "1234";
    const int len = sizeof(secret) - 1;

    char guessed[sizeof(secret) - 1];
    int versuche = 10;

    // Alle Stellen zunächst mit '_' belegen
    int fertig = 1;

    for (int i = 0; i < len; i++)
    {
        if (guessed[i] == '_')
        {
            fertig = 0;
            break;
        }
    }

    while (versuche > 0)
    {
        int hits = 0;
        char guess;

        // Aktuellen Fortschritt anzeigen
        printf("\nGeheimer Code: ");

        for (int i = 0; i < len; i++)
        {
            printf("%c ", guessed[i]);
        }

        if (guessed[0] != '_' &&
            guessed[1] != '_' &&
            guessed[2] != '_' &&
            guessed[3] != '_')
        {
            printf("\nDu hast den Code erraten!\n");
            return 0;
        }

        printf("\nBuchstabe/Ziffer: ");

        if (scanf(" %c", &guess) != 1)
        {
            printf("Falsche Eingabe\n");
            return 1;
        }

        // Eingabe mit dem geheimen Code vergleichen
        for (int i = 0; i < len; i++)
        {
            if (secret[i] == guess)
            {
                guessed[i] = guess;
                hits++;
            }
        }

        printf("Treffer: %d\n", hits);

        versuche--;
        printf("Verbleibende Versuche: %d\n", versuche);
    }

    printf("\nLeider verloren! Der Code war %s\n", secret);

    return 0;
<<<<<<< Updated upstream
}
>>>>>>> bc6e5caf2f54e56ab1c0646cd3c94f3feaa70a8c
=======
}
>>>>>>> Stashed changes
