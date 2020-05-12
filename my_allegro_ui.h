/***********************************************
 *
 * @Purpose: //TODO
 * @Author: Arnau Sanz and Josep Segarra.
 * @Creation date: 27/03/2020 (DD/MM/YYYY)
 * @Date of last modification: 09/05/2020
 *
***********************************************/

#ifndef PROGPRACTICE2_MY_ALLEGRO_UI_H
#define PROGPRACTICE2_MY_ALLEGRO_UI_H

#include "LS_allegro.h"
#include "my_race_basic.h"

#define WIN_TITLE_CONFIGURATOR "LS Racing - Configurator"
#define WIN_WIDTH 1000
#define WIN_HEIGHT 600
#define TITLE LARGE

void printConfig (ALLEGRO_BITMAP * background, int darkMode, ALLEGRO_BITMAP * parts[6], int partCategory, int partModel, GroupPart * partGroup);
void printText(int size, int color, int xpos, int ypos, char * input, char * content);
int switchDarkMode(int * mode);
int getBackgroundColor (int * mode);

#endif //PROGPRACTICE2_MY_ALLEGRO_UI_H
