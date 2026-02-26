/* 
    3.Write a program which accept string from user and toggle the case.

    Input : “Marvellous Multi OS”

    Output : mARVELLOUS mULTI os

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : strtoggleX
//  Description    : This function toggles the case of each character in the given string. It converts lowercase letters to uppercase and uppercase letters to lowercase.
//  Input          : String (character array)
//  Output         : None (Modifies string in place)
//  Author         : Gavade Somanath Vilas
//  Date           : 26/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function definition
void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Case Toggle
//  Description      : This application accepts a string from user, toggles the case of each character, and displays the modified string.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];

    printf("Enter a String : \n");
    scanf("%[^\n]", Arr);

    strtoggleX(Arr);           // Function Call

    printf("Updated string is : %s\n", Arr);    

    return 0;
}