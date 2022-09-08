#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    int id;
    char name[200];
    int age;
};

struct PersonalInformation
{
    int id;
    char fname[100];
    char lname[100];
    char mname[100];
    char email[150];
    char address[255];
    char password[255];
};

void line_break(int line)
{
    for(int i=0; i<5; i++)
    {
        printf("%d",i);
    }
}

void main(void)
{
    struct Person person;
    
    person.id = 01;
    strcpy(person.name, "Mr. Ibrahim Shuaibu Isa");
    person.age = 21;
    
    printf("Person ID: %d\n", person.id);
    printf("Person Name: %s\n", person.name);
    printf("Person Age: %d\n", person.age);
    
    //Line break
    line_break(10);
    
    struct PersonalInformation pi;
    
    pi.id = 01;
    strcpy(pi.fname, "Shuaibu");
    strcpy(pi.lname, "Ibrahim");
    strcpy(pi.mname, "Isa");
    strcpy(pi.email, "shuaibuibrahimisa2020@gmail.com");
    strcpy(pi.address, "House No.10 Benue Street, Sintali 'A' Ward Jalingo");
    strcpy(pi.password, "12345678");
    
    printf("ID: %d\n", pi.id);
    printf("First Name: %s\n", pi.fname);
    printf("Last Name: %s\n", pi.lname);
    printf("Middle Name: %s\n", pi.mname);
    printf("E-Mail: %s\n", pi.email);
    printf("Address: %s\n", pi.address);
    printf("Password: %s\n", pi.password);
    
}