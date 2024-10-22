#include <stdio.h>
#include <stdlib.h>
#define MAXNAME 50

int getname(char name[]);

int main(void) {
    char name[MAXNAME];

    printf("What is your name? ");
    int err = getname(name);

    if(err != 0)
        printf("Error reading the name: %d", err);

    printf("Hello, %s!\n", name);
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
        
    return EXIT_SUCCESS;
}
