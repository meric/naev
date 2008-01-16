/*
 * See Licensing and Copyright notice in naev.h
 */



#ifndef RNG_H
#  define RNG_H


#include <limits.h>


#define RNG(L,H)  ((int)L + (int)((double)(H-L+1) * randfp()))
#define RNGF()		(randfp())


void rng_init (void);
unsigned int randint (void);
double randfp (void);


#endif /* RNG_H */
