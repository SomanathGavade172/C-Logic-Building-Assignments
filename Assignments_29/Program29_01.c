/* 1.Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

    Input : "Marvellous Multi OS"
            e
    Output : TRUE

    Input : "Marvellous Multi OS"
            W
    Output : FALSE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ChkChar
//  Description    : This function checks whether a given character is present in the string or not.
//  Input          : String (character array), Character
//  Output         : BOOL (TRUE if present, otherwise FALSE)
//  Author         : Gavade Somanath Vilas
//  Date           : 27/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function definition
BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)        
        {
            return TRUE; 
        }
        str++;  
    }
    return FALSE;  
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Check Character In String
//  Description      : This application accepts a string and a character from user and checks whether that character is
//                     present in the string or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;


    printf("Enter string : \n");
    scanf("%[^\n]", arr);  

    printf("Enter the character : \n");
    scanf(" %c", &cValue);  

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}