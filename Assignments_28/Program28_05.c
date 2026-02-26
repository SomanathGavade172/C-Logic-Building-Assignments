/* 
    5. Write a program which accept string from user and count number of white spaces

    Input : “MarvellouS”

    Output : 0

    Input : “MarvellouS Infosystems”

    Output : 1

    Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”

    Output : 5

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : CountWhite
//  Description    : This function counts the number of white spaces present in the given string.
//  Input          : String (character array)
//  Output         : Integer (Number of white spaces)
//  Author         : Gavade Somanath Vilas
//  Date           : 26/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function definition
int CountWhite(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            icount++;
        }        
        str++;
    }

    return icount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Count White Spaces From String
//  Description      : This application accepts a string from user and counts the number of white spaces present in it.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^\n]", Arr);

    iRet = CountWhite(Arr);           // Function Call

    printf("Number of white space are : %d\n", iRet);

    return 0;
}