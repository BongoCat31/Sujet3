#include "../include/uri.h"

int taille(char *argument);
void aide(char *nomProgramme);

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


int taille(char *argument)
{
    for (int i = 0; i <= TAILLE_MAX; i++) {
        if (argument[i] == '\0') {
            return (i);
        }
    }

    return -1;
}

void aide(char *nomProgramme)
{
    printf("Usage : %s [URI (%d caracteres max)]\n", argv[0], TAILLE_MAX-1);
    printf("Protocoles reconnus: http(s), ftp, ssh, git, spotify\n");
}
