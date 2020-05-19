#include "../include/uri.h"

void ssh(char *uri)
{
    if (uri[0] != '/' && uri[1] != '/') {
        printf("Syntaxe incorrecte\n");
        return;
    }
    leftDecalage(uri, 2);

    char *user = NULL;
    char *fingerprint = NULL;
    char *host = NULL;
    char *port = NULL;

    char flag[2];

    if ( (user = delim(uri, ";@", flag)) != NULL) {
        if (flag[0] == ';') {
            if ( (fingerprint = delim(uri, "@", "")) == NULL) {
                printf("Syntaxe incorrecte\n");
                return;
            }
        }
    }

    if ( (host = delim(uri, ":", "")) == NULL) {
        host = (char*)malloc(TAILLE_MAX * sizeof(char));
        strcpy(host, uri);
    }
    else {
        port = (char*)malloc(TAILLE_MAX * sizeof(char));
        strcpy(port, uri);
    }

    printf("Protocole : ssh\nUser : %s\nFingerprint : %s\n", user, fingerprint);
    printf("Host : %s\nPort : ", host);
    if (port == NULL) {
        printf("22");
    }
    else {
        printf("%s", port);
    }
    printf("\n");

    free(user); free(fingerprint); free(host); free(port);
}
