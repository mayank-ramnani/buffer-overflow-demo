#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PASSWORD    "secure"

long int authenticate()
{
    long int ret = 0;
    char flag[8] = {0};
    char buffer[8] = {0}; 

    printf("Enter the password:\n");
    fgets(buffer, 16, stdin);

    if(strncmp(buffer, PASSWORD, 6))
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
        system("tail /etc/passwd");
        printf ("------------------------\n");
    }
    return ret;
}

int main(void)
{
    long int ret = authenticate();
    printf("Exiting with: %ld\n", ret);
    return ret;
}
