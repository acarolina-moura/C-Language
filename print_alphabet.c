#include <stdio.h>
#include <unistd.h>

// void welcome(){
//     printf("Welcome ASCII\n");
// }

// int main()
// {
//     welcome();
//     char count = 97;
//     while (count <= 122)
//     {
//         write(1,&count, 1);
//         count++;
//     }
//     return 0;
// }


void ft_print_alphabet(void)
{
    char count;

    count = 97;
    while (count >= 97 && count <= 122)
    {
        write(1, &count, 1);
        count++;
    }
  
}
  int main(){
        ft_print_alphabet();
        return 0;
  }


