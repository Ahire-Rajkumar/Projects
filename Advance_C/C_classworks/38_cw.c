#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main() {
    char **env = environ;
    
    // Loop through all the environmental variables
    while (*env != NULL) {
        printf("%s\n", *env);
        env++;
    }

    return 0;
}

