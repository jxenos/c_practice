#include <iostream>
#include <stdio.h>
#include <string.h>

#define MYNAME "Jorj Xenos"

int globalInt = 100;

int main() {
    /* asdf*/
    // asdf

    char firstLetter = 'j';

    int age = 38;

    long int longNum = -327670000;

    float piV = 3.14159265;

    double reallyBigD = 3.14123412341234123412341234;

    printf("\n");

    printf("this will print to screen\n\n");
    std::cout << "Fuck you?  NO no no, Fuck me pal!\n\n" << std::endl;

    printf("I am %d years old\n\n", age);

    printf("Big Number %ld\n\n", longNum);

    printf("Pi = %.5f \n\n", piV);


    printf("Pi = %.15f \n\n", reallyBigD);


    printf("The first letter in my name is %c \n\n", firstLetter);


    printf("My name is %s \n\n", "Jorj");

    printf("My name is %s\n\n", MYNAME);

    char myName[11] = "Jorj Xenos";


    strcpy(myName, "BOBBY");
    printf("NAMEE!!! %s \n\n", myName);




    char middleInitial;

    printf("Give me a char...\n");

    scanf(" %c", &middleInitial);

    printf("CHAR!!!!! %c\n\n\n", middleInitial);


    char firstName[30], lastName[30];

    printf("what is your name? \n\n");

    scanf("%s %s", firstName, lastName);

    printf("You're a turd %s %s", firstName, lastName);

    int month, day;
    int year;
    scanf("%d//%d--%d", &month, &day, &year);

    printf("this is it %d %d %d \n\n", month, day, year);


    int num1 = 12, num2 = 14, numAns;
    float d1=1.2, d2=1.2, dAns;

    printf("\n\n\n");
    printf("int calc %d \n\n", num2/num1);
    printf("float calc %f\n\n", d2/d1);
    printf("mod %d \n\n", num2%num1);
    printf("cast %f \n\n", (float)num2/(float)num1);
    printf("cast2 %f \n\n", (float)num2/d1);
    printf("no () %f \n\n", 3+6*10);
    printf("() %f \n\n", (3+6)*10);
    printf("no () %d \n\n", 3+6*10);
    printf("() %d \n\n", (3+6)*10);


    int n=1;

    printf("1+=2 : %d\n\n", n+=2);
    printf("%d+=2 : %d\n\n", n, n+=2);

    return 1;
}