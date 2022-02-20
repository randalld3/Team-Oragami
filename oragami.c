
#include "oragami.h"

void Q1() 
{

    printf("\nQuestion 1: Which word most describes you?\n");
    printf("1. Volatile\n");
    printf("2. Private\n");
    printf("3. Protected\n");
    printf("4. Public\n");
    printf("5. Outgoing\n");
}

void Q2() 
{

    printf("\nQuestion 2: What's your favorite meat?\n");
    printf("1. Chicken\n");
    printf("2. Beef\n");
    printf("3. Pork\n");
    printf("4. Fish\n");
    printf("5. Other\n");
}
void Q3()
{
    printf("\nHow will you spend your Saturday night?\n\n");
    printf("1. Coding at the hackathon\n");
    printf("2. Finishing homework just before the 11:59PM deadline\n");
    printf("3. Drinks at the bar with friends\n");
    printf("4. All-night gaming tournament\n");
    printf("5. House Party!\n");
}

void Q4()
{
    printf("\nWhat is your favorite place to be?\n");
    printf("(1) Class\n");
    printf("(2) Parking 'Struct'ure\n");
    printf("(3) 'int'ernet cafe\n");
    printf("(4) 'float'ing along a lazy river\n");
    printf("(5) shopping for shoe 'strings'\n");
}

void Q5()
{
    printf("\nChoose your favorite word from the choices below\n\n");
    printf("1. Queue\n");
    printf("2. Kakorrhaphiophobia\n");
    printf("3. Lollygag\n");
    printf("4. Moist\n");
    printf("5. Cattywampus\n\n");
}

int validate_option()
{
    int option = 0;

    scanf("&d", &option);

    do
    {
        scanf("%d", &option);

    } while (option < MIN || option > MAX);


    return option;
}