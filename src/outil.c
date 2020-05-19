#include "../include/uri.h"

char *delim(char *chaine, char *delimiteur, char *token)
{
    int taille = (int)strlen(delimiteur), c = 0;

    if (taille == 0) {
        perror("Delimiteur non trouve");
        return NULL;
    }

    while (c < taille) {
        char *str = malloc(TAILLE_MAX * sizeof(char));

        for (int i = 0; chaine[i] != '\0'; i++) {
            str[i] = chaine[i];

            if (chaine[i] == delimiteur[c]) {
                str[i] = '\0';
                leftDecalage(chaine, i+1);
                if (taille > 1) {
                    token[0] = delimiteur[c]; token[1] = '\0';
                }

                return str;
            }
        }

        c++;
        free(str);
    }

    return NULL;
}

void leftDecalage(char *chaine, int c)
{
    int i;

    for (i = c; chaine[i] != '\0'; i++) {
        chaine[i-c] = chaine[i];
    }
    for (int j = i-c; j <= (i+c); j++) {
        chaine[j] = '\0';
    }
}
