#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void continue_example();
void break_example();

int main() {

    const char user[200] = "Shuaibu";
    const char pass[200] = "shuaibupass123";
    char username[200];
    char password[200];
    
    printf("Enter username: ");
    fgets(username, 200, stdin);
    
    printf("Enter Password: ");
    fgets(password, 200, stdin);
    
    if(username == "" || password == "")
    {
        if(username != "" && password == "")
        {
            printf("%s password is required!\n", username);
        }
        else if(username == "" && password != "")
        {
            printf("Provide username first!\n");
        }
        else
        {
            printf("Username or Password should not be empty!\n");
        }
    }
    else
    {
        if((username == user) && (password == pass))
        {
            printf("%s logged in successfully!\n");
            continue_example();
            break_example();
        }
        else
        {
            printf("Invalid! Username or Password\n");
        }
    }

    return 0;
}

void continue_example()
{
    for(int i=1; i<20; i++)
    {
        if(i == 13)
            continue;
        printf("%d\n", i);
    }
}

void break_example()
{
    for(int i=1; i<20; i++)
    {
        if(i == 13)
            break;
        printf("%d\n", i);
    }
}