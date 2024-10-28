#include <unistd.h>
#include <stdio.h>

int main(){
    char name [9];
    printf("type your name: ");
    fflush(stdout);

    read(0, &name, 9);
    write(1, &name, 9);

    printf("Your name is: %s\n", name);

    return 0;
}