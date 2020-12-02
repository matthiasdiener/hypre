/*BHEADER**********************************************************************
 * Copyright (c) 2008,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * This file is part of HYPRE.  See file COPYRIGHT for details.
 *
 * HYPRE is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * $Revision$
 ***********************************************************************EHEADER*/


#include <math.h>
#include "_hypre_utilities.h"

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_swap( HYPRE_Int *v,
           HYPRE_Int  i,
           HYPRE_Int  j )
{
   HYPRE_Int temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_swap2(HYPRE_Int     *v,
           HYPRE_Real  *w,
           HYPRE_Int      i,
           HYPRE_Int      j )
{
   HYPRE_Int temp;
   HYPRE_Real temp2;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
   temp2 = w[i];
   w[i] = w[j];
   w[j] = temp2;
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_swap2i(HYPRE_Int  *v,
                  HYPRE_Int  *w,
                  HYPRE_Int  i,
                  HYPRE_Int  j )
{
   HYPRE_Int temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
   temp = w[i];
   w[i] = w[j];
   w[j] = temp;
}


/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/


/* AB 11/04 */

void hypre_swap3i(HYPRE_Int  *v,
                  HYPRE_Int  *w,
                  HYPRE_Int  *z,
                  HYPRE_Int  i,
                  HYPRE_Int  j )
{
   HYPRE_Int temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
   temp = w[i];
   w[i] = w[j];
   w[j] = temp;
   temp = z[i];
   z[i] = z[j];
   z[j] = temp;
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_swap3_d(HYPRE_Real  *v,
                  HYPRE_Int  *w,
                  HYPRE_Int  *z,
                  HYPRE_Int  i,
                  HYPRE_Int  j )
{
   HYPRE_Int temp;
   HYPRE_Real temp_d;


   temp_d = v[i];
   v[i] = v[j];
   v[j] = temp_d;
   temp = w[i];
   w[i] = w[j];
   w[j] = temp;
   temp = z[i];
   z[i] = z[j];
   z[j] = temp;
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_swap4_d(HYPRE_Real  *v,
                  HYPRE_Int  *w,
                  HYPRE_Int  *z,
                  HYPRE_Int *y,
                  HYPRE_Int  i,
                  HYPRE_Int  j )
{
   HYPRE_Int temp;
   HYPRE_Real temp_d;


   temp_d = v[i];
   v[i] = v[j];
   v[j] = temp_d;
   temp = w[i];
   w[i] = w[j];
   w[j] = temp;
   temp = z[i];
   z[i] = z[j];
   z[j] = temp;
   temp = y[i];
   y[i] = y[j];
   y[j] = temp;

}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_swap_d( HYPRE_Real *v,
                   HYPRE_Int  i,
                   HYPRE_Int  j )
{
   HYPRE_Real temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_swap_c( HYPRE_Complex *v,
                   HYPRE_Int      i,
                   HYPRE_Int      j )
{
   HYPRE_Complex temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

static inline void
hypre_swapND( HYPRE_Int **v,
              HYPRE_Int   ndim,
              HYPRE_Int   i,
              HYPRE_Int   j )
{
   HYPRE_Int d, temp;

   for (d = 0; d < ndim; d++)
   {
      temp    = v[d][i];
      v[d][i] = v[d][j];
      v[d][j] = temp;
   }
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_qsort0( HYPRE_Int *v,
             HYPRE_Int  left,
             HYPRE_Int  right )
{
   HYPRE_Int i, last;

   if (left >= right)
      return;
   hypre_swap( v, left, (left+right)/2);
   last = left;
   for (i = left+1; i <= right; i++)
      if (v[i] < v[left])
      {
         hypre_swap(v, ++last, i);
      }
   hypre_swap(v, left, last);
   hypre_qsort0(v, left, last-1);
   hypre_qsort0(v, last+1, right);
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_qsortND( HYPRE_Int **v,
                    HYPRE_Int   ndim,
                    HYPRE_Int   left,
                    HYPRE_Int   right )
{
   HYPRE_Int  i, d, last;
   HYPRE_Int  work;

   if (left >= right)
   {
      return;
   }

   hypre_swapND(v, ndim, left, (left+right)/2);
   last = left;
   for (i = left+1; i <= right; i++)
   {
      for (d = ndim - 1; d >= 0; d--)
      {
         if (v[d][i] < v[d][left])
         {
            hypre_swapND(v, ndim, ++last, i);
            break;
         }

         if (v[d][i] > v[d][left])
         {
            break;
         }
      }
   }
   hypre_swapND(v, ndim, left, last);
   hypre_qsortND(v, ndim, left, last-1);
   hypre_qsortND(v, ndim, last+1, right);
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_qsort1( HYPRE_Int *v,
	     HYPRE_Real *w,
             HYPRE_Int  left,
             HYPRE_Int  right )
{
   HYPRE_Int i, last;

   if (left >= right)
      return;
   hypre_swap2( v, w, left, (left+right)/2);
   last = left;
   for (i = left+1; i <= right; i++)
      if (v[i] < v[left])
      {
         hypre_swap2(v, w, ++last, i);
      }
   hypre_swap2(v, w, left, last);
   hypre_qsort1(v, w, left, last-1);
   hypre_qsort1(v, w, last+1, right);
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

void hypre_qsort2i( HYPRE_Int *v,
                    HYPRE_Int *w,
                    HYPRE_Int  left,
                    HYPRE_Int  right )
{
   HYPRE_Int i, last;

   if (left >= right)
   {
      return;
   }
   hypre_swap2i( v, w, left, (left+right)/2);
   last = left;
   for (i = left+1; i <= right; i++)
   {
      if (v[i] < v[left])
      {
         hypre_swap2i(v, w, ++last, i);
      }
   }
   hypre_swap2i(v, w, left, last);
   hypre_qsort2i(v, w, left, last-1);
   hypre_qsort2i(v, w, last+1, right);
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

/*   sort on w (HYPRE_Real), move v (AB 11/04) */


void hypre_qsort2( HYPRE_Int *v,
	     HYPRE_Real *w,
             HYPRE_Int  left,
             HYPRE_Int  right )
{
   HYPRE_Int i, last;

   if (left >= right)
      return;
   hypre_swap2( v, w, left, (left+right)/2);
   last = left;
   for (i = left+1; i <= right; i++)
      if (w[i] < w[left])
      {
         hypre_swap2(v, w, ++last, i);
      }
   hypre_swap2(v, w, left, last);
   hypre_qsort2(v, w, left, last-1);
   hypre_qsort2(v, w, last+1, right);
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

/* sort on v, move w and z (AB 11/04) */

void hypre_qsort3i( HYPRE_Int *v,
                    HYPRE_Int *w,
                    HYPRE_Int *z,
                    HYPRE_Int  left,
                    HYPRE_Int  right )
{
   HYPRE_Int i, last;

   if (left >= right)
   {
      return;
   }
   hypre_swap3i( v, w, z, left, (left+right)/2);
   last = left;
   for (i = left+1; i <= right; i++)
   {
      if (v[i] < v[left])
      {
         hypre_swap3i(v, w, z, ++last, i);
      }
   }
   hypre_swap3i(v, w, z, left, last);
   hypre_qsort3i(v, w, z, left, last-1);
   hypre_qsort3i(v, w, z, last+1, right);
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

/* sort min to max based on absolute value */

void hypre_qsort3_abs(HYPRE_Real *v,
                      HYPRE_Int *w,
                      HYPRE_Int *z,
                      HYPRE_Int  left,
                      HYPRE_Int  right )
{
   HYPRE_Int i, last;
   if (left >= right)
      return;
   hypre_swap3_d( v, w, z, left, (left+right)/2);
   last = left;
   for (i = left+1; i <= right; i++)
      if (fabs(v[i]) < fabs(v[left]))
      {
         hypre_swap3_d(v,w, z, ++last, i);
      }
   hypre_swap3_d(v, w, z, left, last);
   hypre_qsort3_abs(v, w, z, left, last-1);
   hypre_qsort3_abs(v, w, z, last+1, right);
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

/* sort min to max based on absolute value */

void hypre_qsort4_abs(HYPRE_Real *v,
                      HYPRE_Int *w,
                      HYPRE_Int *z,
                      HYPRE_Int *y,
                      HYPRE_Int  left,
                      HYPRE_Int  right )
{
   HYPRE_Int i, last;
   if (left >= right)
      return;
   hypre_swap4_d( v, w, z, y, left, (left+right)/2);
   last = left;
   for (i = left+1; i <= right; i++)
      if (fabs(v[i]) < fabs(v[left]))
      {
         hypre_swap4_d(v,w, z, y, ++last, i);
      }
   hypre_swap4_d(v, w, z, y, left, last);
   hypre_qsort4_abs(v, w, z, y, left, last-1);
   hypre_qsort4_abs(v, w, z, y, last+1, right);
}


/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/
/* sort min to max based on absolute value */

void hypre_qsort_abs(HYPRE_Real *w,
                     HYPRE_Int  left,
                     HYPRE_Int  right )
{
   HYPRE_Int i, last;
   if (left >= right)
      return;
   hypre_swap_d( w, left, (left+right)/2);
   last = left;
   for (i = left+1; i <= right; i++)
      if (fabs(w[i]) < fabs(w[left]))
      {
         hypre_swap_d(w, ++last, i);
      }
   hypre_swap_d(w, left, last);
   hypre_qsort_abs(w, left, last-1);
   hypre_qsort_abs(w, last+1, right);
}
