#include <stdio.h>
#include <string.h>

#define PASSWORD    "letmein"
int main(void)
{
    long int ret = 0;
    char flag[8] = {0};
    char buffer[8] = {0}; 
    
    printf("Enter the password:\n");
    fgets(buffer, 16, stdin);
    // make the 8th character null instead of newline
    buffer[7] = 0;

    if(strcmp(buffer, PASSWORD))
    {
        ret = -1;
        printf("Wrong Password\n");
    }
    else
    {
        ret = 0;
        printf("Correct Password\n");
        flag[0] = 'y';
    }

    if(flag[0] == 'y')
    {
        // give access priveleges to user
        printf ("------------------------\n");
        printf ("Access Granted!\n");
        printf ("------------------------\n");
    }

    return ret;
}
