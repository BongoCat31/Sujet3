[![Version](https://img.shields.io/badge/Langage-C-blue)]()

# Sujet 3 - URI Analyse
Analyse de different URI : HTTP, HTTPS, FTP, SSH, GIT, SPOTIFY


## Fonctions 
|Sommaire                                                                                                  |
| ------                                                                                                   |
|   [choixProto](#choixProto) - Choisi le protocole                                                        |
|   [numPort](#numPort) - Choisi le port                                                                   |
|   [delim](#delim) - Retourne la chaine de caractere avant le delimiteur                                  |
|   [leftDecalage](#lleftDecalage) - Decale une chaine de caractere vers la gauche                         |
|   [generic](#generic) - Permet de detecter une URI de type générique ( http, https, ftp )                |
|   [ssh](#ssh) - Permet de detecter une URI de type SSH                                                   |
|   [github](#github) - Permet de detecter une URI de type github                                          |
|   [spotify](#spotify) - Permet de detecter une URI de type spotify                                       |

<br/>

### choixProto
```c
void choixProto(char *uri)
```

>Paramètres :
>
>  * char *uri - Chaine de caractere contenant l'URI

### numPort
```c
int numPort (char *protocole);
```

>Paramètre :
>
>  * char *protocole - Chaine de caractere contenant le protocole

>Retourne :
>
>  * int - Retourne le numero du port
  
<br/>

### delim
```c
char *delim(char *chaine, char *delimiteur, char token[2])
```

>Paramètres :
>
>  * char *chaine - Contient la chaine a delimiter
>
>  * char *delimiteur - Chaine de caractere contenant le(s) delimiteur(s)
>
> * char token[2] - Si delimiteur > 1 alors le premier delimiteur est enregistré dans token

>Retourne :
>
>  * char - Retourne une chaine de caractere

### leftDecalage
```c
void leftDecalage(char *chaine, int c);
```

>Paramètre :
>
>  * char *chaine - Chaine de caractere a decaler
>
> * int c - Nombre de charactere a decaler

<br/>

### generic
```c
void generic(char *uri, char *proto)
```

>Paramètres :
>
>  * char *uri - Chaine de caractere contenant l'URI
>   
>  * char *proto - Chaine de caractere contenant le protocole

### ssh 
```c
void ssh(char *uri)
```

>Paramètres :
>
>  * char *uri - Chaine de caractere contenant l'URI

<br/>

### github
```c
void github(char *uri)
```

>Paramètre :
>
>  * char *uri - Chaine de caractere contenant l'URI

<br/>

### spotify
```c
void spotify(char *uri)
```

>Paramètre :
>
>  * char *uri - Chaine de caractere contenant l'URI
