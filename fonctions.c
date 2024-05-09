#include "bibliotheque.h"
///-------------------------------------------------------------------------------------------------------------------------------------
///------------------------------------------------------------- INITIALISATION DE LA VALISE -------------------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------

void init_valise(t_valise* valise)
{
    valise->plateforme = load_bitmap("../images/sprite/cases/carre-map-iso-v2.bmp",NULL);
    valise->double_buffer = create_bitmap(SCREEN_W,SCREEN_H);
    valise->curseur = load_bitmap("../images/sprite/curseur souris/curseur.bmp",NULL);
    valise->ciel = load_bitmap("../images/decor/fond-ciel.bmp",NULL);
    valise->halo = load_bitmap("../images/sprite/cases/carre-map-iso-halo.bmp",NULL);
    valise->accueil = load_bitmap("../images/decor/accueil-baby.bmp",NULL);
    valise->bouton1 = load_bitmap("../images/sprite/boutons_menu/bouton1.bmp",NULL);
    valise->bouton2 = load_bitmap("../images/sprite/boutons_menu/bouton2.bmp",NULL);
    valise->bouton3 = load_bitmap("../images/sprite/boutons_menu/bouton3.bmp",NULL);
    valise->bouton4 = load_bitmap("../images/sprite/boutons_menu/bouton4.bmp",NULL);
    valise->bouton5 = load_bitmap("../images/sprite/boutons_menu/bouton5.bmp",NULL);
    valise->menupause = load_bitmap("../images/sprite/boutons_menu/menu_pause.bmp",NULL);
    valise->halo_combat_rouge = load_bitmap("../images/barres_combats/halo_combat_ulti.bmp", NULL);
    valise->pause = load_bitmap("../images/sprite/boutons_menu/bouton_pause.bmp",NULL);
    valise->reprendre = load_bitmap("../images/sprite/boutons_menu/reprendre.bmp",NULL);
    valise->sauvegarde = load_bitmap("../images/sprite/boutons_menu/sauvegarder.bmp",NULL);
    valise->case_attaque = load_bitmap("../images/sprite/cases/cases_rouge.bmp",NULL);
    valise->cyprien = load_bitmap("../images/sprite/credits/cyprien.bmp",NULL);
    valise->jn = load_bitmap("../images/sprite/credits/jn.bmp",NULL);
    valise->pa = load_bitmap("../images/sprite/credits/paul.bmp",NULL);
    valise->jules = load_bitmap("../images/sprite/credits/jules.bmp",NULL);
    valise->equipe = load_bitmap("../images/sprite/boutons_menu/equipe.bmp",NULL);
    valise->contact1 = load_bitmap("../images/sprite/boutons_menu/contactcyp.bmp",NULL);
    valise->contact2 = load_bitmap("../images/sprite/boutons_menu/contactjules.bmp",NULL);
    valise->contact3 = load_bitmap("../images/sprite/boutons_menu/contactpa.bmp",NULL);
    valise->contact4 = load_bitmap("../images/sprite/boutons_menu/contactjn.bmp",NULL);
    valise->retour = load_bitmap("../images/sprite/boutons_menu/retour.bmp",NULL);
    valise->cases_possibles = load_bitmap("../images/sprite/cases/cases_bleue2.bmp",NULL);
    valise->select = load_bitmap("../images/sprite/cases/cases_verte.bmp",NULL);
    valise->arbre = load_bitmap("../images/sprite/cases/arbre.bmp",NULL);
    valise->perso1 = load_bitmap("../images/sprite/personnage_temporaire/perso1.bmp",NULL);
    valise->bloque = load_bitmap("../images/sprite/cases/cases_not_okey.bmp",NULL);
    valise->barre_perso= load_bitmap("../images/sprite/interface_utilisateur/barre_perso.bmp",NULL);
    valise->massue= load_bitmap("../images/sprite/enkidu/massue.bmp",NULL);

    valise->fond_babylone = load_bitmap("../images/decor/palace.bmp",NULL);
    valise->carte_gilg = load_bitmap("../images/sprite/choix_joueur/gilgamesh/cadran_gilga.bmp",NULL);
    valise->carte_isht = load_bitmap("../images/sprite/choix_joueur/ishtar/cadran_ishtar.bmp",NULL);
    valise->carte_enki = load_bitmap("../images/sprite/choix_joueur/enkidu/cadran_enkidu.bmp",NULL);
    valise->carte_eresh = load_bitmap("../images/sprite/choix_joueur/ereshkigal/cadran_eresh.bmp",NULL);
    valise->carte_gilg_select = load_bitmap("../images/sprite/choix_joueur/gilgamesh/cadran_gilga_select.bmp",NULL);
    valise->carte_isht_select = load_bitmap("../images/sprite/choix_joueur/ishtar/cadran_ishtar_select.bmp",NULL);
    valise->carte_enki_select = load_bitmap("../images/sprite/choix_joueur/enkidu/cadran_enkidu_select.bmp",NULL);
    valise->carte_eresh_select = load_bitmap("../images/sprite/choix_joueur/ereshkigal/cadran_eresh_select.bmp",NULL);
    valise->fond_ziggu_jour = load_bitmap("../images/decor/ziggurat_jour.bmp",NULL);
    valise->fond_ziggu_nuit =load_bitmap("../images/decor/Ziggurat_nuit.bmp",NULL);
    valise->fond_ruines=load_bitmap("../images/decor/image_ruine.bmp",NULL);
    valise->mur_babylone=load_bitmap("../images/decor/mur_bleu.bmp",NULL);
    valise->dessin_gilg = load_bitmap("../images/sprite/choix_joueur/gilgamesh/Gilgamesh_dessin.bmp",NULL);
    valise->dessin_isht = load_bitmap("../images/sprite/choix_joueur/ishtar/ishtar_dessin.bmp",NULL);
    valise->dessin_enki = load_bitmap("../images/sprite/choix_joueur/enkidu/enkidu_dessin.bmp",NULL);
    valise->dessin_eresh = load_bitmap("../images/sprite/choix_joueur/ereshkigal/ereshkigal_dessin.bmp",NULL);
    valise->cadran_hist_gilg = load_bitmap("../images/sprite/choix_joueur/gilgamesh/cadran_hist_gilg.bmp",NULL);
    valise->cadran_hist_enki = load_bitmap("../images/sprite/choix_joueur/enkidu/cadran_hist_enki.bmp",NULL);
    valise->cadran_hist_isht = load_bitmap("../images/sprite/choix_joueur/ishtar/cadran_hist_isht.bmp",NULL);
    valise->cadran_hist_eresh = load_bitmap("../images/sprite/choix_joueur/ereshkigal/cadran_hist_eresh.bmp",NULL);
    valise->cadran_nom_gilg = load_bitmap("../images/sprite/choix_joueur/gilgamesh/cadran_nom.bmp",NULL);
    valise->cadran_nom_enki = load_bitmap("../images/sprite/choix_joueur/enkidu/cadran_nom.bmp",NULL);
    valise->cadran_nom_isht = load_bitmap("../images/sprite/choix_joueur/ishtar/cadran_nom.bmp",NULL);
    valise->cadran_nom_eresh = load_bitmap("../images/sprite/choix_joueur/ereshkigal/cadran_nom.bmp",NULL);
    valise->cadran_stat_gilg = load_bitmap("../images/sprite/choix_joueur/gilgamesh/cadran_stat.bmp",NULL);
    valise->cadran_stat_enki = load_bitmap("../images/sprite/choix_joueur/enkidu/cadran_stat.bmp",NULL);
    valise->cadran_stat_isht = load_bitmap("../images/sprite/choix_joueur/ishtar/cadran_stat.bmp",NULL);
    valise->cadran_stat_eresh = load_bitmap("../images/sprite/choix_joueur/ereshkigal/cadran_stat.bmp",NULL);
    valise->cadran_sort_gilg = load_bitmap("../images/sprite/choix_joueur/gilgamesh/cadran_sort.bmp",NULL);
    valise->cadran_sort_enki = load_bitmap("../images/sprite/choix_joueur/enkidu/cadran_sort.bmp",NULL);
    valise->cadran_sort_isht = load_bitmap("../images/sprite/choix_joueur/ishtar/cadran_sort.bmp",NULL);
    valise->cadran_sort_eresh = load_bitmap("../images/sprite/choix_joueur/ereshkigal/cadran_sort.bmp",NULL);
    valise->choisir_classe = load_bitmap("../images/sprite/choix_joueur/boutons/choix_classe.bmp",NULL);
    valise->bouton_retour_class = load_bitmap("../images/sprite/choix_joueur/boutons/bouton_retour.bmp",NULL);
    valise->haut_de_page = load_bitmap("../images/sprite/choix_joueur/cadrans/haut_de_page.bmp",NULL);
    valise->tete_gilg = load_bitmap("../images/sprite/choix_joueur/gilgamesh/tete.bmp",NULL);
    valise->tete_enki = load_bitmap("../images/sprite/choix_joueur/enkidu/tete.bmp",NULL);
    valise->tete_isht = load_bitmap("../images/sprite/choix_joueur/ishtar/tete.bmp",NULL);
    valise->tete_eresh = load_bitmap("../images/sprite/choix_joueur/ereshkigal/tete.bmp",NULL);
    valise->tete_gilg_select = load_bitmap("../images/sprite/choix_joueur/gilgamesh/tete_select.bmp",NULL);
    valise->tete_enki_select = load_bitmap("../images/sprite/choix_joueur/enkidu/tete_select.bmp",NULL);
    valise->tete_isht_select = load_bitmap("../images/sprite/choix_joueur/ishtar/tete_select.bmp",NULL);
    valise->tete_eresh_select = load_bitmap("../images/sprite/choix_joueur/ereshkigal/tete_select.bmp",NULL);
    valise->bouton_2_j=load_bitmap("../images/sprite/choix_joueur/nb_joueurs/bouton_2_joueurs.bmp",NULL);
    valise->bouton_3_j=load_bitmap("../images/sprite/choix_joueur/nb_joueurs/bouton_3_joueurs.bmp",NULL);
    valise->bouton_4_j=load_bitmap("../images/sprite/choix_joueur/nb_joueurs/bouton_4_joueurs.bmp",NULL);
    valise->cadran_nb_j = load_bitmap("../images/sprite/choix_joueur/nb_joueurs/cadran_nb_j.bmp",NULL);
    valise->cadran_lancement= load_bitmap("../images/sprite/choix_joueur/cadrans/lancement jeu.bmp",NULL);
    valise->joueur_suivant = load_bitmap("../images/sprite/boutons_menu/joueur_suivant.bmp",NULL);
    valise->map=load_bitmap("../images/map/map.bmp",NULL);

    valise->barre_ishtar = load_bitmap("../images/barres_combats/ishtar.bmp", NULL);
    valise->barre_gilgamesh = load_bitmap("../images/barres_combats/gilgamesh.bmp", NULL);
    valise->barre_enkidu = load_bitmap("../images/barres_combats/enkidu.bmp", NULL);
    valise->barre_ereshkigal = load_bitmap("../images/barres_combats/ereshkigal.bmp", NULL);
    valise->halo_combat = load_bitmap("../images/barres_combats/halo_combat.bmp", NULL);
    valise->bouton_combat = load_bitmap("../images/barres_combats/bouton_combat.bmp", NULL);

    valise->cases_rouges = load_bitmap("../images/sprite/cases/cases_rouge.bmp",NULL);
    valise->occu_ulti1=0;
    valise->occu_ulti2=0;
    valise->occu_ulti3=0;
    valise->occu_ulti4=0;
    valise->affich_sprite=0;
    valise->ulti_lance=0;
    valise->pour_ulti=0;
    valise->a_qui_ltour=0;

    for(int i=0; i<10; i++)
    {
        valise->noble_fantasme_ishtar[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_ishtar,"../images/noble_fantamse/ishtar/ishtar00%d.bmp",i);
        valise->noble_fantasme_ishtar[i]=load_bitmap(valise->nf_ishtar,NULL);
    }
    for(int i=10; i<100; i++)
    {
        valise->noble_fantasme_ishtar[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_ishtar,"../images/noble_fantamse/ishtar/ishtar0%d.bmp",i);
        valise->noble_fantasme_ishtar[i]=load_bitmap(valise->nf_ishtar,NULL);
    }
    for(int i=100; i<341; i++)
    {
        valise->noble_fantasme_ishtar[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_ishtar,"../images/noble_fantamse/ishtar/ishtar%d.bmp",i);
        valise->noble_fantasme_ishtar[i]=load_bitmap(valise->nf_ishtar,NULL);
    }



    for(int i=0; i<10; i++)
    {
        valise->noble_fantasme_gilgamesh[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_gilg,"../images/noble_fantamse/gilgamesh/gilgamesh00%d.bmp",i);
        valise->noble_fantasme_gilgamesh[i]=load_bitmap(valise->nf_gilg,NULL);
    }
    for(int i=10; i<100; i++)
    {
        valise->noble_fantasme_gilgamesh[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_gilg,"../images/noble_fantamse/gilgamesh/gilgamesh0%d.bmp",i);
        valise->noble_fantasme_gilgamesh[i]=load_bitmap(valise->nf_gilg,NULL);
    }
    for(int i=100; i<404; i++)
    {
        valise->noble_fantasme_gilgamesh[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_gilg,"../images/noble_fantamse/gilgamesh/gilgamesh%d.bmp",i);
        valise->noble_fantasme_gilgamesh[i]=load_bitmap(valise->nf_gilg,NULL);
    }


    for(int i=0; i<10; i++)
    {
        valise->noble_fantasme_enkidu[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_enki,"../images/noble_fantamse/enkidu/enkidu00%d.bmp",i);
        valise->noble_fantasme_enkidu[i]=load_bitmap(valise->nf_enki,NULL);
    }
    for(int i=10; i<100; i++)
    {
        valise->noble_fantasme_enkidu[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_enki,"../images/noble_fantamse/enkidu/enkidu0%d.bmp",i);
        valise->noble_fantasme_enkidu[i]=load_bitmap(valise->nf_enki,NULL);
    }
    for(int i=100; i<309; i++)
    {
        valise->noble_fantasme_enkidu[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_enki,"../images/noble_fantamse/enkidu/enkidu%d.bmp",i);
        valise->noble_fantasme_enkidu[i]=load_bitmap(valise->nf_enki,NULL);
    }




    for(int i=0; i<10; i++)
    {
        valise->noble_fantasme_ereshkigal[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_eresh,"../images/noble_fantamse/ereshkigal/ereshkigal00%d.bmp",i);
        valise->noble_fantasme_ereshkigal[i]=load_bitmap(valise->nf_eresh,NULL);
    }
    for(int i=10; i<100; i++)
    {
        valise->noble_fantasme_ereshkigal[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_eresh,"../images/noble_fantamse/ereshkigal/ereshkigal0%d.bmp",i);
        valise->noble_fantasme_ereshkigal[i]=load_bitmap(valise->nf_eresh,NULL);
    }
    for(int i=100; i<508; i++)
    {
        valise->noble_fantasme_ereshkigal[i]=(BITMAP*)malloc(sizeof(BITMAP));
        sprintf(valise->nf_eresh,"../images/noble_fantamse/ereshkigal/ereshkigal%d.bmp",i);
        valise->noble_fantasme_ereshkigal[i]=load_bitmap(valise->nf_eresh,NULL);
    }

    valise->music_1 = load_wav("../music/theme-du-jeu.wav");

    char w[50];
    sprintf(w,"../fichiers_textes/map%d.txt",rand()%4+1);
    valise->fic = fopen(w, "r");

    valise->nombre_joueurs=1;
    valise->alterner_joueur=0;
    valise->choix_menu=0;
    valise->choice_class=0;

    valise->cases_ok = makecol(113, 155, 255);
    valise->attaque_ok = makecol(255,0,30);
    valise->joueur_actuel=0;
    valise->statut_joueur[valise->nombre_joueurs]=0;

    valise->d1=0;
    valise->d2=0;
    valise->d3=0;
    valise->d4=0;
    valise->occu_nb1=0;
    valise->occu_nb2=0;
    valise->occu_nb3=0;
    valise->occu_nb4=0;

    valise->gilg_select=0;
    valise->isht_select=0;
    valise->enki_select=0;
    valise->eresh_select=0;
    valise->rest_nb_j=0;
    valise->occurence_choix_class=0;
    valise->rest_lancement1=0;
    valise->rest_lancement2=0;
    valise->rest_lancement3=0;
    valise->oui=0;
    valise->actif=0;
    valise->alterner_jeu1=0;
    valise->alterner_jeu2=0;
    valise->alterner_jeu3=0;
    valise->alterner_jeu4=0;
}


///-------------------------------------------------------------------------------------------------------------------------------------
///------------------------------------------------------------- INITIALISATION DES JOUEURS  -------------------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------


void init_joueurs(t_valise valise, t_player* player[4], t_cases cases[17][17])
{
    for(int i=0; i<4; i++)
    {
        player[i]=(t_player*)malloc(sizeof(t_player));
    }

    if(valise.nombre_joueurs==1)
    {


        player[0]->pos_x=cases[3][2].pos_x_centre;
        player[0]->pos_y=cases[3][2].pos_y_centre;
        player[0]->numero_ligne=cases[3][2].numero_ligne;
        player[0]->numero_colonne=cases[3][2].numero_colonne;


    }

}

void initialisation(t_player* player,t_valise* valise,t_cases cases[17][17])
{


//---------------------------------------------------------POSITION

    int k = rand()%17;
    int l = rand()%17;
    if(cases[k][l].type_cases == 6 || cases[k][l].type_cases == 5)
    {
        k = rand()%17;
        l = rand()%17;
    }
    player->pos_x=cases[k][l].pos_x_centre;
    player->pos_y=cases[k][l].pos_y_centre;
    player->numero_ligne=cases[k][l].numero_ligne;
    player->numero_colonne=cases[k][l].numero_colonne;

//----------------------------------------------------------COUT PA--------------------------------

    player->attaque.cout_pa_cac=2;
    player->attaque.cout_pa_spell_1=2;
    player->attaque.cout_pa_spell_2=3;
    player->attaque.cout_pa_spell_3=4;
    player->attaque.cout_pa_spell_4=6;

//----------------------------------------------------------DEGATS--------------------------------


    player->attaque.degat_attaque_cac=rand()%(10+1);
    player->attaque.degat_spell_1=rand()%(100-50+1)+50; //nbr aleatoire entre 15 et 5
    player->attaque.degat_spell_2=rand()%(20-10+1)+10;
    player->attaque.degat_spell_3=rand()%(40-25+1)+25;
    player->attaque.degat_spell_4=rand()%(200-100+1)+100;

//----------------------------------------------------------PROBABILITES--------------------------

    player->attaque.proba_cac=rand()%(10);//100%
    player->attaque.proba_spell_1=rand()%(10);//80%
    player->attaque.proba_spell_2=rand()%(10);//70%
    player->attaque.proba_spell_3=rand()%(10);//50%
    player->attaque.proba_spell_4=rand()%(10);//30%

//----------------------------------------------------------COOL-DOWN-----------------------------

    player->attaque.cool_down_spell_4=3;

//----------------------------------------------------------STAT PERSO----------------------------

    player->nb_PV=300;
    player->nb_PM=3;
    player->nb_PA=6;
//------------------------------------------------------------------------------------------------
    //player->attaque.quelle_classe=0;


//----------------------------------------------------------joueur_actuel----------------------------


}




///-------------------------------------------------------------------------------------------------------------------------------------
///------------------------------------------------------------- Affichage d'un curseur stylise ----------------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------


void affichage_curseur(t_valise valise)
{
    stretch_sprite(valise.double_buffer,valise.curseur,mouse_x,mouse_y,30,30);
}


///-------------------------------------------------------------------------------------------------------------------------------------
///----------------------------------------------------------- JOUER UNE/DES MUSIQUES --------------------------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------


void jouer_music(t_valise* valise)
{
    play_sample(valise->music_1,255,128,1000,2);
}

///-------------------------------------------------------------------------------------------------------------------------------------
///----------------------------------------------------------- ARRETER UNE/DES MUSIQUES --------------------------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------


void stop_music(t_valise valise)
{
    stop_sample(valise.music_1);
}


///-------------------------------------------------------------------------------------------------------------------------------------
///----------------------------------------------------------- AFFICHER PLATEAU --------------------------------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------


void affichage_plateau(t_valise* valise, t_cases cases[17][17])
{
    int pos_x;
    int pos_y;
    int ajout_x;
    int ajout_y;


    pos_x=600;
    pos_y=100;
    ajout_x=0;
    ajout_y=0;

    for(int i=0; i<17; i++)
    {

        for(int j=0; j<17; j++)
        {
            if(cases[i][j].type_cases==5)
            {

                stretch_sprite(valise->double_buffer,valise->plateforme,pos_x+ajout_x,pos_y+ajout_y,SCREEN_W/18,SCREEN_H/18);
                stretch_sprite(valise->double_buffer,valise->arbre,pos_x+ajout_x,pos_y+ajout_y-16,SCREEN_W/18,SCREEN_H/18);
            }
            else if(cases[i][j].type_cases==0 ||cases[i][j].type_cases==1 ||cases[i][j].type_cases==2 ||cases[i][j].type_cases==3 ||cases[i][j].type_cases==4)
            {
                stretch_sprite(valise->double_buffer,valise->plateforme,pos_x+ajout_x,pos_y+ajout_y,SCREEN_W/18,SCREEN_H/18);
            }
            else if(cases[i][j].type_cases == 6)
            {

            }


            ajout_x+=DIAG_X/2;
            ajout_y+=DIAG_Y/2;
        }
        ajout_x=0;
        ajout_y=0;
        pos_x-=DIAG_X/2;
        pos_y+=DIAG_Y/2;
    }
}

///-------------------------------------------------------------------------------------------------------------------------------------
///------------------------------------------------------------- INITIALISATION DES CASES -------------------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------


void crea_struct_cases(t_valise valise, t_cases cases[17][17])
{
    int ajout_x=0;
    int ajout_y=0;
    int pos_x=600;
    int pos_y=100;
    int pos_x_centre=635;
    int pos_y_centre=114;

    srand(time(NULL));


    for(int i=0; i<17; i++)
    {
        for(int j=0; j<17; j++)
        {
            sprintf(cases[i][j].numero_cases,"case ( %d , %d )",i,j);
            cases[i][j].pos_x=pos_x+ajout_x;
            cases[i][j].pos_y=pos_y+ajout_y;
            cases[i][j].pos_x_centre=pos_x_centre+ajout_x;
            cases[i][j].pos_y_centre=pos_y_centre+ajout_y;
            /*valise.pourcentage_obst = rand()%100;
            if (valise.pourcentage_obst <= TAUX_OBST)
               cases[i][j].type_cases=0;
            else
               cases[i][j].type_cases=1;*/
            fscanf(valise.fic, "%d", &cases[i][j].type_cases);


            cases[i][j].numero_ligne=i;
            cases[i][j].numero_colonne=j;

            ajout_x+=DIAG_X/2;
            ajout_y+=DIAG_Y/2;
        }
        ajout_x=0;
        ajout_y=0;
        pos_x-=DIAG_X/2;
        pos_y+=DIAG_Y/2;
        pos_x_centre-=DIAG_X/2;
        pos_y_centre+=DIAG_Y/2;

    }


}


///-------------------------------------------------------------------------------------------------------------------------------------
///----------------------------------- SOUS PROGRAMME PERMETTANT DE SAVOIR SI LA SOURIS EST SUR UNE CASE--------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------


int is_in_case(t_cases cases)
{
    int difference_mx=0;
    int difference_my=0;
    float total;


    difference_mx = mouse_x - cases.pos_x_centre;
    difference_my = mouse_y - cases.pos_y_centre;

    difference_mx = abs(difference_mx);
    difference_my = abs(difference_my);
    total = (float)difference_mx/ (float)DIAG_X + (float)difference_my/(float)DIAG_Y;

    if(total  <(1./2) && (cases.type_cases!=6))
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return 0;
}

///-------------------------------------------------------------------------------------------------------------------------------------
///----------------------------------- SOUS PROGRAMME PERMETTANT DE SAVOIR SI LA SOURIS EST SUR UNE CASE--------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------
///----------------------------------- SOUS PROGRAMME PERMETTANT DE SAVOIR SI LA SOURIS EST SUR UNE CASE--------------------------------
///-------------------------------------------------------------------------------------------------------------------------------------

void calcul_itineraire(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies)
{
    if(cases[player->numero_ligne][player->numero_colonne+1].type_cases==0)
    {
        textprintf_ex(valise->double_buffer,font,100,90,makecol(0,200,255),-1,"la case a droite est un trou");
    }

    if(cases[player->numero_ligne][player->numero_colonne-1].type_cases==0)
    {
        textprintf_ex(valise->double_buffer,font,100,100,makecol(0,200,255),-1,"la case a gauche est un trou");
    }

    if(cases[player->numero_ligne+1][player->numero_colonne].type_cases==0)
    {
        textprintf_ex(valise->double_buffer,font,100,110,makecol(0,200,255),-1,"la case en bas est un trou");
    }

    if(cases[player->numero_ligne-1][player->numero_colonne].type_cases==0)
    {
        textprintf_ex(valise->double_buffer,font,100,120,makecol(0,200,255),-1,"la case en haut est un trou");
    }
}

void choix_deplacement(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies)
{
    for(int k=0; k<17; k++)
    {
        for(int l=0; l<17; l++)
        {
            if((abs(cases[k][l].numero_ligne-player->numero_ligne)+abs(cases[k][l].numero_colonne-player->numero_colonne))<=player->nb_PM && cases[k][l].type_cases == 0)
            {
                stretch_sprite(valise->double_buffer,valise->cases_possibles,cases[k][l].pos_x,cases[k][l].pos_y,SCREEN_W/18,SCREEN_H/18);

                /// les cases a droite du joueurs sont des obstacle
                if(cases[player->numero_ligne][player->numero_colonne+1].type_cases!=0 && cases[player->numero_ligne][player->numero_colonne+2].type_cases==0)
                {
                    stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne][player->numero_colonne+2].pos_x,cases[player->numero_ligne][player->numero_colonne+2].pos_y,SCREEN_W/18,SCREEN_H/18);
                    if (cases[player->numero_ligne][player->numero_colonne+2].type_cases==0)
                        stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne][player->numero_colonne+3].pos_x,cases[player->numero_ligne][player->numero_colonne+3].pos_y,SCREEN_W/18,SCREEN_H/18);

                }

                if(cases[player->numero_ligne][player->numero_colonne+2].type_cases!=0 && cases[player->numero_ligne][player->numero_colonne+3].type_cases==0)
                    stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne][player->numero_colonne+3].pos_x,cases[player->numero_ligne][player->numero_colonne+3].pos_y,SCREEN_W/18,SCREEN_H/18);


                /// les cases a gauche du joueurs sont des obstacle
                if(cases[player->numero_ligne][player->numero_colonne-1].type_cases!=0 && cases[player->numero_ligne][player->numero_colonne-2].type_cases==0)
                {
                    stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne][player->numero_colonne-2].pos_x,cases[player->numero_ligne][player->numero_colonne-2].pos_y,SCREEN_W/18,SCREEN_H/18);
                    if (cases[player->numero_ligne][player->numero_colonne-2].type_cases==0)
                        stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne][player->numero_colonne-3].pos_x,cases[player->numero_ligne][player->numero_colonne-3].pos_y,SCREEN_W/18,SCREEN_H/18);

                }

                if(cases[player->numero_ligne][player->numero_colonne-2].type_cases!=0 && cases[player->numero_ligne][player->numero_colonne-3].type_cases==0)
                    stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne][player->numero_colonne-3].pos_x,cases[player->numero_ligne][player->numero_colonne-3].pos_y,SCREEN_W/18,SCREEN_H/18);


                /// les cases au dessus du joueurs sont des obstacle
                if(cases[player->numero_ligne-1][player->numero_colonne].type_cases!=0 && cases[player->numero_ligne-2][player->numero_colonne].type_cases==0)
                {
                    stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne-2][player->numero_colonne].pos_x,cases[player->numero_ligne-2][player->numero_colonne].pos_y,SCREEN_W/18,SCREEN_H/18);
                    if (cases[player->numero_ligne-2][player->numero_colonne].type_cases==0)
                        stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne-3][player->numero_colonne].pos_x,cases[player->numero_ligne-3][player->numero_colonne].pos_y,SCREEN_W/18,SCREEN_H/18);

                }

                if(cases[player->numero_ligne-2][player->numero_colonne].type_cases!=0 && cases[player->numero_ligne-3][player->numero_colonne].type_cases==0)
                    stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne-3][player->numero_colonne].pos_x,cases[player->numero_ligne-3][player->numero_colonne].pos_y,SCREEN_W/18,SCREEN_H/18);

                /// les cases en dessous du joueurs sont des obstacle
                if(cases[player->numero_ligne+1][player->numero_colonne].type_cases!=0 && cases[player->numero_ligne+2][player->numero_colonne].type_cases==0)
                {
                    stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne+2][player->numero_colonne].pos_x,cases[player->numero_ligne+2][player->numero_colonne].pos_y,SCREEN_W/18,SCREEN_H/18);
                    if (cases[player->numero_ligne+2][player->numero_colonne].type_cases==0)
                        stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne+3][player->numero_colonne].pos_x,cases[player->numero_ligne+3][player->numero_colonne].pos_y,SCREEN_W/18,SCREEN_H/18);

                }

                if(cases[player->numero_ligne+2][player->numero_colonne].type_cases!=0 && cases[player->numero_ligne+3][player->numero_colonne].type_cases==0)
                    stretch_sprite(valise->double_buffer,valise->bloque,cases[player->numero_ligne+3][player->numero_colonne].pos_x,cases[player->numero_ligne+3][player->numero_colonne].pos_y,SCREEN_W/18,SCREEN_H/18);
            }
        }
    }
}

void barre_combat(t_valise* valise, t_player* player)
{
    if(player->attaque.quelle_classe == 1)
    {
        stretch_sprite(valise->double_buffer,valise->barre_gilgamesh,-170,340,1300,470);
    }
    if(player->attaque.quelle_classe == 2)
    {
        stretch_sprite(valise->double_buffer,valise->barre_ishtar,-170,340,1300,470);
    }
    if(player->attaque.quelle_classe == 3)
    {
        stretch_sprite(valise->double_buffer,valise->barre_enkidu,-170,340,1300,470);
    }
    if(player->attaque.quelle_classe == 4)
    {
        stretch_sprite(valise->double_buffer,valise->barre_ereshkigal,-170,340,1300,470);
    }
}

void phase_de_jeu1(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies)
{
    if(valise->actif==0)
    {
        barre_combat(valise, player);
        if(valise->alterner_jeu1==0)
        {

            choix_deplacement(valise, player, cases, cases_choisies);
            if(valise->alterner_joueur==0)
            {
                rest(100);
                cases_choisies->numero_ligne= player->numero_ligne;
                cases_choisies->numero_colonne=player->numero_colonne;
                player->nb_PA=6;
                player->nb_PM=3;
                valise->ulti_lance=0;
                //valise->a_qui_ltour=0;
                valise->alterner_joueur=1;
            }
            for(int i=0; i<17; i++)
            {
                for(int j=0; j<17; j++)
                {
                    if(is_in_case(cases[i][j])==1 && getpixel(valise->double_buffer, mouse_x, mouse_y) == valise->cases_ok)
                    {
                        stretch_sprite(valise->double_buffer,valise->select,cases[i][j].pos_x,cases[i][j].pos_y,SCREEN_W/18,SCREEN_H/18);
                        if(mouse_b&1)
                        {
                            cases_choisies->numero_ligne= cases[i][j].numero_ligne;
                            cases_choisies->numero_colonne=cases[i][j].numero_colonne;
                            cases[player->numero_ligne][player->numero_colonne].type_cases = 0;
                        }
                    }
                }
            }

            if(player->numero_ligne != cases_choisies->numero_ligne || player->numero_colonne != cases_choisies->numero_colonne)
            {
                deplacement_case_p_cases(cases_choisies,player,valise, cases);
            }


            if((player->numero_ligne == cases_choisies->numero_ligne && player->numero_colonne == cases_choisies->numero_colonne))
            {
                cases[player->numero_ligne][player->numero_colonne].type_cases = player->attaque.quelle_classe;
                //rectfill(valise->double_buffer, 1155, 640, 1255, 680, makecol(255, 255, 255));
                stretch_sprite(valise->double_buffer,valise->bouton_combat,1155,640,100,40);
                if(((mouse_x>=1155)&&(mouse_x<=1255))&&((mouse_y>=640)&&(mouse_y<=680)))
                {
                    // rectfill(valise->double_buffer, 1150, 635, 1260, 685, makecol(255, 255, 255));
                    stretch_sprite(valise->double_buffer,valise->bouton_combat,1150,635,110,50);
                    if(mouse_b & 1)
                    {
                        valise->alterner_jeu1=1;
                    }
                }
            }
        }
        if(valise->occu_ulti1>=3)
        {
            stretch_sprite(valise->double_buffer,valise->halo_combat_rouge,896,712,80,70);
            if(valise->ulti_lance!=0)
            {
                valise->occu_ulti1=0;
            }
        }

        if(valise->alterner_jeu1==1)
        {
            choix_attaque(valise, player, cases, cases_choisies);
        }
        if(valise->alterner_jeu1 == 2)
        {

        }
        if(valise->alterner_jeu1==1)
        {
            choix_attaque(valise, player, cases, cases_choisies);
        }

        if(valise->alterner_jeu1==4)
        {
            valise->affich_sprite=1;
            noble_fantasme(valise,player);

        }
        if(valise->affich_sprite==0)
        {

            stretch_sprite(valise->double_buffer,valise->joueur_suivant,1180,715,70,70);
            if(pow(1205-mouse_x,2)+pow(750-mouse_y,2)<=pow(35,2) )
            {
                stretch_sprite(valise->double_buffer,valise->joueur_suivant,1170,705,90,90);
                if(mouse_b&1)
                {
                    valise->a_qui_ltour=1;
                    valise->occu_ulti1+=1;
                    valise->actif = 1;
                    valise->alterner_jeu2=0;


                }
            }
        }
    }
}


void phase_de_jeu2(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies)
{


    if(valise->actif==1)
    {
        barre_combat(valise, player);
        if(valise->alterner_jeu2==0)
        {
            choix_deplacement(valise, player, cases, cases_choisies);
            if(valise->alterner_joueur==1)
            {
                rest(100);
                cases_choisies->numero_ligne= player->numero_ligne;
                cases_choisies->numero_colonne=player->numero_colonne;
                player->nb_PA=6;
                player->nb_PM=3;
                valise->ulti_lance=0;
                if(valise->nombre_joueurs>2)
                    valise->alterner_joueur=2;
                else
                    valise->alterner_joueur=0;

            }
            for(int i=0; i<17; i++)
            {
                for(int j=0; j<17; j++)
                {
                    if(is_in_case(cases[i][j])==1 && getpixel(valise->double_buffer, mouse_x, mouse_y) == valise->cases_ok)
                    {
                        stretch_sprite(valise->double_buffer,valise->select,cases[i][j].pos_x,cases[i][j].pos_y,SCREEN_W/18,SCREEN_H/18);
                        if(mouse_b&1)
                        {
                            cases_choisies->numero_ligne= cases[i][j].numero_ligne;
                            cases_choisies->numero_colonne=cases[i][j].numero_colonne;
                            cases[player->numero_ligne][player->numero_colonne].type_cases = 0;
                        }
                    }
                }
            }


            if(player->numero_ligne != cases_choisies->numero_ligne || player->numero_colonne != cases_choisies->numero_colonne)
            {
                deplacement_case_p_cases(cases_choisies,player,valise, cases);

            }
            if((player->numero_ligne == cases_choisies->numero_ligne && player->numero_colonne == cases_choisies->numero_colonne))
            {
                cases[player->numero_ligne][player->numero_colonne].type_cases = player->attaque.quelle_classe;
                // rectfill(valise->double_buffer, 1155, 640, 1255, 680, makecol(255, 255, 255));
                stretch_sprite(valise->double_buffer,valise->bouton_combat,1155,640,100,40);
                if(((mouse_x>=1155)&&(mouse_x<=1255))&&((mouse_y>=640)&&(mouse_y<=680)))
                {
                    //rectfill(valise->double_buffer, 1150, 635, 1260, 685, makecol(255, 255, 255));
                    stretch_sprite(valise->double_buffer,valise->bouton_combat,1150,635,110,50);
                    if(mouse_b & 1)
                    {
                        valise->alterner_jeu2=1;
                    }
                }
            }
        }
        if(valise->occu_ulti2>=3)
        {
            stretch_sprite(valise->double_buffer,valise->halo_combat_rouge,896,712,80,70);
            if(valise->ulti_lance!=0)
            {
                valise->occu_ulti2=0;
            }
        }
        if(valise->alterner_jeu2==1)
        {
            choix_attaque(valise, player, cases, cases_choisies);
        }
        if(valise->alterner_jeu2==4)
        {
            valise->affich_sprite=1;
            noble_fantasme(valise,player);
        }
        if(valise->affich_sprite==0)
        {

            stretch_sprite(valise->double_buffer,valise->joueur_suivant,1180,715,70,70);
            if(pow(1205-mouse_x,2)+pow(750-mouse_y,2)<=pow(35,2))
            {
                stretch_sprite(valise->double_buffer,valise->joueur_suivant,1170,705,90,90);
                if(mouse_b&1)
                {
                    if(valise->nombre_joueurs>2)
                    {
                        valise->occu_ulti2+=1;
                        valise->alterner_jeu3=0;
                        valise->actif = 2;

                    }
                    else
                    {
                        valise->a_qui_ltour=0;
                        valise->occu_ulti2+=1;
                        valise->alterner_jeu1=0;
                        valise->actif = 0;
                    }
                }
            }
        }
    }
}

void phase_de_jeu3(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies)
{

    if(valise->actif==2)
    {
        barre_combat(valise, player);
        if(valise->alterner_jeu3==0)
        {

            choix_deplacement(valise, player, cases, cases_choisies);
            if(valise->alterner_joueur==2)
            {
                rest(100);
                cases_choisies->numero_ligne= player->numero_ligne;
                cases_choisies->numero_colonne=player->numero_colonne;
                player->nb_PA=6;
                player->nb_PM=3;
                valise->ulti_lance=0;
                valise->a_qui_ltour=2;
                if(valise->nombre_joueurs>3)
                    valise->alterner_joueur=3;
                else
                    valise->alterner_joueur=0;
            }
            for(int i=0; i<17; i++)
            {
                for(int j=0; j<17; j++)
                {
                    if(is_in_case(cases[i][j])==1 && getpixel(valise->double_buffer, mouse_x, mouse_y) == valise->cases_ok)
                    {
                        stretch_sprite(valise->double_buffer,valise->select,cases[i][j].pos_x,cases[i][j].pos_y,SCREEN_W/18,SCREEN_H/18);
                        if(mouse_b&1)
                        {
                            cases_choisies->numero_ligne= cases[i][j].numero_ligne;
                            cases_choisies->numero_colonne=cases[i][j].numero_colonne;
                            cases[player->numero_ligne][player->numero_colonne].type_cases = 0;
                        }
                    }
                }
            }

            if(player->numero_ligne != cases_choisies->numero_ligne || player->numero_colonne != cases_choisies->numero_colonne)
            {
                deplacement_case_p_cases(cases_choisies,player,valise, cases);

            }
            if((player->numero_ligne == cases_choisies->numero_ligne && player->numero_colonne == cases_choisies->numero_colonne))
            {
                cases[player->numero_ligne][player->numero_colonne].type_cases = player->attaque.quelle_classe;
                //rectfill(valise->double_buffer, 1155, 640, 1255, 680, makecol(255, 255, 255));
                stretch_sprite(valise->double_buffer,valise->bouton_combat,1155,640,100,40);
                if(((mouse_x>=1155)&&(mouse_x<=1255))&&((mouse_y>=640)&&(mouse_y<=680)))
                {
                    //rectfill(valise->double_buffer, 1150, 635, 1260, 685, makecol(255, 255, 255));
                    stretch_sprite(valise->double_buffer,valise->bouton_combat,1150,635,110,50);
                    if(mouse_b & 1)
                    {
                        valise->alterner_jeu3=1;
                    }
                }
            }
        }
        if(valise->occu_ulti3>=3)
        {
            stretch_sprite(valise->double_buffer,valise->halo_combat_rouge,896,712,80,70);
            if(valise->ulti_lance!=0)
            {
                valise->occu_ulti3=0;
            }
        }
        if(valise->alterner_jeu3==1)
        {
            choix_attaque(valise, player, cases, cases_choisies);
        }
        if(valise->alterner_jeu3==4)
        {
            valise->affich_sprite=1;
            noble_fantasme(valise,player);
        }
        if(valise->affich_sprite==0)
        {

            stretch_sprite(valise->double_buffer,valise->joueur_suivant,1180,715,70,70);
            if(pow(1205-mouse_x,2)+pow(750-mouse_y,2)<=pow(35,2))
            {
                stretch_sprite(valise->double_buffer,valise->joueur_suivant,1170,705,90,90);
                if(mouse_b&1)
                {
                    if(valise->nombre_joueurs>3)
                    {
                        valise->occu_ulti3+=1;
                        valise->alterner_jeu4=0;
                        valise->actif = 3;
                    }
                    else
                    {
                        valise->a_qui_ltour=1;
                        valise->occu_ulti3+=1;
                        valise->alterner_jeu1=0;
                        valise->actif = 0;
                    }
                }
            }
        }

    }
}

void phase_de_jeu4(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies)
{



    if(valise->actif==3)
    {
        barre_combat(valise, player);
        if(valise->alterner_jeu4==0)
        {

            choix_deplacement(valise, player, cases, cases_choisies);
            if(valise->alterner_joueur==3)
            {
                rest(100);
                cases_choisies->numero_ligne= player->numero_ligne;
                cases_choisies->numero_colonne=player->numero_colonne;
                player->nb_PA=6;
                player->nb_PM=3;
                valise->ulti_lance=0;
                valise->alterner_joueur=0;
            }
            for(int i=0; i<17; i++)
            {
                for(int j=0; j<17; j++)
                {
                    if(is_in_case(cases[i][j])==1 && getpixel(valise->double_buffer, mouse_x, mouse_y) == valise->cases_ok)
                    {
                        stretch_sprite(valise->double_buffer,valise->select,cases[i][j].pos_x,cases[i][j].pos_y,SCREEN_W/18,SCREEN_H/18);
                        if(mouse_b&1)
                        {
                            cases_choisies->numero_ligne= cases[i][j].numero_ligne;
                            cases_choisies->numero_colonne=cases[i][j].numero_colonne;
                            cases[player->numero_ligne][player->numero_colonne].type_cases = 0;
                        }
                    }
                }
            }


            if(player->numero_ligne != cases_choisies->numero_ligne || player->numero_colonne != cases_choisies->numero_colonne)
            {
                deplacement_case_p_cases(cases_choisies,player,valise, cases);

            }
            if((player->numero_ligne == cases_choisies->numero_ligne && player->numero_colonne == cases_choisies->numero_colonne))
            {
                cases[player->numero_ligne][player->numero_colonne].type_cases = player->attaque.quelle_classe;
                stretch_sprite(valise->double_buffer,valise->bouton_combat,1155,640,100,40);
                if(((mouse_x>=1155)&&(mouse_x<=1255))&&((mouse_y>=640)&&(mouse_y<=680)))
                {
                    stretch_sprite(valise->double_buffer,valise->bouton_combat,1150,635,110,50);
                    // rectfill(valise->double_buffer, 1150, 635, 1260, 685, makecol(255, 255, 255));
                    if(mouse_b & 1)
                    {
                        valise->alterner_jeu4=1;
                    }
                }
            }
        }
        if(valise->occu_ulti4>=3)
        {
            stretch_sprite(valise->double_buffer,valise->halo_combat_rouge,896,712,80,70);
            if(valise->ulti_lance!=0)
            {
                valise->occu_ulti4=0;
            }
        }
        if(valise->alterner_jeu4==1)
        {
            choix_attaque(valise, player, cases, cases_choisies);
        }
        if(valise->alterner_jeu4==4)
        {
            valise->affich_sprite=1;
            noble_fantasme(valise,player);
        }
        if(key[KEY_RIGHT])
        {
            valise->occu_ulti4+=1;
            valise->alterner_jeu1=0;
            valise->actif = 0;
        }
        if(valise->affich_sprite==0)
        {
            stretch_sprite(valise->double_buffer,valise->joueur_suivant,1180,715,70,70);
            if(pow(1205-mouse_x,2)+pow(750-mouse_y,2)<=pow(35,2))
            {
                stretch_sprite(valise->double_buffer,valise->joueur_suivant,1170,705,90,90);
                if(mouse_b&1)
                {
                    valise->occu_ulti4+=1;
                    valise->alterner_jeu1=0;
                    valise->actif = 0;
                }
            }

        }
    }
}

void deplacement_case_p_cases(t_cases* cases_choisies, t_player* player, t_valise* valise, t_cases cases[17][17])
{
    if(player->numero_colonne < cases_choisies->numero_colonne)
    {
        if((cases[player->numero_ligne][player->numero_colonne+1].type_cases!=0)&&(player->numero_ligne > cases_choisies->numero_ligne))
        {
            if(valise->d2<7)
            {
                valise->d2++;

                player->pos_x+=5;
                player->pos_y-=2;
                rest(15);
            }

            if(valise->d2>=7)
            {
                player->numero_ligne-=1;
                player->nb_PM-=1;
                valise->d2=0;
            }
        }
        else if((cases[player->numero_ligne][player->numero_colonne+1].type_cases!=0)&&(player->numero_ligne < cases_choisies->numero_ligne))
        {
            if(valise->d1<7)
            {
                valise->d1++;

                player->pos_x-=5;
                player->pos_y+=2;
                rest(15);
            }

            if(valise->d1>=7)
            {
                player->numero_ligne+=1;
                player->nb_PM-=1;
                valise->d1=0;
            }
        }
        else if((cases[player->numero_ligne+1][player->numero_colonne+1].type_cases!=0)&&(player->numero_ligne < cases_choisies->numero_ligne)&&(cases_choisies->numero_colonne - player->numero_colonne)==1)
        {
            if(valise->d4<7)
            {
                valise->d4++;

                player->pos_x-=5;
                player->pos_y+=2;
                rest(15);
            }

            if(valise->d4>=7)
            {
                player->numero_ligne+=1;
                player->nb_PM-=1;
                valise->d4=0;
            }
        }
        else if((cases[player->numero_ligne-1][player->numero_colonne+1].type_cases!=0)&&(player->numero_ligne > cases_choisies->numero_ligne)&&(cases_choisies->numero_colonne - player->numero_colonne)==1)
        {
            if(valise->d4<7)
            {
                valise->d4++;

                player->pos_x+=5;
                player->pos_y-=2;
                rest(15);
            }

            if(valise->d4>=7)
            {
                player->numero_ligne-=1;
                player->nb_PM-=1;
                valise->d4=0;
            }
        }
        else
        {

            if(valise->d1<7)
            {

                valise->d1++;
                player->pos_x+=5;
                player->pos_y+=2;
                rest(15);
            }

            if(valise->d1>=7)
            {
                player->numero_colonne+=1;
                player->nb_PM-=1;
                valise->d1=0;
            }
        }
    }
    if(player->numero_colonne > cases_choisies->numero_colonne)
    {
        if((cases[player->numero_ligne][player->numero_colonne-1].type_cases!=0)&&(player->numero_ligne > cases_choisies->numero_ligne))
        {
            if(valise->d2<7)
            {
                valise->d2++;

                player->pos_x+=5;
                player->pos_y-=2;
                rest(15);
            }

            if(valise->d2>=7)
            {
                player->numero_ligne-=1;
                player->nb_PM-=1;
                valise->d2=0;
            }
        }
        else if((cases[player->numero_ligne][player->numero_colonne-1].type_cases!=0)&&(player->numero_ligne < cases_choisies->numero_ligne))
        {
            if(valise->d1<7)
            {
                valise->d1++;

                player->pos_x-=5;
                player->pos_y+=2;
                rest(15);
            }

            if(valise->d1>=7)
            {
                player->numero_ligne+=1;
                player->nb_PM-=1;
                valise->d1=0;
            }
        }
        else if((cases[player->numero_ligne-1][player->numero_colonne-1].type_cases!=0)&&(player->numero_ligne > cases_choisies->numero_ligne)&&(player->numero_colonne - cases_choisies->numero_colonne)==1)
        {
            if(valise->d3<7)
            {
                valise->d3++;

                player->pos_x+=5;
                player->pos_y-=2;
                rest(15);
            }

            if(valise->d3>=7)
            {
                player->numero_ligne-=1;
                player->nb_PM-=1;
                valise->d3=0;
            }
        }
        else if((cases[player->numero_ligne+1][player->numero_colonne-1].type_cases!=0)&&(player->numero_ligne < cases_choisies->numero_ligne)&&(player->numero_colonne - cases_choisies->numero_colonne)==1)
        {
            if(valise->d3<7)
            {
                valise->d3++;

                player->pos_x-=5;
                player->pos_y+=2;
                rest(15);
            }

            if(valise->d3>=7)
            {
                player->numero_ligne+=1;
                player->nb_PM-=1;
                valise->d3=0;
            }
        }
        else
        {
            if(valise->d2<7)
            {

                valise->d2++;
                player->pos_x-=5;
                player->pos_y-=2;
                rest(15);
            }

            if(valise->d2>=7)
            {

                player->numero_colonne-=1;
                player->nb_PM-=1;
                valise->d2=0;
            }
        }
    }
    if((player->numero_ligne<cases_choisies->numero_ligne)&&(player->numero_colonne == cases_choisies->numero_colonne))
    {
        if(valise->d3<7)
        {

            valise->d3++;
            player->pos_x-=5;
            player->pos_y+=2;
            rest(15);
        }

        if(valise->d3>=7)
        {
            player->numero_ligne+=1;
            player->nb_PM-=1;
            valise->d3=0;
        }
    }
    if((player->numero_ligne>cases_choisies->numero_ligne)&&(player->numero_colonne == cases_choisies->numero_colonne))
    {
        if(valise->d3<7)
        {
            valise->d4++;

            player->pos_x+=5;
            player->pos_y-=2;
            rest(15);
        }

        if(valise->d4>=7)
        {
            player->numero_ligne-=1;
            player->nb_PM-=1;
            valise->d4=0;
        }
    }
}

void choix_attaque(t_valise* valise, t_player* player,t_cases cases[17][17], t_cases* cases_choisies)
{
    ///CORPS A CORPS
    if(((mouse_x>=504)&&(mouse_x<=576))&&((mouse_y>=712)&&(mouse_y<=776)))
    {
        stretch_sprite(valise->double_buffer,valise->halo_combat,504,712,74,66);

        if(mouse_b & 1)
        {
            valise->corps_a_corps = 1;
        }
    }

    if(valise->corps_a_corps==1)
    {
        for(int k=0; k<17; k++)
        {
            for(int l=0; l<17; l++)
            {
                if((abs(cases[k][l].numero_ligne-player->numero_ligne)+abs(cases[k][l].numero_colonne-player->numero_colonne))==1 && (cases[k][l].type_cases != 6 ))
                {
                    stretch_sprite(valise->double_buffer,valise->case_attaque,cases[k][l].pos_x,cases[k][l].pos_y,SCREEN_W/18,SCREEN_H/18);
                }

                if(is_in_case(cases[k][l])==1 && getpixel(valise->double_buffer, mouse_x, mouse_y) == valise->attaque_ok)
                {
                    stretch_sprite(valise->double_buffer,valise->select,cases[k][l].pos_x,cases[k][l].pos_y,SCREEN_W/18,SCREEN_H/18);
                    if(mouse_b&1)
                    {
                        cases_choisies->numero_ligne= cases[k][l].numero_ligne;
                        cases_choisies->numero_colonne = cases[k][l].numero_colonne;
                        cases_choisies->type_cases = cases[k][l].type_cases;

                        valise->attaque_en_cours = 1;
                    }
                }
            }
        }
        textprintf_ex(valise->double_buffer,font,600,100,makecol(0,200,255),-1,"%d", cases_choisies->type_cases);
        textprintf_ex(valise->double_buffer,font,600,120,makecol(0,200,255),-1,"%d / %d", cases_choisies->numero_ligne, cases_choisies->numero_colonne);

        if(valise->attaque_en_cours==1)
        {
            attaque_cac(player, valise, cases_choisies);
            valise->alterner_jeu1 = 2;
            valise->alterner_jeu2 = 2;
            valise->alterner_jeu3 = 2;
            valise->alterner_jeu4 = 2;
            valise->corps_a_corps = 0;

        }

    }

    //SPELL 1
    if(((mouse_x>=613)&&(mouse_x<=685))&&((mouse_y>=712)&&(mouse_y<=776)))
    {
        stretch_sprite(valise->double_buffer,valise->halo_combat,613,712,74,66);
        if(mouse_b & 1)
        {
            valise->spell1 = 1;
        }
    }
    if(valise->spell1 == 1)
    {
        for(int k=0; k<17; k++)
        {
            for(int l=0; l<17; l++)
            {
                if((abs(cases[k][l].numero_ligne-player->numero_ligne)+abs(cases[k][l].numero_colonne-player->numero_colonne))<=5 && (cases[k][l].type_cases != 6 ))
                {
                    stretch_sprite(valise->double_buffer,valise->case_attaque,cases[k][l].pos_x,cases[k][l].pos_y,SCREEN_W/18,SCREEN_H/18);
                }

                if(is_in_case(cases[k][l])==1 && getpixel(valise->double_buffer, mouse_x, mouse_y) == valise->attaque_ok)
                {
                    stretch_sprite(valise->double_buffer,valise->select,cases[k][l].pos_x,cases[k][l].pos_y,SCREEN_W/18,SCREEN_H/18);
                    if(mouse_b&1)
                    {
                        cases_choisies->numero_ligne= cases[k][l].numero_ligne;
                        cases_choisies->numero_colonne = cases[k][l].numero_colonne;
                        cases_choisies->type_cases = cases[k][l].type_cases;

                        valise->attaque_en_cours = 1;
                    }
                }
            }
        }
        if(valise->attaque_en_cours==1)
        {
            spell_1(player, valise, cases_choisies);
            valise->alterner_jeu1 = 2;
            valise->alterner_jeu2 = 2;
            valise->alterner_jeu3 = 2;
            valise->alterner_jeu4 = 2;
            valise->spell1 = 0;

        }
    }

    ///SPELL 2
    if(((mouse_x>=697)&&(mouse_x<=772))&&((mouse_y>=712)&&(mouse_y<=776)))
    {
        stretch_sprite(valise->double_buffer,valise->halo_combat,697,712,74,66);
        if(mouse_b & 1)
        {

        }
    }
    ///SPELL 3
    if(((mouse_x>=783)&&(mouse_x<=852))&&((mouse_y>=712)&&(mouse_y<=776)))
    {
        stretch_sprite(valise->double_buffer,valise->halo_combat,783,712,74,66);
        if(mouse_b & 1)
        {

        }
    }
    ///Noble fantasme
    if(((mouse_x>=896)&&(mouse_x<=974))&&((mouse_y>=711)&&(mouse_y<=776)))
    {
        stretch_sprite(valise->double_buffer,valise->halo_combat,896,712,80,70);
        if((mouse_b&1) && (valise->occu_ulti1%3==0 || valise->occu_ulti2%3==0 ||valise->occu_ulti3%3==0||valise->occu_ulti4%3==0) )
        {
            valise->ulti = 1;
        }
    }
    if (valise->ulti == 1)
    {
        for(int k=0; k<17; k++)
        {
            for(int l=0; l<17; l++)
            {
                if(((cases[k][l].type_cases != 6 && cases[k][l].type_cases != player->attaque.quelle_classe && cases[k][l].type_cases != 5 && cases[k][l].type_cases != 0)))
                {
                    stretch_sprite(valise->double_buffer,valise->case_attaque,cases[k][l].pos_x,cases[k][l].pos_y,SCREEN_W/18,SCREEN_H/18);
                }

                if(is_in_case(cases[k][l])==1 && getpixel(valise->double_buffer, mouse_x, mouse_y) == valise->attaque_ok)
                {
                    stretch_sprite(valise->double_buffer,valise->select,cases[k][l].pos_x,cases[k][l].pos_y,SCREEN_W/18,SCREEN_H/18);
                    if(mouse_b&1)
                    {
                        cases_choisies->numero_ligne= cases[k][l].numero_ligne;
                        cases_choisies->numero_colonne = cases[k][l].numero_colonne;
                        cases_choisies->type_cases = cases[k][l].type_cases;
                        valise->attaque_en_cours = 1;

                    }
                }
            }
        }
    }

    if(valise->attaque_en_cours == 1)
    {
        valise->ulti = 0;
        valise->alterner_jeu1=4;
        valise->alterner_jeu2=4;
        valise->alterner_jeu3=4;
        valise->alterner_jeu4=4;
    }
}



///-------------------------------------------------------------------------------///
///-----------------------------------MENU----------------------------------------///
///-------------------------------------------------------------------------------///

void menu_principale(t_valise* valise)
{

    stretch_blit(valise->accueil,valise->double_buffer,0,0,valise->accueil->w,valise->accueil->h,0,0,SCREEN_W,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->bouton1,420,100,SCREEN_W+110,SCREEN_H+110);
    stretch_sprite(valise->double_buffer,valise->bouton2,490,280,SCREEN_W-100,SCREEN_H-100);
    stretch_sprite(valise->double_buffer,valise->bouton3,490,380,SCREEN_W-100,SCREEN_H-100);
    stretch_sprite(valise->double_buffer,valise->bouton4,490,480,SCREEN_W-100,SCREEN_H-100);
    stretch_sprite(valise->double_buffer,valise->bouton5,490,580,SCREEN_W-100,SCREEN_H-100);


    if(((mouse_x>=490)&&(mouse_x<=779))&&((mouse_y>=280)&&(mouse_y<=344)))
    {
        stretch_sprite(valise->double_buffer,valise->bouton2,480,280,SCREEN_W,SCREEN_H);
        if(mouse_b&1)
        {
            valise->choix_menu=5;
        }
    }

    if(((mouse_x>=490)&&(mouse_x<=779))&&((mouse_y>=380)&&(mouse_y<=444)))
    {
        stretch_sprite(valise->double_buffer,valise->bouton3,480,380,SCREEN_W,SCREEN_H);
    }

    if(((mouse_x>=490)&&(mouse_x<=779))&&((mouse_y>=480)&&(mouse_y<=544)))
    {
        stretch_sprite(valise->double_buffer,valise->bouton4,480,480,SCREEN_W,SCREEN_H);
        if(mouse_b&1)
        {
            valise->choix_menu=4;
        }

    }

    if(((mouse_x>=490)&&(mouse_x<=779))&&((mouse_y>=580)&&(mouse_y<=644)))
    {
        stretch_sprite(valise->double_buffer,valise->bouton5,480,580,SCREEN_W,SCREEN_H);
    }



}


void menu_pause(t_valise* valise)
{
    stretch_sprite(valise->double_buffer,valise->menupause,420,100,SCREEN_W+110,SCREEN_H+110);
    stretch_sprite(valise->double_buffer,valise->reprendre,490,280,SCREEN_W-100,SCREEN_H-100);
    stretch_sprite(valise->double_buffer,valise->sauvegarde,490,380,SCREEN_W-100,SCREEN_H-100);
    stretch_sprite(valise->double_buffer,valise->bouton4,490,480,SCREEN_W-100,SCREEN_H-100);
    stretch_sprite(valise->double_buffer,valise->bouton5,490,580,SCREEN_W-100,SCREEN_H-100);

    if(((mouse_x>=490)&&(mouse_x<=779))&&((mouse_y>=280)&&(mouse_y<=344)))
    {
        stretch_sprite(valise->double_buffer,valise->reprendre,480,280,SCREEN_W,SCREEN_H);
        if(mouse_b&1)
        {
            valise->choix_menu=1;
        }
    }

    if(((mouse_x>=490)&&(mouse_x<=779))&&((mouse_y>=380)&&(mouse_y<=444)))
    {
        stretch_sprite(valise->double_buffer,valise->sauvegarde,480,380,SCREEN_W,SCREEN_H);
    }

    if(((mouse_x>=490)&&(mouse_x<=779))&&((mouse_y>=480)&&(mouse_y<=544)))
    {
        stretch_sprite(valise->double_buffer,valise->bouton4,480,480,SCREEN_W,SCREEN_H);
        if(mouse_b&1)
        {
            valise->choix_menu=3;
        }
    }

    if(((mouse_x>=490)&&(mouse_x<=779))&&((mouse_y>=580)&&(mouse_y<=644)))
    {
        stretch_sprite(valise->double_buffer,valise->bouton5,480,580,SCREEN_W,SCREEN_H);
        if(mouse_b&1)
        {
            valise->choix_menu=0;
        }
    }
}



void creditmenu(t_valise* valise)
{
    stretch_blit(valise->ciel,valise->double_buffer,0,0,valise->ciel->w,valise->ciel->h,0,0,SCREEN_W,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->equipe,420,100,SCREEN_W+210,SCREEN_H+210);
    stretch_sprite(valise->double_buffer,valise->cyprien,100,300,(SCREEN_W/5)+20,(SCREEN_H/5)+100);
    stretch_sprite(valise->double_buffer,valise->contact1,60,600,SCREEN_W-100,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->jules,380,300,(SCREEN_W/5)+20,(SCREEN_H/5)+100);
    stretch_sprite(valise->double_buffer,valise->contact2,360,600,SCREEN_W-100,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->pa,680,300,(SCREEN_W/5)+50,(SCREEN_H/5)+100);
    stretch_sprite(valise->double_buffer,valise->contact3,660,600,SCREEN_W-100,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->jn,950,300,(SCREEN_W/5)+20,(SCREEN_H/5)+100);
    stretch_sprite(valise->double_buffer,valise->contact4,960,600,SCREEN_W-100,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->retour,950,20,SCREEN_W-100,SCREEN_H-80);
    if(((mouse_x>=950)&&(mouse_x<=1249))&&((mouse_y>=20)&&(mouse_y<=85)))
    {
        stretch_sprite(valise->double_buffer,valise->retour,945,18,SCREEN_W,SCREEN_H);

        if(mouse_b&1)
        {
            valise->choix_menu=2;
        }
    }


}
void credit(t_valise* valise)
{
    stretch_blit(valise->accueil,valise->double_buffer,0,0,valise->accueil->w,valise->accueil->h,0,0,SCREEN_W,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->equipe,420,100,SCREEN_W+210,SCREEN_H+210);
    stretch_sprite(valise->double_buffer,valise->cyprien,100,300,(SCREEN_W/5)+20,(SCREEN_H/5)+100);
    stretch_sprite(valise->double_buffer,valise->contact1,60,600,SCREEN_W-100,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->jules,380,300,(SCREEN_W/5)+20,(SCREEN_H/5)+100);
    stretch_sprite(valise->double_buffer,valise->contact2,360,600,SCREEN_W-100,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->pa,680,300,(SCREEN_W/5)+50,(SCREEN_H/5)+100);
    stretch_sprite(valise->double_buffer,valise->contact3,660,600,SCREEN_W-100,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->jn,950,300,(SCREEN_W/5)+20,(SCREEN_H/5)+100);
    stretch_sprite(valise->double_buffer,valise->contact4,960,600,SCREEN_W-100,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->retour,950,20,SCREEN_W-100,SCREEN_H-80);
    if(((mouse_x>=950)&&(mouse_x<=1249))&&((mouse_y>=20)&&(mouse_y<=85)))
    {
        stretch_sprite(valise->double_buffer,valise->retour,945,18,SCREEN_W,SCREEN_H);

        if(mouse_b&1)
        {
            valise->choix_menu=0;
        }
    }
}

int attaque_cac(t_player* player, t_valise* valise, t_cases* cases_choisies)
{
    textprintf_ex(valise->double_buffer, font, 700, 100, makecol(0, 200, 255), -1, "%d", cases_choisies->type_cases);
    textprintf_ex(valise->double_buffer, font, 700, 120, makecol(0, 200, 255), -1, "%d / %d", cases_choisies->numero_ligne, cases_choisies->numero_colonne);

    int touche = 0; // Déclaration d'une variable pour indiquer si la case a été touchée

    for (int i = 1; i <= 4; i++)
    {
        if (cases_choisies->type_cases == i)
        {
            valise->joueur_touche = i;
            textprintf_ex(valise->double_buffer, font, 800, 100, makecol(0, 200, 255), -1, "vous avez infligé ... dégâts");
            touche = 1; // La case a été touchée
            break; // Sortir de la boucle puisque la case a été trouvée
        }
    }

    if (!touche) // Si la case n'a pas été touchée
        textprintf_ex(valise->double_buffer, font, 800, 100, makecol(0, 200, 255), -1, "vous avez frappé dans le décor");

    player->nb_PA -= 2;
    valise->attaque_en_cours = 0;
}


void spell_1(t_player* player, t_valise* valise, t_cases* cases_choisies)
{
    for (int i=1; i<= 4; i++)
    {
        if(cases_choisies->type_cases == i)
        {
            valise->joueur_touche = i;
            textprintf_ex(valise->double_buffer,font,800,100,makecol(0,200,255),-1,"vous avez inflige  ...  degats");
        }
        else
            textprintf_ex(valise->double_buffer,font,800,100,makecol(0,200,255),-1,"vous avez frappe dans le decor");


    }
    player->nb_PA-=2;
    valise->attaque_en_cours = 0;
}


void joueur_est_attaque(t_player *player, t_valise* valise)
{
    if(player->attaque.quelle_classe == valise->joueur_touche)
    {
        if (valise->corps_a_corps == 1)
        {
            player->nb_PV = player->nb_PV - player->attaque.degat_attaque_cac;
            valise->joueur_touche = 0;
        }

        if (valise->spell1 == 1)
        {
            player->nb_PV = player->nb_PV - player->attaque.degat_spell_1;
            valise->joueur_touche = 0;
        }

        if (valise->ulti == 1)
        {
            player->nb_PV = player->nb_PV - player->attaque.degat_spell_4;
            valise->joueur_touche = 0;
        }

        if(player->nb_PV<0)
        {
            player->statut = 1;
        }
    }
}





/* if (((cases[player[valise->joueur_actuel].numero_ligne+1][player[valise->joueur_actuel].numero_colonne].type_cases==i)
         || ((cases[player[valise->joueur_actuel].numero_ligne-1][player[valise->joueur_actuel].numero_colonne].type_cases)==i)
         ||((cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne+1].type_cases)==i)
         ||((cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne-1].type_cases)==i)&&  (player[valise->joueur_actuel].attaque.proba_cac>0)))

 {
     player[i].nb_PV= (player[i].nb_PV - player[valise->joueur_actuel].attaque.degat_attaque_cac) ;
     player[valise->joueur_actuel].nb_PA-=2;
     if(player[i].nb_PV<0)
     {
         valise->statut_joueur[i]=1;
         textprintf(valise->double_buffer,font,800,100,makecol(0,200,255),"vous avez inflige %d degats et TUE %c",player[valise->joueur_actuel].attaque.degat_attaque_cac, player[valise->i].nom );
     }
     else
         textprintf(valise->double_buffer,font,800,100,makecol(0,200,255),"vous avez inflige %d degats �  %c",player[valise->joueur_actuel].attaque.degat_attaque_cac, player[valise->i].nom );


 }
}

if ((cases[player[valise->joueur_actuel].numero_ligne+1][player[valise->joueur_actuel].numero_colonne].type_cases==0)
     || ((cases[player[valise->joueur_actuel].numero_ligne-1][player[valise->joueur_actuel].numero_colonne].type_cases)==0)
     ||((cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne+1].type_cases)==0)
     ||((cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne-1].type_cases)==0))
{
 player[valise->joueur_actuel].nb_PA=player[valise->joueur_actuel].nb_PA-player[valise->joueur_actuel].attaque.cout_pa_spell_1;
 textprintf(valise->double_buffer,font,800,100,makecol(0,200,255),"vous avez tape dans le vide");
}

if (((cases[player[valise->joueur_actuel].numero_ligne+1][player[valise->joueur_actuel].numero_colonne].type_cases>=-4)         && (cases[player[valise->joueur_actuel].numero_ligne+1][player[valise->joueur_actuel].numero_colonne].type_cases<=-1))
     ||(((cases[player[valise->joueur_actuel].numero_ligne-1][player[valise->joueur_actuel].numero_colonne].type_cases)>=-4) && (cases[player[valise->joueur_actuel].numero_ligne-1][player[valise->joueur_actuel].numero_colonne].type_cases)<=-1)
     ||(((cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne+1].type_cases)>=-4) && (cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne+1].type_cases)<=-1)
     ||(((cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne-1].type_cases)>=-4) && (cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne-1].type_cases)<=-1))
{
 player[valise->joueur_actuel].nb_PA=player[valise->joueur_actuel].nb_PA-player[valise->joueur_actuel].attaque.cout_pa_cac;
 textprintf(valise->double_buffer,font,800,100,makecol(0,200,255),"Vous avez touche le decor");
}


}*/



void attaque_spell_1(t_player* player, t_valise* valise, t_cases cases[17][17], t_cases* cases_choisies)
{
    for (int i = 1; i <= valise->nombre_joueurs; i++)
    {
        if ((cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne].type_cases == i) &&
            (cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne].type_cases == i))
        {
            player[i].nb_PV -= player[valise->joueur_actuel].attaque.degat_attaque_cac;
            player[valise->joueur_actuel].nb_PA -= player[valise->joueur_actuel].attaque.cout_pa_spell_1;
            if (player[i].nb_PV < 0)
            {
                valise->statut_joueur[i] = 1;
                textprintf_ex(valise->double_buffer, font, 800, 100, makecol(0, 200, 255), -1, "vous avez infligé %d dégats et TUE %c", player[valise->joueur_actuel].attaque.degat_spell_1, player[i].nom);
            }
            else
                textprintf_ex(valise->double_buffer, font, 800, 100, makecol(0, 200, 255), -1, "vous avez infligé %d dégats à  %c", player[valise->joueur_actuel].attaque.degat_attaque_cac, player[i].nom);
        }
        else
            textprintf_ex(valise->double_buffer, font, 800, 100, makecol(0, 200, 255), -1, "Vous avez touché le décor");

        if ((cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne].type_cases >= -4) &&
            (cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne].type_cases <= -1))
        {
            player[valise->joueur_actuel].nb_PA -= player[valise->joueur_actuel].attaque.cout_pa_spell_1;
            textprintf_ex(valise->double_buffer, font, 800, 100, makecol(0, 200, 255), -1, "Vous avez touché le décor");
        }

        if ((cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne].type_cases == 0) &&
            (cases[player[valise->joueur_actuel].numero_ligne][player[valise->joueur_actuel].numero_colonne].type_cases == 0))
        {
            player[valise->joueur_actuel].nb_PA -= player[valise->joueur_actuel].attaque.cout_pa_spell_1;
            textprintf_ex(valise->double_buffer, font, 800, 100, makecol(0, 200, 255), -1, "vous avez tapé dans le vide");
        }
    }
}



void nb_joueurs(t_valise* valise)
{
    stretch_blit(valise->fond_babylone,valise->double_buffer,0,0,valise->fond_babylone->w,valise->fond_babylone->h,0,0,SCREEN_W,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->bouton_2_j,225,400,200,200);
    stretch_sprite(valise->double_buffer,valise->bouton_3_j,525,400,200,200);
    stretch_sprite(valise->double_buffer,valise->bouton_4_j,825,400,200,200);
    stretch_sprite(valise->double_buffer,valise->cadran_nb_j,325,100,600,200);

    if((mouse_x>225 && mouse_x<425)&&(mouse_y>400 && mouse_y<600))
    {
        stretch_sprite(valise->double_buffer,valise->bouton_2_j,212,388,225,225);
        if(mouse_b&1)
        {
            valise->nombre_joueurs=2;
            valise->choix_menu=6;
        }
    }
    if((mouse_x>525 && mouse_x<725)&&(mouse_y>400 && mouse_y<600))
    {
        stretch_sprite(valise->double_buffer,valise->bouton_3_j,512,388,225,225);
        if(mouse_b&1)
        {
            valise->nombre_joueurs=3;
            valise->choix_menu=6;
        }
    }
    if((mouse_x>825 && mouse_x<1025)&&(mouse_y>400 && mouse_y<600))
    {
        stretch_sprite(valise->double_buffer,valise->bouton_4_j,812,388,225,225);
        if(mouse_b&1)
        {
            valise->nombre_joueurs=4;
            valise->choix_menu=6;
        }
    }
}

void choix_classes(t_valise* valise,t_player* player,t_cases cases[17][17])
{
    if(valise->choice_class==0)
    {
        stretch_blit(valise->fond_babylone,valise->double_buffer,0,0,valise->fond_babylone->w,valise->fond_babylone->h,0,0,SCREEN_W,SCREEN_H);
        stretch_sprite(valise->double_buffer,valise->haut_de_page,175,40,900,75);


        stretch_blit(valise->carte_gilg,valise->double_buffer,0,0,valise->carte_gilg->w,valise->carte_gilg->h,50,200,valise->carte_gilg->w,valise->carte_gilg->h);
        stretch_blit(valise->carte_isht,valise->double_buffer,0,0,valise->carte_isht->w,valise->carte_isht->h,350,200,valise->carte_isht->w,valise->carte_isht->h);
        stretch_blit(valise->carte_enki,valise->double_buffer,0,0,valise->carte_enki->w,valise->carte_enki->h,650,200,valise->carte_enki->w,valise->carte_enki->h);
        stretch_blit(valise->carte_eresh,valise->double_buffer,0,0,valise->carte_eresh->w,valise->carte_eresh->h,950,200,valise->carte_eresh->w,valise->carte_eresh->h);

        if(((mouse_x>50 && mouse_x<300)&&(mouse_y>200 && mouse_y<600)) && valise->gilg_select==0)
        {
            stretch_blit(valise->carte_gilg_select,valise->double_buffer,0,0,valise->carte_gilg_select->w,valise->carte_gilg_select->h,
                         50-10,200-10,valise->carte_gilg_select->w+30,valise->carte_gilg_select->h+30);
            if(mouse_b&1)
            {
                valise->choice_class=1;
            }

        }

        if( ((mouse_x>350 && mouse_x<600)&&(mouse_y>200 && mouse_y<600))&& valise->isht_select==0)
        {
            stretch_blit(valise->carte_isht_select,valise->double_buffer,0,0,valise->carte_isht_select->w,valise->carte_isht_select->h,
                         350-10,200-10,valise->carte_isht_select->w+30,valise->carte_isht_select->h+30);

            if(mouse_b&1)
            {
                valise->choice_class=2;
            }
        }

        if(  ((mouse_x>650 && mouse_x<900)&&(mouse_y>200 && mouse_y<600)) && valise->enki_select==0)
        {
            stretch_blit(valise->carte_enki_select,valise->double_buffer,0,0,valise->carte_enki_select->w,valise->carte_enki_select->h,
                         650-10,200-10,valise->carte_enki_select->w+30,valise->carte_enki_select->h+30);
            if(mouse_b&1)
            {
                valise->choice_class=3;
            }
        }

        if(   ((mouse_x>950 && mouse_x<1200)&&(mouse_y>200 && mouse_y<600))&& valise->eresh_select==0)
        {
            stretch_blit(valise->carte_eresh_select,valise->double_buffer,0,0,valise->carte_eresh_select->w,valise->carte_eresh_select->h,
                         950-10,200-10,valise->carte_eresh_select->w+30,valise->carte_eresh_select->h+30);
            if(mouse_b&1)
            {
                valise->choice_class=4;
            }
        }


    }

    if(valise->choice_class==1)
    {
        stretch_blit(valise->fond_ziggu_nuit,valise->double_buffer,0,0,valise->fond_ziggu_nuit->w,valise->fond_ziggu_nuit->h,0,0,SCREEN_W,SCREEN_H);
        stretch_sprite(valise->double_buffer,valise->cadran_hist_gilg,50,75,450,550);
        stretch_sprite(valise->double_buffer,valise->cadran_nom_gilg,375,0,550,100);

        stretch_sprite(valise->double_buffer,valise->cadran_stat_gilg,850,75,400,250);
        stretch_sprite(valise->double_buffer,valise->cadran_sort_gilg,850,350,400,250);
        stretch_sprite(valise->double_buffer,valise->choisir_classe,1100,625,150,150);
        stretch_sprite(valise->double_buffer,valise->bouton_retour_class,10,10,60,60);

        masked_blit(valise->dessin_gilg,valise->double_buffer,0,0,500,100,SCREEN_W,SCREEN_H);


        stretch_sprite(valise->double_buffer,valise->tete_gilg_select,275,625,150,150);
        masked_blit(valise->tete_isht,valise->double_buffer,0,0,500,650,SCREEN_W,SCREEN_H);
        masked_blit(valise->tete_enki,valise->double_buffer,0,0,700,650,SCREEN_W,SCREEN_H);
        masked_blit(valise->tete_eresh,valise->double_buffer,0,0,900,650,SCREEN_W,SCREEN_H);

        if(pow(1175-mouse_x,2)+pow(700-mouse_y,2)<=pow(75,2))
        {
            stretch_sprite(valise->double_buffer,valise->choisir_classe,1090,615,175,175);
            if(mouse_b&1)
            {
                strcpy(player->nom,"GILGAMESH");
                player->attaque.quelle_classe=1;
                valise->gilg_select=1;
                initialisation(player,valise,cases);
                valise->choice_class=0;
                valise->rest_nb_j=0;
                valise->occurence_choix_class++;
                player->perso=load_bitmap("../images/sprite/personnage_temporaire/perso1_gilg.bmp",NULL);
            }

        }
        if(pow(40-mouse_x,2)+pow(40-mouse_y,2)<=pow(30,2))
        {
            stretch_sprite(valise->double_buffer,valise->bouton_retour_class,5,5,70,70);
            if(mouse_b&1)
            {
                valise->choice_class=0;
            }
        }

        if(((mouse_x>500 && mouse_x<600) &&(mouse_y>650 && mouse_y<750))&& valise->isht_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_isht_select,488,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=2;
            }
        }
        if(((mouse_x>700 && mouse_x<800) &&(mouse_y>650 && mouse_y<750))&& valise->enki_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_enki_select,688,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=3;
            }
        }
        if(((mouse_x>900 && mouse_x<1000) &&(mouse_y>650 && mouse_y<750))&& valise->eresh_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_eresh_select,888,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=4;
            }
        }


    }

    if(valise->choice_class==2)
    {
        stretch_blit(valise->mur_babylone,valise->double_buffer,0,0,valise->mur_babylone->w,valise->mur_babylone->h,0,0,SCREEN_W,SCREEN_H);
        stretch_sprite(valise->double_buffer,valise->cadran_hist_isht,50,75,450,550);
        stretch_sprite(valise->double_buffer,valise->cadran_nom_isht,375,0,550,100);

        stretch_sprite(valise->double_buffer,valise->cadran_stat_isht,850,75,400,250);
        stretch_sprite(valise->double_buffer,valise->cadran_sort_isht,850,350,400,250);
        stretch_sprite(valise->double_buffer,valise->choisir_classe,1100,625,150,150);
        stretch_sprite(valise->double_buffer,valise->bouton_retour_class,10,10,60,60);

        masked_blit(valise->dessin_isht,valise->double_buffer,0,0,500,100,SCREEN_W,SCREEN_H);

        masked_blit(valise->tete_gilg,valise->double_buffer,0,0,300,650,SCREEN_W,SCREEN_H);
        stretch_sprite(valise->double_buffer,valise->tete_isht_select,475,625,150,150);
        masked_blit(valise->tete_enki,valise->double_buffer,0,0,700,650,SCREEN_W,SCREEN_H);
        masked_blit(valise->tete_eresh,valise->double_buffer,0,0,900,650,SCREEN_W,SCREEN_H);

        if(pow(1175-mouse_x,2)+pow(700-mouse_y,2)<=pow(75,2))
        {
            stretch_sprite(valise->double_buffer,valise->choisir_classe,1090,615,175,175);
            if(mouse_b&1)
            {

                strcpy(player->nom,"ISHTAR");
                player->attaque.quelle_classe=2;
                valise->isht_select=1;
                initialisation(player,valise,cases);
                valise->choice_class=0;
                valise->rest_nb_j=0;
                valise->occurence_choix_class++;
                player->perso=load_bitmap("../images/sprite/personnage_temporaire/perso1_isht.bmp",NULL);
            }
        }
        if(pow(40-mouse_x,2)+pow(40-mouse_y,2)<=pow(30,2))
        {
            stretch_sprite(valise->double_buffer,valise->bouton_retour_class,5,5,70,70);
            if(mouse_b&1)
            {
                valise->choice_class=0;
            }
        }

        if(((mouse_x>300 && mouse_x<400) &&(mouse_y>650 && mouse_y<750))&& valise->gilg_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_gilg_select,288,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=1;
            }
        }
        if(((mouse_x>700 && mouse_x<800) &&(mouse_y>650 && mouse_y<750))&& valise->enki_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_enki_select,688,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=3;
            }
        }
        if(((mouse_x>900 && mouse_x<1000) &&(mouse_y>650 && mouse_y<750))&& valise->eresh_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_eresh_select,888,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=4;
            }
        }

    }

    if(valise->choice_class==3)
    {
        stretch_blit(valise->fond_ziggu_jour,valise->double_buffer,0,0,valise->fond_ziggu_jour->w,valise->fond_ziggu_jour->h,0,0,SCREEN_W,SCREEN_H);
        stretch_sprite(valise->double_buffer,valise->cadran_hist_enki,50,75,450,550);
        stretch_sprite(valise->double_buffer,valise->cadran_nom_enki,375,0,550,100);

        stretch_sprite(valise->double_buffer,valise->cadran_stat_enki,850,75,400,250);
        stretch_sprite(valise->double_buffer,valise->cadran_sort_enki,850,350,400,250);
        stretch_sprite(valise->double_buffer,valise->choisir_classe,1100,625,150,150);
        stretch_sprite(valise->double_buffer,valise->bouton_retour_class,10,10,60,60);

        masked_blit(valise->dessin_enki,valise->double_buffer,0,0,500,100,SCREEN_W,SCREEN_H);
        masked_blit(valise->tete_gilg,valise->double_buffer,0,0,300,650,SCREEN_W,SCREEN_H);
        masked_blit(valise->tete_isht,valise->double_buffer,0,0,500,650,SCREEN_W,SCREEN_H);
        stretch_sprite(valise->double_buffer,valise->tete_enki_select,675,625,150,150);
        masked_blit(valise->tete_eresh,valise->double_buffer,0,0,900,650,SCREEN_W,SCREEN_H);

        if(pow(1175-mouse_x,2)+pow(700-mouse_y,2)<=pow(75,2))
        {
            stretch_sprite(valise->double_buffer,valise->choisir_classe,1090,615,175,175);
            if(mouse_b&1)
            {
                strcpy(player->nom,"ENKIDU");
                player->attaque.quelle_classe=3;
                valise->enki_select=1;
                initialisation(player,valise,cases);
                valise->choice_class=0;
                valise->rest_nb_j=0;
                valise->occurence_choix_class++;
                player->perso=load_bitmap("../images/sprite/personnage_temporaire/perso1_enki.bmp",NULL);

            }
        }
        if(pow(40-mouse_x,2)+pow(40-mouse_y,2)<=pow(30,2))
        {
            stretch_sprite(valise->double_buffer,valise->bouton_retour_class,5,5,70,70);
            if(mouse_b&1)
            {
                valise->choice_class=0;
            }
        }

        if(((mouse_x>300 && mouse_x<400) &&(mouse_y>650 && mouse_y<750))&& valise->gilg_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_gilg_select,288,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=1;
            }
        }
        if(((mouse_x>500 && mouse_x<600) &&(mouse_y>650 && mouse_y<750))&& valise->isht_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_isht_select,488,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=2;
            }
        }

        if(((mouse_x>900 && mouse_x<1000) &&(mouse_y>650 && mouse_y<750))&& valise->eresh_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_eresh_select,888,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=4;
            }
        }

    }

    if(valise->choice_class==4)
    {
        stretch_blit(valise->fond_ruines,valise->double_buffer,0,0,valise->fond_ruines->w,valise->fond_ruines->h,0,0,SCREEN_W,SCREEN_H);
        stretch_sprite(valise->double_buffer,valise->cadran_hist_eresh,50,75,450,550);
        stretch_sprite(valise->double_buffer,valise->cadran_nom_eresh,375,0,550,100);

        stretch_sprite(valise->double_buffer,valise->cadran_stat_eresh,850,75,400,250);
        stretch_sprite(valise->double_buffer,valise->cadran_sort_eresh,850,350,400,250);
        stretch_sprite(valise->double_buffer,valise->choisir_classe,1100,625,150,150);
        stretch_sprite(valise->double_buffer,valise->bouton_retour_class,10,10,60,60);

        masked_blit(valise->dessin_eresh,valise->double_buffer,0,0,450,70,SCREEN_W,SCREEN_H);
        masked_blit(valise->tete_gilg,valise->double_buffer,0,0,300,650,SCREEN_W,SCREEN_H);
        masked_blit(valise->tete_isht,valise->double_buffer,0,0,500,650,SCREEN_W,SCREEN_H);
        masked_blit(valise->tete_enki,valise->double_buffer,0,0,700,650,SCREEN_W,SCREEN_H);
        masked_blit(valise->tete_eresh,valise->double_buffer,0,0,900,650,SCREEN_W,SCREEN_H);
        stretch_sprite(valise->double_buffer,valise->tete_eresh_select,875,625,150,150);

        if(pow(1175-mouse_x,2)+pow(700-mouse_y,2)<=pow(75,2))
        {
            stretch_sprite(valise->double_buffer,valise->choisir_classe,1090,615,175,175);
            if(mouse_b&1)
            {

                strcpy(player->nom,"ERESHKIGAL");
                player->attaque.quelle_classe=4;
                valise->eresh_select=1;
                initialisation(player,valise,cases);
                valise->choice_class=0;
                valise->occurence_choix_class++;
                player->perso=load_bitmap("../images/sprite/personnage_temporaire/perso1_eresh.bmp",NULL);
            }
        }
        if(pow(40-mouse_x,2)+pow(40-mouse_y,2)<=pow(30,2))
        {
            stretch_sprite(valise->double_buffer,valise->bouton_retour_class,5,5,70,70);
            if(mouse_b&1)
            {
                valise->choice_class=0;
            }
        }

        if(((mouse_x>300 && mouse_x<400) &&(mouse_y>650 && mouse_y<750))&& valise->gilg_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_gilg_select,288,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=1;
            }
        }
        if(((mouse_x>500 && mouse_x<600) &&(mouse_y>650 && mouse_y<750)) && valise->isht_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_isht_select,488,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=2;
            }
        }
        if(((mouse_x>700 && mouse_x<800) &&(mouse_y>650 && mouse_y<750))&& valise->enki_select==0)
        {
            stretch_sprite(valise->double_buffer,valise->tete_enki_select,688,638,125,125);
            if(mouse_b&1)
            {
                valise->choice_class=3;
            }
        }


    }

}


void lancer_le_jeu(t_valise* valise)
{
    stretch_blit(valise->fond_babylone,valise->double_buffer,0,0,valise->fond_babylone->w,valise->fond_babylone->h,0,0,SCREEN_W,SCREEN_H);
    stretch_sprite(valise->double_buffer,valise->cadran_lancement,325,275,600,200);
    if((mouse_x>325 && mouse_x<925) && (mouse_y>275 && mouse_y<457))
    {
        stretch_sprite(valise->double_buffer,valise->cadran_lancement,300,250,650,250);
        if(mouse_b&1)
        {
            valise->choix_menu=1;
        }
    }

}


void affichage_nb_ishtar(t_valise* valise)
{
    stretch_blit(valise->noble_fantasme_ishtar[valise->occu_nb1],valise->double_buffer,0,0,
                 valise->noble_fantasme_ishtar[valise->occu_nb1]->w,valise->noble_fantasme_ishtar[valise->occu_nb1]->h,0,0,SCREEN_W,SCREEN_H);
    valise->occu_nb1+=1;
    rest(30);
    if(valise->occu_nb1>=340)
    {
        valise->occu_nb1=0;
        valise->alterner_jeu1=3;
        valise->alterner_jeu2=3;
        valise->alterner_jeu3=3;
        valise->alterner_jeu4=3;
        valise->affich_sprite=0;
        valise->ulti_lance=1;
        valise->oui=2;
    }
}


void affichage_nb_gilg(t_valise* valise)
{
    stretch_blit(valise->noble_fantasme_gilgamesh[valise->occu_nb2],valise->double_buffer,0,0,
                 valise->noble_fantasme_gilgamesh[valise->occu_nb2]->w,valise->noble_fantasme_gilgamesh[valise->occu_nb2]->h,0,0,SCREEN_W,SCREEN_H);
    valise->occu_nb2+=1;
    rest(30);
    if(valise->occu_nb2>=404)
    {
        valise->occu_nb2=0;
        valise->alterner_jeu1=3;
        valise->alterner_jeu2=3;
        valise->alterner_jeu3=3;
        valise->alterner_jeu4=3;
        valise->affich_sprite=0;
        valise->ulti_lance=1;
        valise->oui=1;
    }
}

void affichage_nb_enki(t_valise* valise)
{
    stretch_blit(valise->noble_fantasme_enkidu[valise->occu_nb3],valise->double_buffer,0,0,
                 valise->noble_fantasme_enkidu[valise->occu_nb3]->w,valise->noble_fantasme_enkidu[valise->occu_nb3]->h,0,0,SCREEN_W,SCREEN_H);
    valise->occu_nb3+=1;
    rest(30);
    if(valise->occu_nb3>=309)
    {
        valise->occu_nb3=0;
        valise->alterner_jeu1=3;
        valise->alterner_jeu2=3;
        valise->alterner_jeu3=3;
        valise->alterner_jeu4=3;
        valise->affich_sprite=0;
        valise->ulti_lance=1;
        valise->oui=3;
    }
}


void affichage_nb_eresh(t_valise* valise)
{
    stretch_blit(valise->noble_fantasme_ereshkigal[valise->occu_nb4],valise->double_buffer,0,0,
                 valise->noble_fantasme_ereshkigal[valise->occu_nb4]->w,valise->noble_fantasme_ereshkigal[valise->occu_nb4]->h,0,0,SCREEN_W,SCREEN_H);
    valise->occu_nb4+=1;
    rest(15);
    if(valise->occu_nb4>=508)
    {
        valise->occu_nb4=0;
        valise->alterner_jeu1=3;
        valise->alterner_jeu2=3;
        valise->alterner_jeu3=3;
        valise->alterner_jeu4=3;
        valise->affich_sprite=0;
        valise->ulti_lance=1;
        valise->oui=0;
    }
}



void noble_fantasme(t_valise* valise, t_player* player)
{
    if(player->attaque.quelle_classe==1)
    {
        affichage_nb_gilg(valise);
    }
    if(player->attaque.quelle_classe==2)
    {
        affichage_nb_ishtar(valise);
    }
    if(player->attaque.quelle_classe==3)
    {
        affichage_nb_enki(valise);
    }
    if(player->attaque.quelle_classe==4)
    {
        affichage_nb_eresh(valise);
    }
    valise->attaque_en_cours = 0;
}



/*
void sauvegarder(t_valise* valise, t_player* joueur)
{
    FILE * ficsauv = fopen("sauvegarde.txt","w");
    fprintf(ficsauv,%d %d %d %d %d %d, valise->nombre_joueurs,valise->alterner_joueur,valise->d1,valise->d2,valise->d3,valise->d4);
    fprintf(ficsauv,%d %d %d %d %d %d,valise->cases_ok,valise->bouger,valise->choix_menu,valise->i,valise->joueur_actuel,valise->statut_joueur[3]);
    fprintf(ficsauv,%d %d %d %d %d %d,valise->choice_class,valise->gilg_select,valise->isht_select,valise->enki_select,valise->eresh_select,valise->rest_nb_j);
    fprintf(ficsauv,%d %d %d %d %s %d,valise->rest_lancement1,valise->rest_lancement2,valise->rest_lancement3,valise->occurence_choix_class,valise->nf_ishtar[50],valise->occu);
    fprintf(ficsauv,%s %d %d %d %d %d,joueur->nom[20],joueur->nb_PA,joueur->nb_PM,joueur->nb_PV,joueur->pos_x,joueur->pos_y);
    fprintf(ficsauv,%d %d, joueur->numero_ligne,joueur->numero_colonne);
}

void charger(t_valise* valise, t_player* joueur)
{
    FILE * ficsauv = fopen("sauvegarde.txt","r");
    signed char texte[256];
    if(ficsauv== NULL)
    {
        exit(1);
    }

    while(fgetc(texte,256,ficsauv)!=NULL)
    {
        fscanf(ficsauv,%d %d %d %d %d %d, &valise->nombre_joueurs,&valise->alterner_joueur,&valise->d1,&valise->d2,&valise->d3,&valise->d4);
    fscanf(ficsauv,%d %d %d %d %d %d,&valise->cases_ok,&valise->bouger,&valise->choix_menu,&valise->i,&valise->joueur_actuel,&valise->statut_joueur[3]);
    fscanf(ficsauv,%d %d %d %d %d %d,&valise->choice_class,&valise->gilg_select,&valise->isht_select,&valise->enki_select,&valise->eresh_select,&valise->rest_nb_j);
    fscanf(ficsauv,%d %d %d %d %s %d,&valise->rest_lancement1,&valise->rest_lancement2,&valise->rest_lancement3,&valise->occurence_choix_class,&valise->nf_ishtar[50],&valise->occu);
    fscanf(ficsauv,%s %d %d %d %d %d,&joueur->nom[20],&joueur->nb_PA,&joueur->nb_PM,&joueur->nb_PV,&joueur->pos_x,&joueur->pos_y);
    fscanf(ficsauv,%d %d, &joueur->numero_ligne,j&oueur->numero_colonne);
    }
}
*/
