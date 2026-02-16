/* 
    4. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 6, iCol = 6

    Output :    
                * * * * * *
                * *       *
                *   *     *
                *     *   *
                *       * *
                * * * * * *
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : This function displays a square pattern where '*' is printed on the border (first row, last row, first column, last column) and also on the main diagonal.
//                   All inner remaining positions are printed as blank spaces.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 16/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Border and Diagonal Star Pattern Display
//  Description      : This application accepts number of rows and columns from the user and prints a square pattern with '*' on the border and on the main diagonal.
//                     Remaining inner positions are left blank.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);          // Function Call

    return 0;
}
