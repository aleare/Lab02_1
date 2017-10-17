#ifndef MYLIB_LIBRARY_H
#define MYLIB_LIBRARY_H
//Costanti della libreria
#define MAX_VETT 1000
#define MAX_MAT_R 20
#define MAX_MAT_C 70
#define MAX_STR 20
//Include Utilizzati
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

void hello_world();

//Funzioni su FILE [FILE]
FILE *FILE_apri_file(int MAX_FILENAME_SIZE);
int FILE_leggi_file(FILE *fp, int r, int c, char mat[MAX_MAT_R][MAX_MAT_C]);

//Funzioni di ricerca [find]
int find_ricerca_stringa_matrice(const char mat[MAX_MAT_R][MAX_MAT_C], int r, int c, char *s);

//Funzioni su Vettori [vett]
int vett_crea_vettore_tastiera(int *v); //Crea un vettore a partire da dati presi da stdin. Torna la dimensione del vettore
int vett_crea_vettore_tastiera_DMAX(int *v, const int DMAX); //Uguale a crea_vettore_tastiera ma con check su dim max.

//Funzioni su Insiemi [ins]
void ins_crea_insieme(int v[],int size);
int ins_intersezione_insiemi(const int *v1, const int *v2, int *res, int size);
int ins_stampa_unione_insiemi(int *v1, int *v2, int size); //torna 1 se A e B hanno intersezione vuota, 0 altrimenti.
int ins_unione_insiemi(int *v1, int *v2, int *u, int size); //torna 1 se A e B hanno intersezione vuota, 0 altrimenti.

//Funzioni di Selezione [sel] //tornano il numero corrispondente alla scelta effettuata, 0 se la scelta non è valida...
int selezione_stringa_2(char string1[], char string2[]);
int selezione_stringa_3(char string1[], char string2[], char string3[]);
int selezione_stringa_4(char string1[], char string2[], char string3[], char string4[]);
int selezione_stringa_5(char string1[], char string2[], char string3[], char string4[], char string5[]);
int selezione_stringa_6(char string1[], char string2[], char string3[], char string4[], char string5[], char string6[]);
int selezione_stringa_7(char string1[], char string2[], char string3[], char string4[], char string5[], char string6[], char string7[]);

//Funzioni di ordine [sort]


#endif