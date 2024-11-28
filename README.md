![](https://www.commentcoder.com/static/bd7bd17f9fccb49b563e643f73bc87b3/b17f8/c-printf.jpg)


![version](https://img.shields.io/badge/version-1.9.0-blue)

![Licence](https://img.shields.io/badge/licence-MA-green)


### *Description :* 
La fonction _printf est une fonction standard en langage C , elle est utilisé pour afficher des informations sur le terminal .


### *Specificateur de format :*

**%d** et **%i** : Affiche un entier.

**%c** : Affiche un caractère.

**%s** : Affiche une chaîne de caractères.

**%%** : Affiche un symbole **%**. 


### *Exemple d'utilisation :*  
#### Entier

Input : _printf("Le concert commence dans %d min.", 20 );

Ouput : Le concert commence dans 20 min.

#### Charactere

Input : _printf("Affiche un charactere : %c", 'A' );

Ouput : Affiche un charactere : A

#### Chaine de charactere

Input : _printf("%s, 'Ceci est notre premier projet.');

Ouput: Ceci est notre premier projet.


### *Foncionnement interne :*

La fonction _printf commence par analyser la chaîne de charactere. Cette chaîne peut contenir des caractères normaux (lettres, espaces, symboles) ainsi que des spécificateurs de format (comme %s, %d, %c, etc...).

 Caractères normaux : Les caractères qui ne sont pas précédés du symbole % sont imprimés directement.
 Spécificateurs de format : Lorsqu'un % est rencontré, cela indique qu'un spécificateur de format suit, et que l'argument approprié doit être imprimé à sa place.

### *Cloner le projet via Github :*
#### Adresse du projet _printf :
https://github.com/Mattieuuu/holbertonschool-printf

Fichier  inclus dans le projet :
- **main.h** : Déclaration des prototype de fonctions et création d'une structure . 

- **main.c** : Fichier d'utilisation de printf.

- **Function_setting.c** : Fonction variadique pour gerer les spécificateurs de format . Initialisation des functions (_printf , handle_spe,print str ,print_perc , print_char)

- **Function.c** : Initialisation des functions (print int,print num , _putchar)

### *Compilation :*

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf.c

#### Explication des options de compilation :
- **gcc** : Compilateur langage C .

- **-Wall** : Active tous les avertissements du compilateur.

- **-Wextra** : Active des avertissements supplémentaires pour éviter des erreurs potentielles.

- **-Werror** : Traite les avertissements comme des erreurs, vous forçant à les corriger avant de compiler.

- **-pedantic** : Vérificateur strict des normes langage C .

- **-std=gnu89** : Indique au compilateur la version à utiliser pour compiler .

- **-Wno-format** : Désactive les avertissements liées à la mauvaise utilisation des spécificateurs de format.

- ***.c** : Les fichiers sources du projet qui seront compilés ensemble .

- **-o printf.c** : Rend executable la compilation via le fichier printf.c


### Teste de la fonction printf :
Tester avec UBuntu 22.04 .

![Mon Image](./image.png)


### *Auteur :*


Le projet Printf a été développé :

==> **[Mattieu MOUROUX](https://github.com/Mattieuuu)** -Devellopement de la fonction '_printf' 


==> **[Aurélien GOAOC](https://github.com/Aurelien292)** -Devellopement de la fonction '_printf' , documentation du README.md
