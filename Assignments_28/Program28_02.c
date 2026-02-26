/* 
    2.Write a program which accept string from user and convert it into upper case.

    Input : “Marvellous Multi OS”

    Output : MARVELLOUS MULTI OS
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : struprX
//  Description    : This function converts all lowercase characters of the given string into uppercase.
//  Input          : String (character array)
//  Output         : None (Modifies string in place)
//  Author         : Gavade Somanath Vilas
//  Date           : 26/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function definition
void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String to Uppercase Conversion
//  Description      : This application accepts a string from user, converts it into uppercase, and displays the modified string.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];

    printf("Enter a String : \n");
    scanf("%[^\n]", Arr);

    struprX(Arr);           // Function Call

    printf("Updated string is : %s\n", Arr);    

    return 0;
}