#include "../include/uri.h"

int chercheProtocole(char *proto);

void choixProto(char *uri)
{
    char *protocole = NULL;

    if ( (protocole = delim(uri, ":", "")) == NULL ) {
        printf("Syntaxe incorrecte\n");
        return;
    }
    switch (chercheProtocole(protocole)) {
        case 0 :
        case 1 :
        case 2 :
            generic(uri, protocole);
            break;
        case 3 :
            ssh(uri);
            break;
        case 4 :
            github(uri);
            break;
        case 5 :
            spotify(uri);
            break;
        default :
            printf("Protocole non pris en charge\n");
    }
    free(protocole);
}

int chercheProtocole(char *proto)
{
    char elements[7][10] = {{"http"}, {"https"}, {"ftp"}, {"ssh"}, {"git"}, {"spotify"}};

    for (int i = 0; i < 7; i++) {
        if (strcmp(proto, elements[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int numPort(char *protocole)
{
    if (strcmp(protocole, "http") == 0) {
        return 80;
    }
    else if (strcmp(protocole, "https") == 0) {
        return 443;
    }
    else if (strcmp(protocole, "ftp") == 0) {
        return 21;
    }
    else {
        printf("Erreur, protocole non pris en charge\n");
        return (EXIT_FAILURE);
    }
}
