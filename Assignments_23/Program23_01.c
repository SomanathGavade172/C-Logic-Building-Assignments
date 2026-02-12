/* 
    1. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 4 iCol = 4

    Output :    
                * # # #
                * * # #
                * * * #
                * * * *

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays a pattern of '*' and '#' characters. '*' is printed when row index is greater than or equal to column index.
//                   '#' is printed when row index is less than column index.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 12/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i < j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Star Hash Pattern Display
//  Description      : This application accepts number of rows and columns from the user and displays a pattern
//                     where '*' appears on and below the diagonal and '#' appears above the diagonal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Coloumns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
