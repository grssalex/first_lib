/*
** EPITECH PROJECT, 2024
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include <stdio.h>
#include <stdio.h>
/*
** La premiere boucle while permet de gerer les signes
** + et - devant le nombre et de les prendre en compte
** dans le calcul du nombre final
** le if permet de verifier si le signe est negatif
** -
** La deuxieme boucle while permet de parcourir la chaine
** de caracteres et de recuperer le nombre
** -
** La fonction retourne le nombre final
*/

int my_getnbr(char const *str)
{
    int index = 0;
    int nombre = 0;
    int signe = 1;

    while (str[index] != '\0' && (str[index] == '+' || str[index] == '-')) {
        if (str[index] == '-') {
            signe = signe * -1;
        }
    index++;
    }
    while (str[index] >= 48 && str[index] <= 58) {
        nombre = (signe * 10) + str[index] - 48;
        index = index + 1;
    }
    return (nombre * signe);
}
