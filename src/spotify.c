#include "../include/uri.h"

void spotify(char *uri)
{
    char *un = NULL;
    char *deux = NULL;
    char *playlist = NULL;
    char *id = NULL;

    if ( (un = delim(uri, ":", "")) == NULL ) {
        printf("Erreur de syntaxe\n");
        return;
    }
    else {
        if ( (deux = delim(uri, ":", "")) == NULL ) {
            deux = (char*)malloc(TAILLE_MAX * sizeof(char));
            printf("<artist|album|track> | <search> : %s\n", un);
            printf("<id> | <text> : %s\n", strcpy(deux, uri));
    }
        else {
            if ( (playlist = delim(uri, ":", "")) == NULL ) {
                printf("Erreur de syntaxe\n");
            }
            else {
                id = (char*)malloc(TAILLE_MAX * sizeof(char));
                printf("User : %s\nUsername : %s\n", un, deux);
                printf("Playlist : %s\nId : %s\n", playlist, strcpy(id, uri));
            }
        }
    }

    free(un); free(deux); free(playlist); free(id);
}
