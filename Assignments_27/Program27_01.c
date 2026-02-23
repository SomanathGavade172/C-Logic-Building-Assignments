/* 
    1. Write a program which accepts string from user and count number of capital characters.

    Input  : "Marvellous Multi OS"
    Output : 4
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : CountCapital
//  Description    : This function accepts string from user and returns number of capital characters present in it.
//  Input          : String
//  Output         : Integer (Number of capital characters)
//  Author         : Gavade Somanath Vilas
//  Date           : 20/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        printf("Invalid Input\n");
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Count Capital Characters
//  Description      : This application accepts a string from user and displays number of capital characters.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^\n]", Arr);

    iRet = CountCapital(Arr);

    printf("Number of Capital Characters are : %d\n", iRet);

    return 0;
}
