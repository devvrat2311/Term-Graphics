#include <termios.h>
#include <stdio.h>

static struct termios old, current;

/* Initialize new terminal i/o settings */
void initTermios(int echo);

/* Restore old terminal i/o settings */
void resetTermios(void);

/* Read 1 Character - echo defines echo mode */
char getch_(int echo);

char getch(void); //doesn't echo the value

char getche(void);//echoes the value
