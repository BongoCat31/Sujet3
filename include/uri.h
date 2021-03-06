#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 256

/* choixProto.c */
void choixProto(char *uri);
int numPort (char *protocole);
/* ************ */

/* outil.c */
char *delim(char *chaine, char *delimiteur, char token[2]);
void leftDecalage(char *chaine, int c);
/* ******* */

/* Formatage des protocoles pris en charge */
void generic(char *uri, char *proto);
void ssh(char *uri);
void github(char *uri);
void spotify(char *uri);
/* *************************************** */

/*
    http(s)|ftp:[//authority]path[?query][#fragment]
    [authority] = [userinfo@]host[:port]

    ssh://[<user>[;fingerprint=<host-key fingerprint>]@]<host>[:<port>]

    git://github.com/user/project-name.git

    spotify:<artist|album|track>:<id>
    spotify:search:<text>
    spotify:user:<username>:playlist:<id>
*/
