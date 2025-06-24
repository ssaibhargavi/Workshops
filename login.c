// Program to login an account with username and password

#include <stdio.h>
#include<string.h>
int main()
{
    char username[10], password[10];
    printf("Enter username:");
    scanf("%s",username);
    if(strcmp(username,"admin")==0)
    {
        printf("Enter the password:");
        scanf("%s",password);
        if(strcmp(password,"1234")==0)
        {
            printf("Access granted");
        }
        else
        {
            printf("Wrong password");
        }
    }
    else
    {
        printf("Wrong username");
    }
    return 0;
}
