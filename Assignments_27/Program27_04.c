/* 
    4. Write a program which accept string from user and check whether it contains vowels in it or not.

    Input  : "marvellous"
    Output : TRUE

    Input  : "Demo"
    Output : TRUE

    Input  : "xyz"
    Output : FALSE
*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ChkVowels
//  Description    : This function accepts string from user and checks whether it contains any vowel or not.
//  Input          : String
//  Output         : Boolean (TRUE if vowel present, otherwise FALSE)
//  Author         : Gavade Somanath Vilas
//  Date           : 20/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowels(char *str)
{
    if(str == NULL)
    {
        printf("Invalid Input\n");
        return FALSE;
    }

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Check Vowels in String
//  Description      : This application accepts a string from user and checks whether it contains vowels or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    BOOL bRet = FALSE;

    printf("Enter a String : \n");
    scanf(" %[^\n]", Arr);

    bRet = ChkVowels(Arr);

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
