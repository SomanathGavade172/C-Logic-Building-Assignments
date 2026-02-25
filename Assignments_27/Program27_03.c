/*
    3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

    Input  : "MarvellouS"
    Output : 6 (8 - 2)
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Difference
//  Description    : This function accepts string from user and returns difference between frequency of small and capital characters.
//  Input          : String
//  Output         : Integer (Small characters count - Capital characters count)
//  Author         : Gavade Somanath Vilas
//  Date           : 20/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Difference(char *str)
{
    int iCountCapital = 0, iCountSmall = 0;

    // Check string is empty
    if(str == NULL)
    {
        printf("Invalid Input\n");
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        str++;
    }

    return iCountSmall - iCountCapital;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Difference Between Small and Capital Characters
//  Description      : This application accepts a string from user and displays difference between number of small and capital characters.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^\n]", Arr);

    iRet = Difference(Arr);        // Function Call

    printf("Difference between Small and Capital Characters is : %d\n", iRet);

    return 0;
}

