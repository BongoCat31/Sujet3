[![Version](https://img.shields.io/badge/Langage-C-blue)]()

# Sujet 4 - Chiffrage de messages
Chiffrement et déchiffrement, algorithme par décalage (César et Vigenère)

![Banner](https://user-images.githubusercontent.com/55319869/82814539-a7c24b00-9e97-11ea-810f-3a40b5f72d59.png)


## Fonctions 
|Sommaire                                                                                                  |
| ------                                                                                                   |
|   [wsaisieTexte](#wsaisietexte) - Saisie de valeur de l'utilisateur                                      |
|   [wtoi](#wtoi) - Conversion chaîne de caractère en entier                                               |
|   [choixMultiple](#choixmultiple) - Affichage d'une menu de choix multiple                               |
|   [lanceAlgo](#lancealgo) - Lance l'algorithme de chiffrement ou déchiffrement choisie par l'utilisateur |
|   [saisieMessage](#saisiemessage) - Outil de saisie du texte à chiffre ou à déchiffrer                   |
|   [saisieCle](#saisiecle) - Saisie de la clé                                                             |
|   [conversion](#conversion) - Vérifie l'absence de caractères spéciaux, et convertit les accents         |
|   [cesar](#cesar) - Outil de lancement de l'algorithme de César                                          |
|   [vigenere](#vigenere) - Outil de lancement de l'algorithme de Vigenère                                 |
|   [algo](#algo) - Algorithme par décalage (chiffrement et déchiffrement)                                 |

<br/>

### wsaisieTexte
```c
int wsaisieTexte(wchar_t *chaine, int longueur)
```

>Paramètres :
>
>  * wchar_t *chaine - Variable dans laquelle sera enregistrée la valeure saisie au clavier par l'utilisateur
>    
>  * int longueur - Longueur maximale (en comptant le caractère de fin '\0') que pourra contenir la chaîne

>Retourne :
>
>  * int - EXIT_SUCCESS ou EXIT_FAILURE

### wtoi
```c
int wtoi(wchar_t *chaine)
```

>Paramètre :
>
>  * wchar_t *chaine - Chaîne à convertir

>Retourne :
>
>  * int - Entier convertit ou -84 si chaîne trop longue | 0 si caractère n'est pas un chiffre
  
<br/>

### choixMultiple
```c
wchar_t choixMultiple(const wchar_t *chaine, wchar_t taille)
```

>Paramètres :
>
>  * const wchar_t *chaine - Question pour le choix multiple
>
>  * wchar_t taille - Nombre maximale de choix possible

>Retourne :
>
>  * wchar_t - Réponse au choix multiple

### lanceAlgo
```c
int lanceAlgo(wchar_t tab[3])
```

>Paramètre :
>
>  * wchar_t tab[3] - Valeur permettant de lancer la bonne méthode de chiffrement

>Retourne :
>
>  * int - EXIT_SUCCESS ou EXIT_FAILURE

<br/>

### saisieMessage
```c
void saisieMessage(wchar_t *chaine, bool choix)
```

>Paramètres :
>
>  * wchar_t *chaine - Variable ou sera stockée le message lu 
>   
>  * bool choix - Chiffrement ou déchiffrement

### saisieCle 
```c
void saisieCle(wchar_t *cle, int taille)
```

>Paramètres :
>
>  * wchar_t *cle - Variable de stockage pour la clé
>
>  * int taille - Taille maximale de la clé

<br/>

### conversion
```c
int conversion(wchar_t *chaine)
```

>Paramètre :
>
>  * wchar_t *chaine - Chaîne à convertir

>Retourne :
>
>  * int - EXIT_SUCCESS ou EXIT_FAILURE

<br/>

### cesar
```c
int cesar(bool choix)
```

>Paramètre :
>
>  * bool choix - Chiffrement ou déchiffrement

>Retourne :
>
>  * int - EXIT_SUCCESS ou EXIT_FAILURE
   
### vigenere   
```c
int vigenere(bool choix)
```

>Paramètre :
>
>  * bool choix - Chiffrement ou déchiffrement

>Retourne :
>
>  * int - EXIT_SUCCESS ou EXIT_FAILURE

<br/>

### algo
```c
int algo(wchar_t chaine, int cle, bool choix)
```

>Paramètres :
>
> *  wchar_t *chaine - Message chiffré ou déchiffré
>   
> *  int cle - Clé
>    
>   * bool choix - Chiffrement ou déchiffrement

>Retourne :
>
>  * int - Retourne le code ASCII de la modification du caractère subi par l'algorithme
