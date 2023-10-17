#ifndef LISTEPERS_H
#define LISTEPERS_H

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

/* On définit Listep comme pointeur sur Boitep */
typedef struct Boitep *Listep;

// Prototypes
void saisir_date(struct Date *d);
void affiche_date(struct Date *d);
void saisir_personne(struct Personne *p);
void affiche_personne(struct Personne p);
/* Cree une liste vide */
void cree_liste(Listep *l);
/* Teste si la liste esr vide */
bool vide(Listep l);
int taille(Listep l);
void affiche_liste(Listep l);
/* insérer la personne selon son nom dans la liste
 de façon à conserver la liste des personnes
 ordonnée par nom croissant dans l'ordre lexicographe */
void inserer_ordre_lexico(struct Personne p, Listep *lc);
void sauvegarde_liste(Listep l, const char *filename);
void restaure_liste(Listep *l, const char *filename);
/* Libère la mémoire allouée pour la liste l*/
void liberer_liste(Listep *l);

#endif
