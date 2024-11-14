#include <stdio.h>
#include <stdlib.h>
#define MAXNAME 50

#include "logger.h"

int getname(char name[]);
int selectfunc();


int main(void) {
    logger("---------------------------------------------------------- ");
    logger("################## Starting application ##################");
    logger("---------------------------------------------------------- ");
    
    char name[MAXNAME];

    printf("What is your name? ");
    getname(name);
    logger("User logged");

    logger("Printing hello message");
    printf("Hello, %s!\n", name);

    for(;;) {
        
    }

    logger("Closing the application")
}


int getname(char name[]) {
    int i,c; 
    for(i = 0; i < MAXNAME && (c = getchar()) != '\n' ;++i) {
        name[i] = c;
    }

    if(c=='\n') {
        name[i] = '\0';
        //name[i] = c;
        ++i;
    }
    //name[i] = '\0';
    
    logger("Player name fetched successfully");
    return EXIT_SUCCESS;
}


int selectfunc() {
	// Here will be a switch-case function that will select what user wants to do.
	return 0;

}
