/*
    1. Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100 then print medium, if it is
    greater than 100 then print large.

    Input  : 75

    Output : Medium

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Number
//  Description     :   Displays whether the number is Small, Medium or Large.
//  Input           :   Integer
//  Output          :   Prints result on console.
//  Author          :   Gavade Somanath Vilas
//  Date            :   06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
void Number(int iNo)
{
    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Number Classification.
//  Description         :   This application accepts one integer from the user and prints whether it is Small, Medium or Large.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    Number(iValue);         //  Function Call.

    return 0;
}