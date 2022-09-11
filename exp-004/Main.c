#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void continue_example();
void break_example();

int main() {

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