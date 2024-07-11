#include <stdio.h>

int  main()
{
    int Age;
    printf("Enter your age: \n ");
    scanf("%d",&Age);

    switch (Age)
    {
    case 3:
        printf("The Age is 3");
        break;
    case 13:
        printf("The Age is 13");
        break;    
    case 23:
        printf("The Age is 23");
        break;
    default:
    printf("Age is not 3,13 or 23");
        break;
    }




    return 0;
}