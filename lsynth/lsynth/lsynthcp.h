/*
 * This file describes the interface to the LDRAW synthesizable parts library.
 * Kevin Clague
 */
#ifndef LSYNTH_H
#define LSYNTH_H

#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include <string.h>
#include "mathlib.h"

#define ACCY (1e-6)

typedef struct {
  char      type[128];
  PRECISION orient[3][3];
  PRECISION offset[3];
  int       attrib;
} part_t;

extern PRECISION hose_res_angle;
extern PRECISION band_res;

void
output_line(
  FILE           *output,
  int             ghost,
  int             color,
  PRECISION       a,
  PRECISION       b,
  PRECISION       c,
  PRECISION       d,
  PRECISION       e,
  PRECISION       f,
  PRECISION       g,
  PRECISION       h,
  PRECISION       i,
  PRECISION       j,
  PRECISION       k,
  PRECISION       l,
  char            *type);

/************************************************************************
 *
 * Structures used to define the types of bands and hoses we can synthesize
 * and the constraints we can use to describe them.
 *
 **********************************************************************/

#define STRETCH 0
#define FIXED   1
#define FIXED3  2

#endif