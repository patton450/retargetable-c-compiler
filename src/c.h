#ifndef SRC_C_H
#define SRC_C_H

/*
* ~~~~~~~~~~~~Exported Macros~~~~~~~~~~~~~~
*/

#ifdef __STDC__
    //ANSI C and greater will use thse macros
    #define ARGS(list) list
    #define VARARGS(newlist, oldlist,olddcls) newlist
#else
    //PRE-ANSI c will use this
    #define ARGS(list) ()
    #define VARARGS(newlist,oldlist,olddcls) oldlist olddcls
#endif

#define NULL ((void *)0)

/*
* Typedefs
*/
#include "config.h"

/*
* ~~~~~~~~~~~~Interface~~~~~~~~~~~~~~~
*/



/*
* ~~~~~~~~~~~~Exported Types~~~~~~~~~~~
*/

/*
* ~~~~~~~~~Exported Data~~~~~~~~~~~~~
*/


/*
* ~~~~~~~~~~Exported Functions~~~~~~~~
*/

#endif
