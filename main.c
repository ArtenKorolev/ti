#include <stdbool.h>
#include "include/commands/commands.h"

int main(int argc, char *argv[]) 
{
    const char *current_file_path;
    const char *user_input;

    printf("Welcome to TI, minimalistic console text redactor in one .exe file! It was coded by C!");
    printf("Enter path of file, with which you want to work: ");
    scanf("%99s", user_input);
    strcpy(current_file_path, user_input);

    while (true) 
    {
        printf("Choose operation to do: \n1 - read file\n2 - write file\n3 - rewrite file");
        scanf("%99s", user_input);

        if (user_input == "1") 
        {
            struct File file(user_input);

            char *content = read_file_content(file);

            printf("%s", content);
        }
    }
    return 0;
}