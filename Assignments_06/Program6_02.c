/* 
    2. Accept single digit number from user and print it into word.

    Input  : 9
    Output : Nine

    Input  : -3
    Output : Three

    Input  : 12
    Output : Invalid Number

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Prints the word representation of a single digit number.
//  Input           :   Integer
//  Output          :   Prints number in words.
//  Author          :   Gavade Somanath Vilas
//  Date            :   06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
void Display(int iNo)
{
    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    switch(iNo)
    {
        case 0 :
            printf("Zero\n");
            break;

        case 1 :
            printf("One\n");
            break;

        case 2 :
            printf("Two\n");
            break;

        case 3 :
            printf("Three\n");
            break;

        case 4 :
            printf("Four\n");
            break;

        case 5 :
            printf("Five\n");
            break;

        case 6 :
            printf("Six\n");
            break;

        case 7 :
            printf("Seven\n");
            break;

        case 8 :
            printf("Eight\n");
            break;

        case 9 :
            printf("Nine\n");
            break;

        default :
            printf("Invalid Number\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Digit to Word Conversion
//  Description         :   This application accepts one integer from the user and prints whether it is Small, Medium or Large.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    Display(iValue);        //  Function Call.

    return 0;
}