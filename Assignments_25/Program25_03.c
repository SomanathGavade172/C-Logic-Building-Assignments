/* 
    3. Accept number of rows and number of columns from the user
       and display the following pattern.

    Input  : iRow = 6   iCol = 6

    Output :    
                * * * * * *
                *       * *
                *      *  *
                *    *    *
                *  *      *
                * * * * * *

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : This function displays a square pattern using the '*' character. The '*' is printed on the border (first row, last row, first column, last column)
//                   and also on the main diagonal. All remaining inner positions are printed as blank spaces.
//                   This pattern is valid only when the number of rows and columns are equal.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays the pattern on the console)
//  Author         : Gavade Somanath Vilas
//  Date           : 17/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }

    for(i = iRow; i >= 1; i--)
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
//  Description      : This application accepts the number of rows and columns from the user and prints a square pattern where '*' appears on the border
//                     and along the main diagonal. All other inner positions are displayed as spaces.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
