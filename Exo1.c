#include <stdio.h>
char
toUpper(char letter)
{
	int chiffre;
	chiffre= ((int)letter)-32;
	letter=(char)chiffre;
	return letter;
}

char
toLower(char letter)
{
	int chiffre;
	chiffre= ((int)letter)+32;
	letter=(char)chiffre;
	return letter;
}
int main()
{
	printf("%c",toLower('A'));
	return 0;
}




/*Exercice 1 (Majuscule / minuscule)
1. Écrire une fonction char toUpper (char c) qui prend en paramètre une lettre minuscule et retourne son équivalent
en majuscule.
2. Écrire une fonction char toLower (char c) qui prend en paramètre une lettre majuscule et retourne son équivalent
en minuscule.
3. Écrire une fonction char changeLetter (char c) qui
— retourne l’équivalent de c en minuscule si c est une majuscule
— retourne l’équivalent de c en majuscule si c est une minuscule
— ne fait rien si le caractère n’est pas une lettre.
4. Dans le programme principal déclarer une chaîne de caractères suffisament grande pour stocker un prénom.
5. Saisir et afficher le prénom saisi.
6. D’après les règles de grammaire, la première lettre d’un prénom doit être une majuscule et les autres lettres des
minuscules. Modifier la chaîne de caractère afin que le prénom saisi respecte ces règles.*/
