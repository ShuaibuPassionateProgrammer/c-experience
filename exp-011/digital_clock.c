#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>

void clrscr();

int main()
{
    clrscr();
    printf("You \t");
    sleep(1);
    printf("are \t");
    sleep(1);
    printf("welcome\n");
}

void clrscr()
{
	system("cls");
}