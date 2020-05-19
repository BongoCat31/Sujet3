#include "../include/uri.h"

void github(char *uri)
{
    if (uri[0] != '/' && uri[1] != '/') {
        printf("Syntaxe incorrecte\n");
        return;
    }
    leftDecalage(uri, 2);

    char *index = NULL;
    char *user = NULL;
    char *projectName = NULL;

    if ( (index = delim(uri, "/", "")) == NULL ) {
        if (strcmp(uri, "github.com") != 0) {
            printf("Erreur de syntaxe\n");
            return;
        }
        else {
            printf("Vous envoye une requete a github, c'est deja bien !\n"); // Gérer chaine vide apres /
            return;
        }
    }
    else {
        if (strcmp(index, "github.com") != 0) {
            printf("Erreur de syntaxe\n");
            return;
        }
    }

    if ( (user = delim(uri, "/", "")) == NULL ) {
        user = (char*)malloc(TAILLE_MAX * sizeof(char));
        strcpy(user, uri);
        printf("Vous avez trouve %s !\n", user);

        free(user);
        return;
    }
    else {
        projectName = delim(uri, ".", "");
        if (projectName == NULL || strcmp(uri, "git") != 0) {
            printf("User : %s\nProject Name : %s\nExtension .git manquante\n", user, projectName);
        }
        else {
            printf("User : %s\nProject Name : %s\n", user, projectName);
        }
    }

    free(index); free(user);
}
