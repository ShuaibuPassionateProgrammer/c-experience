#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Function Prototyping*/
void hello(char name[20], int age);

int main()
{
    char name[20] = "Shuaibu";
    int age = 21;
    
    hello(name, age);
    
    //character array
    char char_array[] = {'W','e','l','c','o','m','e'};
    int i;
    for(i = 0; i < 7; i++)
    {
        printf("%c", char_array[i]);
    }
    printf("\n");
    
    return 0;
}

void hello(char name[20], int age)
{
    printf("My name is %s\n", name);
    printf("I am %d years old\n", age);
}