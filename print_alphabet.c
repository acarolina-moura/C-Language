// #include <unistd.h>
// #include <stdio.h>

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

#include <unistd.h>

void ft_print_alphabet(void)
{
    char count; // Declare a variable 'count' of type char

    count = 97; // Assign the ASCII value of lowercase 'a' to 'count'
    while (count >= 97 && count <= 122) // Loop while 'count' is within the range of lowercase letters 'a' to 'z'
    {
        write(1, &count, 1); // Write the character represented by 'count' to the standard output
        count++; // Increment 'count' to move to the next character in the alphabet
    }
  
}
  int main(){
        ft_print_alphabet();
        return 0;
  }


