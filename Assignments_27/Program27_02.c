/* 
    2. Write a program which accept string from user and count number of small characters.

    Input  : "Marvellous"
    Output : 9
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : CountSmall
//  Description    : This function accepts string from user and returns number of small characters present in it.
//  Input          : String
//  Output         : Integer (Number of small characters)
//  Author         : Gavade Somanath Vilas
//  Date           : 20/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        printf("Invalid Input\n");
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Count Small Characters
//  Description      : This application accepts a string from user and displays number of small characters.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^\n]", Arr);

    iRet = CountSmall(Arr);

    printf("Number of Small Characters are : %d\n", iRet);

    return 0;
}
