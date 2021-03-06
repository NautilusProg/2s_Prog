/***********************************************
 *
 * @Purpose: Manage all GUI related functions and various definitions.
 * @Author: Arnau Sanz and Josep Segarra.
 * @Creation date: 27/03/2020 (DD/MM/YYYY)
 * @Date of last modification: 09/05/2020
 *
***********************************************/

#ifndef PROGPRACTICE2_MY_ALLEGRO_UI_H
#define PROGPRACTICE2_MY_ALLEGRO_UI_H

#include "LS_allegro.h"
#include "my_race_basic.h"
#include "my_driver_sortedlist.h"

#define WIN_TITLE_CONFIGURATOR "LS Racing - Configurator"
#define WIN_TITLE_RACE "LS Racing - Race"

#define FONT_TITLE LARGE

/***********************************************
 *
 * @Purpose         Substitute for al_draw_textf with less inputs and same practical
 *                  functionality for the scope of this project.
 * @Parameters      in: size = size of the text to display.
 *                  in: color = color of the text to display.
 *                  in: xpos = position of the text in the x axis.
 *                  in: ypos = position of the text in the y axis.
 *                  in: input = dynamic 'String', format of the text to display.
 *                  in: content = dynamic 'String', the text to display.
 * @Return          ---
 *
************************************************/
void printText (int size, int color, int xpos, int ypos, char * input, char * content);

/***********************************************
 *
 * @Purpose:        Prints the first option screen (car parts configuration).
 * @Parameters:     in: background = bitmap for the background image.
 *                  in: darkMode = true (!0) to show dark mode, false (0) otherwise.
 *                  in: parts[6] = bitmap array for the parts images.
 *                  in: partCategory = part the user has selected.
 *                  in: partModel = model of part the user has selected.
 *                  in: partGroup = struct with all the part data (needed to show).
 * @Return:         ---
 *
************************************************/
void printConfig (ALLEGRO_BITMAP * background, int darkMode, ALLEGRO_BITMAP * parts[6], int partCategory, int partModel, GroupPart * partGroup);

/***********************************************
 *
 * @Purpose:        Prints the second option screen (gp info).
 * @Parameters:     in: darkMode = true (!0) to show dark mode, false (0) otherwise.
 *                  in: gp = struct with all the circuit data.
 * @Return:         ---
 *
************************************************/
void printGP (int darkMode, Circuit gp);

/***********************************************
 *
 * @Purpose:        Prints the traffic lights screen (second option screen).
 * @Parameters:     in: darkMode = true (!0) to show dark mode, false (0) otherwise.
 *                  in: on[5] = indicates which traffic lights are on.
 * @Return:        ---
 *
************************************************/
void printTrafficLights (int darkMode, int on[5]);

/***********************************************
 *
 * @Purpose:       Prints the race screen (second option screen) where all the cars move and info is displayed.
 * @Parameters:     in: darkMode = true (!0) to show dark mode, false (0) otherwise.
 *                  in: driver = struct with all the driver data.
 *                  in: car = struct with all the car data.
 *                  in: pilots = dynamic array of structs with all pilots data.
 *                  in: pilotQty = total number of pilots.
 *                  in: timeElapsed = number of seconds that have passed since the race has started.
 *                  in: pstopRemainingTime = number of seconds left during pit stop.
 *                  in: pstopCounter = number of pit stops done by player.
 *                  in: pstopNeeded = number of pit stops required by the circuit.
 *                  in: pstopStatus = indicates if player is doing a pit stop or not.
 *                  in: carPos = dynamic array indicating car positions.
 *                  in: carImage = bitmap for the car image.
 * @Return:        ---
 *
************************************************/
void printRace (int darkMode, Driver * driver, Car * car, Pilot * pilots, int pilotQty, float timeElapsed, float pstopRemainingTime, int pstopCounter, int pstopNeeded, int pstopStatus, int * carPos, ALLEGRO_BITMAP * carImage);

/***********************************************
 *
 * @Purpose:       Prints the finished screen (second option screen) when a race is finished.
 * @Parameters:     in: darkMode = true (!0) to show dark mode, false (0) otherwise.
 *                  in: driver = struct with all the driver data.
 *                  in: pilotQty = total number of pilots.
 *                  in: list = the standing for the current circuit.
 * @Return:        ---
 *
************************************************/
void printFinish (int darkMode, Driver * driver, int pilotQty, SortedLD * list);

/***********************************************
 *
 * @Purpose:       Prints the standings screen (third option screen) and the specific standing asked.
 * @Parameters:     in: darkMode = true (!0) to show dark mode, false (0) otherwise.
 *                  in: list = standing for the gp we're looking at at the moment.
 * @Return:        ---
 *
************************************************/
void printStandings (int darkMode, SortedLD * list, char * gpName);

/***********************************************
 *
 * @Purpose:     	Switches the menu to dark mode if is in bright mode or viceversa.
 * @Parameters:     (in/out): mode = integer asociated with the background color.
 * @Return:          Returns the integer asociated with the new background color.
 *
************************************************/
int switchDarkMode (int * mode);

/***********************************************
 *
 * @Purpose:        Gets the background color.
 * @Parameters:     (in/out): mode = integer asociated with the background color.
 * @Return:         Returns the integer asociated with the background color.
 *
************************************************/
int getBackgroundColor (int * mode);

#endif //PROGPRACTICE2_MY_ALLEGRO_UI_H
