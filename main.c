#include"listepers.h"

int main()
{
    struct Personne pers;
    Listep lp;
    cree_liste(&lp);
    printf("\n Saisie 1ere personne :");
    saisir_personne(&pers);
    inserer_ordre_lexico(pers, &lp);
    printf("\n Saisie 2eme personne :");
    saisir_personne(&pers);
    inserer_ordre_lexico(pers, &lp);
    printf("\n");
    affiche_liste(lp);
    printf("\n Saisie 3eme personne :");
    saisir_personne(&pers);
    inserer_ordre_lexico(pers, &lp);
    affiche_liste(lp);
    sauvegarde_liste(lp, "liste.pers");
    liberer_liste(lp);
    Listep lp2;
    restaure_liste(&lp2, "liste.pers");
    affiche_liste(lp2);
    liberer_liste(lp2);
    getchar(); // pour  consommer le '\n' restant
    return 0;
}