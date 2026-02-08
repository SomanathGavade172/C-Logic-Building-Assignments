/* 
    4. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 4 iCol = 5

    Output :    4 4 4 4 4
                3 3 3 3 3
                2 2 2 2 2
                1 1 1 1 1
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays a numeric pattern where each row contains the same number.
//                   The numbers are printed in decreasing order from iRow to 1.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 08/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Numeric Row Pattern Display
//  Description      : This application accepts number of rows and columns and displays a pattern where each row prints the same
//                     number in decreasing order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Coloumns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);      //  Function Call.

    return 0;
}
