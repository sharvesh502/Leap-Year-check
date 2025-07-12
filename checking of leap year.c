//Done by Sharvesh on 11.07.2025
#include <stdio.h>

void main()

{
    int year;
    printf("Enter the Year:");
    scanf("%d",&year);
    
    if(year%400==0)
    {
        printf("This is Leap Year");
    }
    else if(year%100==0)
    {
        printf("This is not a Leap Year");
    }
    else if(year%4==0)
    {
        printf("This is Leap Year");
    }
    else
    {
        printf("This is not a Leap Year");
    }
}