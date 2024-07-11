#include <stdio.h>

int  main()
{
    int lover;
    
    printf("Enter the number of 1 cars Or number 2 bikes\n");
    scanf("%d",&lover);
    switch (lover)        
    {
    case 1:
        printf("Hurray ! you are Car lover");
        break;
    case 2:
    printf("Hurray ! you are Bike lover");
    
    default:
    printf("You are not a car lover");
        break;
    }
    



    return 0;
}