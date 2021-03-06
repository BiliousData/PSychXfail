/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#ifndef PSXF_GUARD_MOVIE_H
#define PSXF_GUARD_MOVIE_H

#include "psx.h"
#include "pad.h"

//define controller
#define INPUT_STARTMOVIE  (PAD_CROSS | PAD_START)

//Movie interface
//void Movie_Play(const char *path, u32 length);

typedef struct
{
  u8 select; //change number to play different movies
  u8 playing; //0 means not started yet, 1 means movie is playing, and 2 means movie has ended.
  u8 weekdone; //STUPID variable, for making setting it at the end or beginning of a week
  //s32 ratio; //for selecting movie's aspect ratio
} Movie;

//typedef enum
//{
//  MovieRatio_Standard, //(most likely) squished 4:3
//  MovieRatio_Widescreen, //16:9 with black bars on top and bottom
//} MovieRatio;

extern Movie movie;

void Movie_Tick();

#endif