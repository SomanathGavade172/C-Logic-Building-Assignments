/*
    5. Write a program which accept string from user and display it in reverse order.

    Input  : "MarvellouS"
    Output : "SuollevraM"
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Reverse
//  Description    : This function accepts string from user and displays it in reverse order.
//  Input          : String
//  Output         : Displays reversed string
//  Author         : Gavade Somanath Vilas
//  Date           : 20/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *Start = str;

    if(str == NULL)
    {
        printf("Invalid Input\n");
        return;
    }

    while(*str != '\0')
    {
        str++;
    }

    str--;   // Move to last character

    while(str >= Start)
    {
        printf("%c", *str);   // Corrected
        str--;
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Reverse String Display
//  Description      : This application accepts a string from user and displays it in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];

    printf("Enter a String : \n");
    scanf(" %29[^\n]", Arr);

    Reverse(Arr);

    return 0;
}
