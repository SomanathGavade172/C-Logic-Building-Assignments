/* 
    2. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 4 iCol = 4
    
    Output :    
                * * * *
                * * * #
                * * # #
                * # # #

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays a pattern of '*' and '#' characters. '*' is printed when column index is less than or equal to current row value.
//                   '#' is printed when column index is greater than current row value. The pattern is generated in reverse row order.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 12/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j <= i)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Reverse Star Hash Pattern Display
//  Description      : This application accepts number of rows and columns from the user and displays a pattern where '*' appears from the start of each row and
//                     '#' appears at the end, forming a reverse diagonal structure.
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
