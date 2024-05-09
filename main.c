#include "bibliotheque.h"

int main()
{
    srand(time(NULL));
    allegro_init();
    install_keyboard();
    install_mouse();

    ///-------------------------------------------------------------------------------------------------------------------------------------
    ///-------------------------------------------------- INITIALISATION DU MODE GRAPHIQUE -------------------------------------------------
    ///-------------------------------------------------------------------------------------------------------------------------------------
    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,1300,800,0,0)!=0)
    {
        allegro_message("Probleme avec gfx mode");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    ///-------------------------------------------------------------------------------------------------------------------------------------
    ///-------------------------------------------------- INSTALLATION DU MODE MUSIQUE -------------------------------------------------
    ///-------------------------------------------------------------------------------------------------------------------------------------
    install_sound(DIGI_AUTODETECT,MIDI_NONE,0);


    ///-------------------------------------------------------------------------------------------------------------------------------------
    ///------------------------------------------------------------- AVANT JEU -------------------------------------------------------------
    ///-------------------------------------------------------------------------------------------------------------------------------------



    //Creation et initalisation de la valise dans le main
    t_valise valise;
    init_valise(&valise);

    //Creation structure cases
    t_cases cases[17][17];
    crea_struct_cases(valise,cases);

    //Creation strucure case choisie
    t_cases cases_choisie;


    //creation et initialisation de la structure joueur

    t_player* player[4];
    t_classe classe;
    init_joueurs(valise,player,cases);
    //initialisation(&player,valise,cases);

    ///-------------------------------------------------------------------------------------------------------------------------------------
    ///---------------------------------------------------------- BOUCLE DE JEU -------------------------------------------------------------
    ///-------------------------------------------------------------------------------------------------------------------------------------

    //jouer_music(&valise);


    while(!key[KEY_ESC])

    {


        clear_bitmap(valise.double_buffer);
        if(key[KEY_UP])
        {
            jouer_music(&valise);
        }
        if(key[KEY_DOWN])
        {
            stop_music(valise);
        }


        if(valise.choix_menu==0)
        {

            menu_principale(&valise);
        }
        fflush(stdin);
        if(valise.choix_menu==1)
        {
            if(valise.rest_lancement3==0)
            {
                rest(200);
                valise.rest_lancement3=1;
            }
            stretch_blit(valise.ciel,valise.double_buffer,0,0,valise.ciel->w,valise.ciel->h,0,0,SCREEN_W,SCREEN_H);
            masked_blit(valise.map,valise.double_buffer,0,0,0,0,SCREEN_W,SCREEN_H);
            affichage_plateau(&valise, cases);
            stretch_sprite(valise.double_buffer,valise.pause,1150,40,SCREEN_W/15-20,SCREEN_H/15);
            if(valise.nombre_joueurs==2)
            {
                joueur_est_attaque(player[0], &valise);
                joueur_est_attaque(player[1], &valise);
                phase_de_jeu1(&valise,player[0],cases,&cases_choisie);
                phase_de_jeu2(&valise,player[1],cases,&cases_choisie);
                if(valise.affich_sprite==0)
                {
                    stretch_sprite(valise.double_buffer,player[0]->perso,player[0]->pos_x-27,player[0]->pos_y-27,SCREEN_W/18,SCREEN_H/18);
                    stretch_sprite(valise.double_buffer,player[1]->perso,player[1]->pos_x-27,player[1]->pos_y-27,SCREEN_W/18,SCREEN_H/18);
                }

            }
            if(valise.nombre_joueurs==3)
            {
                joueur_est_attaque(player[0], &valise);
                joueur_est_attaque(player[1], &valise);
                joueur_est_attaque(player[2], &valise);
                phase_de_jeu1(&valise,player[0],cases,&cases_choisie);
                phase_de_jeu2(&valise,player[1],cases,&cases_choisie);
                phase_de_jeu3(&valise,player[2],cases,&cases_choisie);
                if(valise.affich_sprite==0)
                {
                    stretch_sprite(valise.double_buffer,player[0]->perso,player[0]->pos_x-27,player[0]->pos_y-27,SCREEN_W/18,SCREEN_H/18);
                    stretch_sprite(valise.double_buffer,player[1]->perso,player[1]->pos_x-27,player[1]->pos_y-27,SCREEN_W/18,SCREEN_H/18);
                    stretch_sprite(valise.double_buffer,player[2]->perso,player[2]->pos_x-27,player[2]->pos_y-27,SCREEN_W/18,SCREEN_H/18);
                }
            }
            if(valise.nombre_joueurs==4)
            {
                joueur_est_attaque(player[0], &valise);
                joueur_est_attaque(player[1], &valise);
                joueur_est_attaque(player[2], &valise);
                joueur_est_attaque(player[3], &valise);
                phase_de_jeu1(&valise,player[0],cases,&cases_choisie);
                phase_de_jeu2(&valise,player[1],cases,&cases_choisie);
                phase_de_jeu3(&valise,player[2],cases,&cases_choisie);
                phase_de_jeu4(&valise,player[3],cases,&cases_choisie);
                if(valise.affich_sprite==0)
                {
                    stretch_sprite(valise.double_buffer,player[0]->perso,player[0]->pos_x-27,player[0]->pos_y-27,SCREEN_W/18,SCREEN_H/18);
                    stretch_sprite(valise.double_buffer,player[1]->perso,player[1]->pos_x-27,player[1]->pos_y-27,SCREEN_W/18,SCREEN_H/18);
                    stretch_sprite(valise.double_buffer,player[2]->perso,player[2]->pos_x-27,player[2]->pos_y-27,SCREEN_W/18,SCREEN_H/18);
                    stretch_sprite(valise.double_buffer,player[3]->perso,player[3]->pos_x-27,player[3]->pos_y-27,SCREEN_W/18,SCREEN_H/18);
                }
            }

            if((pow(1183-mouse_x,2))+(pow(66-mouse_y,2))<=pow(33,2))
            {
                stretch_sprite(valise.double_buffer,valise.pause,1148,39,SCREEN_W/13-20,SCREEN_H/13);

                if(mouse_b&1)
                {
                    valise.choix_menu=2;
                }
            }
            /* if(valise.affich_sprite==0)
             {
                 if(valise.nombre_joueurs==2)
                 {
                     textprintf_ex(valise.double_buffer, font, 1000, 100, makecol(0, 200, 255), -1, "PV J1 : %d", player[0]->nb_PV);
                     textprintf_ex(valise.double_buffer, font, 1000, 120, makecol(0, 200, 255), -1, "PV J2 : %d", player[1]->nb_PV);
                     printf("test");

                 }
                 if(valise.nombre_joueurs==3)
                 {
                     textprintf_ex(valise.double_buffer,font,1000,100,makecol(0,200,255),-1,"PV J1 : %d",player[0]->nb_PV);

                     textprintf_ex(valise.double_buffer,font,1000,120,makecol(0,200,255),-1,"PV J2 : %d",player[1]->nb_PV);
                     textprintf_ex(valise.double_buffer,font,1000,140,makecol(0,200,255),-1,"PV J3 : %d",player[2]->nb_PV);


                 }
                 if(valise.nombre_joueurs==4)
                 {
                     textprintf_ex(valise.double_buffer,font,1000,100,makecol(0,200,255),-1,"PV J1 : %d",player[0]->nb_PV);
                     textprintf_ex(valise.double_buffer,font,1000,120,makecol(0,200,255),-1,"PV J2 : %d",player[1]->nb_PV);
                     textprintf_ex(valise.double_buffer,font,1000,140,makecol(0,200,255),-1,"PV J3 : %d",player[2]->nb_PV);
                     textprintf_ex(valise.double_buffer,font,1000,160,makecol(0,200,255),-1,"PV J4 : %d",player[3]->nb_PV);

                 }

             }*/
        }

        if(valise.choix_menu==4)
        {
            credit(&valise);
        }

        if(valise.choix_menu==2)
        {
            stretch_blit(valise.ciel,valise.double_buffer,0,0,valise.ciel->w,valise.ciel->h,0,0,SCREEN_W,SCREEN_H);

            menu_pause(&valise);



        }

        if (valise.choix_menu==3)
        {
            creditmenu(&valise);
        }
        if (valise.choix_menu==5)
        {
            if(valise.rest_lancement2==0)
            {
                rest(200);
                valise.rest_lancement2=1;
            }

            nb_joueurs(&valise);


        }
        if (valise.choix_menu==6)
        {
            if(valise.rest_nb_j==0)
            {
                rest(200);
                valise.rest_nb_j=1;
            }
            if(valise.nombre_joueurs==2)
            {
                if(valise.occurence_choix_class==0)
                {

                    choix_classes(&valise,player[0],cases);

                }
                if(valise.occurence_choix_class==1)
                {

                    choix_classes(&valise,player[1],cases);

                }
                if(valise.occurence_choix_class>=2)
                {
                    if(valise.rest_lancement1==0)
                    {
                        rest(200);
                        valise.rest_lancement1=1;
                    }
                    lancer_le_jeu(&valise);
                }
            }
            if(valise.nombre_joueurs==3)
            {
                if(valise.occurence_choix_class==0)
                {

                    choix_classes(&valise,player[0],cases);

                }
                if(valise.occurence_choix_class==1)
                {

                    choix_classes(&valise,player[1],cases);

                }
                if(valise.occurence_choix_class==2)
                {

                    choix_classes(&valise,player[2],cases);

                }
                if(valise.occurence_choix_class>=3)
                {
                    if(valise.rest_lancement1==0)
                    {
                        rest(200);
                        valise.rest_lancement1=1;
                    }
                    lancer_le_jeu(&valise);
                }
            }
            if(valise.nombre_joueurs==4)
            {
                if(valise.occurence_choix_class==0)
                {

                    choix_classes(&valise,player[0],cases);

                }
                if(valise.occurence_choix_class==1)
                {

                    choix_classes(&valise,player[1],cases);

                }
                if(valise.occurence_choix_class==2)
                {

                    choix_classes(&valise,player[2],cases);

                }
                if(valise.occurence_choix_class==3)
                {

                    choix_classes(&valise,player[3],cases);

                }
                if(valise.occurence_choix_class>=4)
                {
                    if(valise.rest_lancement1==0)
                    {
                        rest(200);
                        valise.rest_lancement1=1;
                    }
                    lancer_le_jeu(&valise);
                }


            }

        }
        if(valise.choix_menu==10)
        {
            if(valise.oui==0)
            {
                affichage_nb_gilg(&valise);
            }
            if(valise.oui==1)
            {
                affichage_nb_ishtar(&valise);
            }
            if(valise.oui==2)
            {
                affichage_nb_enki(&valise);
            }
            if(valise.oui==3)
            {
                affichage_nb_eresh(&valise);
            }

        }




        affichage_curseur(valise);
        blit(valise.double_buffer,screen,0,0,0,0,SCREEN_W,SCREEN_H);
    }

    destroy_bitmap(valise.double_buffer);
    destroy_bitmap(valise.ciel);
    destroy_bitmap(valise.curseur);
    destroy_bitmap(valise.halo);
    destroy_bitmap(valise.cases_possibles);
    destroy_bitmap(valise.plateforme);
    destroy_bitmap(valise.select);
    destroy_sample(valise.music_1);
    destroy_bitmap(valise.accueil);
    destroy_bitmap(valise.bouton1);
    destroy_bitmap(valise.bouton2);
    destroy_bitmap(valise.bouton3);
    destroy_bitmap(valise.bouton4);
    destroy_bitmap(valise.bouton5);
    destroy_bitmap(valise.pause);
    destroy_bitmap(valise.menupause);
    destroy_bitmap(valise.reprendre);
    destroy_bitmap(valise.sauvegarde);
    destroy_bitmap(valise.cyprien);
    destroy_bitmap(valise.jules);
    destroy_bitmap(valise.pa);
    destroy_bitmap(valise.jn);
    destroy_bitmap(valise.equipe);
    destroy_bitmap(valise.contact1);
    destroy_bitmap(valise.contact2);
    destroy_bitmap(valise.contact3);
    destroy_bitmap(valise.contact4);
    destroy_bitmap(valise.retour);
    destroy_bitmap(valise.barre_perso);
    destroy_bitmap(valise.massue);
    destroy_bitmap(valise.fond_babylone);
    destroy_bitmap(valise.carte_gilg);
    destroy_bitmap(valise.carte_isht);
    destroy_bitmap(valise.carte_enki);
    destroy_bitmap(valise.carte_eresh);
    destroy_bitmap(valise.carte_gilg_select);
    destroy_bitmap(valise.carte_isht_select);
    destroy_bitmap(valise.carte_enki_select);
    destroy_bitmap(valise.carte_eresh_select);
    destroy_bitmap(valise.fond_ziggu_jour);
    destroy_bitmap(valise.fond_ziggu_nuit);
    destroy_bitmap(valise.fond_ruines);
    destroy_bitmap(valise.mur_babylone);
    destroy_bitmap(valise.dessin_gilg);
    destroy_bitmap(valise.dessin_isht);
    destroy_bitmap(valise.dessin_enki);
    destroy_bitmap(valise.dessin_eresh);
    destroy_bitmap(valise.cadran_hist_gilg);
    destroy_bitmap(valise.cadran_hist_enki);
    destroy_bitmap(valise.cadran_hist_isht);
    destroy_bitmap(valise.cadran_hist_eresh);
    destroy_bitmap(valise.cadran_nom_gilg);
    destroy_bitmap(valise.cadran_nom_enki);
    destroy_bitmap(valise.cadran_nom_isht);
    destroy_bitmap(valise.cadran_nom_eresh);
    destroy_bitmap(valise.cadran_stat_gilg);
    destroy_bitmap(valise.cadran_stat_enki);
    destroy_bitmap(valise.cadran_stat_isht);
    destroy_bitmap(valise.cadran_stat_eresh);
    destroy_bitmap(valise.cadran_sort_gilg);
    destroy_bitmap(valise.cadran_sort_enki);
    destroy_bitmap(valise.cadran_sort_isht);
    destroy_bitmap(valise.cadran_sort_eresh);
    destroy_bitmap(valise.choisir_classe);
    destroy_bitmap(valise.bouton_retour_class);
    destroy_bitmap(valise.haut_de_page);
    destroy_bitmap(valise.tete_gilg);
    destroy_bitmap(valise.tete_enki);
    destroy_bitmap(valise.tete_isht);
    destroy_bitmap(valise.tete_eresh);
    destroy_bitmap(valise.tete_gilg_select);
    destroy_bitmap(valise.tete_enki_select);
    destroy_bitmap(valise.tete_isht_select);
    destroy_bitmap(valise.tete_eresh_select);
    destroy_bitmap(valise.bouton_2_j);
    destroy_bitmap(valise.bouton_3_j);
    destroy_bitmap(valise.bouton_4_j);
    destroy_bitmap(valise.cadran_nb_j);
    destroy_bitmap(valise.cadran_lancement);





    allegro_exit();
    return 0;


}
END_OF_MAIN();
