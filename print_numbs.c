#include <stdio.h>

// To Declare Functions out of Main Function

void abertura(){
        printf("Welcome to the Counting Game\n");
        printf("__________________|      |____________________________________________\n");
        printf("     ,--.    ,--.          ,--.   ,--.\n");
        printf("    |oo  | _  \\  `.       | oo | |  oo|\n");
        printf("o  o|~~  |(_) /   ;       | ~~ | |  ~~|o  o  o  o  o  o  o  o  o  o  o\n");
        printf("    |/\\/\\|   '._,'        |/\\/\\| |/\\/\\|\n");
        printf("__________________        ____________________________________________\n");
        printf("                  |      |\n");
    }



int main()
{    
    abertura();
    int count = 1;
    while (count <= 99){
         printf("%d\n", count);
         count++;
    }
   
    return 0;
}
