/*
 * See Licensing and Copyright notice in naev.h
 */



#ifndef INPUT_H
#  define INPUT_H


#include "SDL.h"


#define KMOD_ALL  0xffff /**< Comfort thing SDL is lacking. */


/* input types */
typedef enum { KEYBIND_NULL, KEYBIND_KEYBOARD, KEYBIND_JAXIS, KEYBIND_JBUTTON } KeybindType;


/*
 * set input
 */
void input_setDefault (void);
void input_setKeybind( char *keybind, KeybindType type, int key, SDLMod mod, int reverse );
int input_getKeybind( char *keybind, KeybindType *type, SDLMod *mod, int *reverse );

/*
 * handle input
 */
void input_handle( SDL_Event* event );

/*
 * init/exit
 */
void input_init (void);
void input_exit (void);


#endif /* INPUT_H */
