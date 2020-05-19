#include "../include/uri.h"

void generic(char *uri, char *proto)
{
    char *path = NULL;
    char *query = NULL;
    char *fragment = NULL;
    char *userinfo = NULL;
    char *host = NULL;
    char *port = NULL;

    char flag[2];

    if (uri[0] == '/' && uri[1] == '/') { // AUTHORITY
        leftDecalage(uri, 2);

        userinfo = delim(uri, "@", "");
        host = delim(uri, ":/", flag);
        if (flag[0] == ':') {
            port = delim(uri, "/", "");
        }
    }

    if ( (path = delim(uri, "?#", flag)) == NULL) {
        path = (char*)malloc(TAILLE_MAX * sizeof(char));
        strcpy(path, uri);
    }
    else if (flag[0] == '?') {
        if ( (query = delim(uri, "#", "")) == NULL) {
            query = (char*)malloc(TAILLE_MAX * sizeof(char));
            strcpy(query, uri);
        }
        else {
            fragment = (char*)malloc(TAILLE_MAX * sizeof(char));
            strcpy(fragment, uri);
        }
    }
    else {
        fragment = (char*)malloc(TAILLE_MAX * sizeof(char));
        strcpy(fragment, uri);
    }

    printf("Protocole = %s\nUserInfo = %s\nHost = %s\n", proto, userinfo, host);
    printf("Path = %s\nQuery = %s\nFragment = %s\n", path, query, fragment);
    printf("Port = ");
    if (port == NULL) {
        printf("%d", numPort(proto));
    }
    else {
        printf("%s", port);
    }
    printf("\n");

    free(path); free(query); free(fragment);
    free(userinfo); free(host); free(port);
}
