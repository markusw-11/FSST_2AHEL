#include <stdio.h>

int main()
{
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

    return 0;
}
