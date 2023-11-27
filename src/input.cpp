#include "input.h"

void initTermios(int echo)
{
	tcgetattr(0, &old); /* grab old terminal i/o settings */
	current = old; /* make new settings same as old settings */
	current.c_lflag &= ~ICANON; /* disabled buffered i/o */
	if (echo) {
		current.c_lflag |= ECHO; /* set echo mode */
	} else {
		current.c_lflag &= ~ECHO; /* set no echo mode */
	}
	tcsetattr(0, TCSANOW, &current); /* use these new terminal settings now */
}

void resetTermios(void)
{
	tcsetattr(0, TCSANOW, &old);
}

char getch_(int echo)
{
	char ch;
	initTermios(echo);
	ch = getchar();
	resetTermios();
	return ch;
}

char getch(void) {
	return getch_(0);
}

char getche(void) {
	return getch_(1);
}
