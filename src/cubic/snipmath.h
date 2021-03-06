/* BEEBS cubic benchmark

   Contributor: James Pallister <james.pallister@bristol.ac.uk>
   From http://www.snippets.org/.

   This file is part of the Bristol/Embecosm Embedded Benchmark Suite.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>. */

/* +++Date last modified: 05-Jul-1997 */

/*
 **  SNIPMATH.H - Header file for SNIPPETS math functions and macros
 */

#ifndef SNIPMATH__H
#define SNIPMATH__H

#include <math.h>

#include "pi.h"
#include "sniptype.h"

/*
 **  Callable library functions begin here
 */

void    SolveCubic(double a, double b, double c,      /* Cubic.C        */
      double d, int *solutions,
      double *x);


/*
 **  File: ISQRT.C
 */

struct int_sqrt {
   unsigned sqrt,
            frac;
};

#endif /* SNIPMATH__H */

/* vim: set ts=3 sw=3 et: */
