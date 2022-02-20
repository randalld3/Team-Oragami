#include <stdio.h>


    int main()
    {
        int q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, path = 0;

        printf("Hello! Welcome to Team Oragami!\n");
        printf("We are going to spread awareness\n");
        printf("Answer these questions to find out the best way you could spread WSU awareness!\n\n");

        Q1();
        q1 = validate_option();
        Q2();
        q2 = validate_option(); 
        Q3();
        q3 = validate_option();
        Q4();
        q4 = validate_option(); 
        Q5();
        q5 = validate_option(); 

        path = (q1 + q2 + q3 + q4 + q5) % 5;

        switch (path)
        {
        case 0: printf("You're doing great! You could spread awareness through compassion!\n");
            break;
        case 1: printf("Learn about the WSU community!\n");
            break;
        case 2: printf("Maybe try to get involved with some student sponsored clubs!\n");
            break;
        case 3: printf("Now would be a great time to seek out WSU mental health services!\n");
            break;
        case 4: printf("Raise awareness by awareness raising\n");
            break;
        case 5: printf("Seek help immediately! Call 911!");
            break;
        }

        return 0;
    }
