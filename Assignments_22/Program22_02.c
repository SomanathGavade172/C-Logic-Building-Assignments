/*
    2. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 4 iCol = 5

    Output :    2 4 6 8 10
                1 3 5 7 9
                2 4 6 8 10
                1 3 5 7 9
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays a numeric pattern where odd rows print even numbers (2, 4, 6, 8, ...) and even rows print odd numbers (1, 3, 5, 7, ...).
//                   The pattern alternates row-wise for the given number of rows and columns.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 11/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        int iCntEven = 2, iCntOdd = 1;

        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t", iCntEven);
                iCntEven += 2;
            }
            else
            {
                printf("%d\t", iCntOdd);
                iCntOdd += 2;
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Even-Odd Row Number Pattern Display
//  Description      : This application accepts number of rows and columns from the user and displays a pattern where odd rows contain even numbers and
//                     even rows contain odd numbers.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);      // Function Call

    return 0;
}
