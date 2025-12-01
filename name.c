#include <stdio.h>

int main() {
    char name[10];  // 9 chars + \0

    printf("Type your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your name is: %s\n", name);

    return 0;
}

