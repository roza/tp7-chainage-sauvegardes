#ifndef LISTE_PERS_H
#define LISTE_PERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Date
{
    int jour, mois, annee;
};

struct Personne
{
    char nom[20];
    struct Date naissance;
};

struct Boitep
{
    struct Personne perso;
    struct Boitep *lien;
};

typedef struct Boitep *Listep;

// Prototypes
void saisir_date(struct Date *d);
void affiche_date(struct Date *d);
void saisir_personne(struct Personne *p);
void affiche_personne(struct Personne p);
void cree_liste(Listep *l);
int vide(Listep l);
int nb_elem(Listep l);
void affiche_liste(Listep l);
void inserer_ordre(struct Personne p, Listep *lc);
void sauvegarde_liste(Listep l, const char *filename);
void restaure_liste(Listep *l, const char *filename);
void liberer_liste(Listep *l);
#endif
