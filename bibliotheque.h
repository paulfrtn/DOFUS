//
// Created by paula on 10/05/2024.
//

#ifndef DOFUS_BIBLIOTHEQUE_H
#define DOFUS_BIBLIOTHEQUE_H

///------------------------------------------------------------------------ BIBLIOTHEQUES ---------------------------------------------------------
#include <allegro.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>


///------------------------------------------------------------------VALEURS GLOBALES ---------------------------------------------------------

#define DIAG_X 70
#define DIAG_Y 28
#define TAUX_OBST 10
#define TAUX_TREE 50


///---------------------------------------------------------------------- STRUCTURES ----------------------------------------------------------

/*
Ici on cree une structure nommee "valise" car cette structure comportera des variables qu'on transportera
dans ( pratiquement) tous les sous-programmes (comme une valise pour des vacances)
*/

typedef struct valise
{
    BITMAP* plateforme;
    BITMAP* double_buffer;
    BITMAP* curseur;
    BITMAP* ciel;
    BITMAP* halo;
    BITMAP* cases_possibles;
    BITMAP* bloque;
    BITMAP* select;
    BITMAP* case_attaque;
    BITMAP* arbre;
    BITMAP* rocher;
    BITMAP* eau;
    BITMAP* pont;
    BITMAP* perso1;
    BITMAP* accueil;
    BITMAP* bouton1;
    BITMAP* bouton2;
    BITMAP* bouton3;
    BITMAP* bouton4;
    BITMAP* bouton5;
    BITMAP* photo1;
    BITMAP* photo2;
    BITMAP* photo3;
    BITMAP* photo4;
    BITMAP* pause;
    BITMAP* menupause;
    BITMAP* reprendre;
    BITMAP* sauvegarde;
    BITMAP* cyprien;
    BITMAP* jn;
    int ulti;
    BITMAP* pa;
    BITMAP* jules;
    BITMAP* equipe;
    BITMAP* contact1;
    BITMAP* contact2;
    BITMAP* contact3;
    BITMAP* contact4;
    BITMAP* retour;
    BITMAP* barre_perso;
    BITMAP* massue;
    BITMAP* fond_babylone;
    BITMAP* carte_gilg;
    BITMAP* carte_isht;
    BITMAP* carte_enki;
    BITMAP* carte_eresh;
    BITMAP* carte_gilg_select;
    BITMAP* carte_isht_select;
    BITMAP* carte_enki_select;
    BITMAP* carte_eresh_select;
    BITMAP* fond_ziggu_jour;
    BITMAP* fond_ziggu_nuit;
    BITMAP* fond_ruines;
    BITMAP* mur_babylone;
    BITMAP* dessin_gilg;
    BITMAP* dessin_isht;
    BITMAP* dessin_enki;
    BITMAP* dessin_eresh;
    BITMAP* cadran_hist_gilg;
    BITMAP* cadran_hist_isht;
    BITMAP* cadran_hist_enki;
    BITMAP* cadran_hist_eresh;
    BITMAP* cadran_nom_gilg;
    BITMAP* cadran_nom_isht;
    BITMAP* cadran_nom_enki;
    BITMAP* cadran_nom_eresh;
    BITMAP* cadran_stat_gilg;
    BITMAP* cadran_stat_isht;
    BITMAP* cadran_stat_enki;
    BITMAP* cadran_stat_eresh;
    BITMAP* cadran_sort_gilg;
    BITMAP* cadran_sort_isht;
    BITMAP* cadran_sort_enki;
    BITMAP* cadran_sort_eresh;
    BITMAP* choisir_classe;
    BITMAP* bouton_retour_class;
    BITMAP* haut_de_page;
    BITMAP* tete_gilg;
    BITMAP* tete_isht;
    BITMAP* tete_eresh;
    BITMAP* tete_enki;
    BITMAP* tete_gilg_select;
    BITMAP* tete_isht_select;
    BITMAP* tete_eresh_select;
    BITMAP* tete_enki_select;
    BITMAP* bouton_2_j;
    BITMAP* bouton_3_j;
    BITMAP* bouton_4_j;
    BITMAP* cadran_nb_j;
    BITMAP* cadran_lancement;
    BITMAP* map;
    BITMAP* barre_ishtar;
    BITMAP* barre_gilgamesh;
    BITMAP* barre_enkidu;
    BITMAP* barre_ereshkigal;
    BITMAP* halo_combat;
    BITMAP* bouton_combat;
    BITMAP* cases_rouges;
    BITMAP* halo_combat_rouge;
    BITMAP* joueur_suivant;
    BITMAP* sprite_gilg;
    BITMAP* sprite_isht;
    BITMAP* sprite_enki;
    BITMAP* sprite_eresh;


    int occu_ulti1;
    int occu_ulti2;
    int occu_ulti3;
    int occu_ulti4;
    int affich_sprite;
    int ulti_lance;
    int a_qui_ltour;
    int pour_ulti;


    BITMAP* noble_fantasme_ishtar[341];
    char nf_ishtar[50];
    BITMAP* noble_fantasme_gilgamesh[404];
    char nf_gilg[50];
    BITMAP* noble_fantasme_enkidu[309];
    char nf_enki[50];
    BITMAP* noble_fantasme_ereshkigal[508];
    char nf_eresh[50];


    SAMPLE* music_1;
    FILE* fic;

    int nombre_joueurs;
    int combat;
    int alterner_joueur;
    int d1;
    int d2;
    int d3;
    int d4;
    int cases_ok;
    int attaque_ok;
    int attaque_en_cours;
    int joueur_touche;
    int bouger;
    int choix_menu;
    int i;
    int joueur_actuel;
    bool statut_joueur[3];
    int choice_class;
    int gilg_select;
    int isht_select;
    int enki_select;
    int eresh_select;
    int rest_nb_j;
    int rest_lancement1;
    int rest_lancement2;
    int rest_lancement3;
    int occurence_choix_class;
    int occu_nb1;
    int occu_nb2;
    int occu_nb3;
    int occu_nb4;
    int actif;
    int oui;
    int alterner_jeu1;
    int alterner_jeu2;
    int alterner_jeu3;
    int alterner_jeu4;
    int corps_a_corps;
    int spell1;



}t_valise;


typedef struct cases
{
    char numero_cases[20];
    int pos_x;
    int pos_y;
    int pos_x_centre;
    int pos_y_centre;
    int type_cases;
    int numero_ligne;
    int numero_colonne;


}t_cases;

typedef struct classe
{

    int quelle_classe;

    int degat_attaque_cac;
    int degat_spell_1;
    int degat_spell_2;
    int degat_spell_3;
    int degat_spell_4;

    int cout_pa_cac;
    int cout_pa_spell_1;
    int cout_pa_spell_2;
    int cout_pa_spell_3;
    int cout_pa_spell_4;

    int proba_cac;
    int proba_spell_1;
    int proba_spell_2;
    int proba_spell_3;
    int proba_spell_4;

    int cool_down_spell_4;



}t_classe;

typedef struct joueur
{

    char nom[20];
    int nb_PM;
    int nb_PV;
    int nb_PA;
    bool statut;
    BITMAP* perso;
    int pos_x;
    int pos_y;
    int numero_ligne;
    int numero_colonne;

    t_classe attaque;

}t_player;



///---------------------------------------------------------------------- PROTOTYPES ----------------------------------------------------------


void init_bitmap(t_valise* valise);
void affichage_curseur(t_valise valise);
void jouer_music(t_valise* valise);
void init_valise(t_valise* valise);
void affichage_plateau(t_valise* valise, t_cases cases[17][17]);
void crea_struct_cases(t_valise valise, t_cases cases[17][17]);
void is_over_case(t_valise valise, t_cases cases[17][17]);
void stop_music(t_valise valise);
int is_in_case(t_cases cases);
void init_joueurs(t_valise valise, t_player* player[4], t_cases cases[17][17]);
void phase_de_jeu1(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies);
void deplacement_case_p_cases(t_cases* cases_choisies, t_player* player, t_valise* valise, t_cases cases[17][17]);
void menu_principale(t_valise* valise);
void menu_pause(t_valise* valise);
void creditmenu(t_valise* valise);
void credit(t_valise* valise);
void choix_classes(t_valise* valise,t_player* player,t_cases cases[17][17]);
void choix_attaque(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies);
void joueur_est_attaque(t_player *player, t_valise* valise);
void phase_de_jeu2(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies);
void noble_fantasme(t_valise* valise, t_player* player);
int attaque_cac(t_player* player, t_valise* valise, t_cases* cases_choisies);
void spell_1(t_player* player, t_valise* valise, t_cases* cases_choisies);
void phase_de_jeu3(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies);
void phase_de_jeu4(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies);
void nb_joueurs(t_valise* valise);
void lancer_le_jeu(t_valise* valise);
void affichage_nb_gilg(t_valise* valise);
void affichage_nb_ishtar(t_valise* valise);
void affichage_nb_enki(t_valise* valise);
void affichage_nb_eresh(t_valise* valise);

//void choix_perso(t_player* player[4], t_classe* perso, t_valise valise);





#endif //DOFUS_BIBLIOTHEQUE_H
