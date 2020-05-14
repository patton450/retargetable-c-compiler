/*
* ~~~~~~~~~~~~~~~Exported Functions~~~~~~~~~~~~~
*/

extern void outs(char * c);         //pg 16/17

extern void print(char *fmt, ...);     //pg 18

/*
* ~~~~~~~~~~~~~~~~~~~Functions~~~~~~~~~~~~~~~~~~
*/

void outs(char * s){
    char * p;
    //Assumes that the string is null termianted!!
    for (p = bp; (*p = *s++) != 0; p++){
        bp = p;
        if(bp > io[fd]->limit){
            outflush();
        }
    }
}


void prints(char * fmt,  ...){
    va_list ap;
    va_init(ap, fmt);

    vprint(fmt, ap);
    va_end(ap);
}
