#include "../include/uri.h"

int taille(char *argument)
{
    int i;

    for (i = 0; i <= TAILLE_MAX; i++) {
        if (argument[i] == '\0') {
            return (i);
        }
    }

    return -1;
}


int main(int argc, char *argv[])
{
    if (argc == 2) {
        if (taille(argv[1]) == -1) {
            aide();
        }
        else {
            choixProto(argv[1]);
        }
    }
    else {
        aide();
    }

    return (EXIT_SUCCESS);
}

void aide()
{
    printf("Usage : ./nom_programme [URI (%d caracteres max)]\n", TAILLE_MAX-1);
    printf("Protocoles reconnus: http(s), ftp, ssh, git, spotify\n");
}
