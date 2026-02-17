/* 
    1. Accept number of rows and number of columns from the user
       and display the following pattern.

    Input  : iRow = 4   iCol = 4

    Output :    * * * #
                * * # *
                * # * *
                # * * *

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : This function displays a square pattern using '*' and '#' characters. The character '#' is printed on the diagonal positions,
//                   and '*' is printed at all other positions. This pattern is valid only when number of rows and columns are equal.
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
            if(i == j)
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
//  Application Name : Diagonal Hash and Star Pattern Display
//  Description      : This application accepts the number of rows and columns from the user and prints a square pattern where '#' appears on the diagonal
//                     and '*' appears in all other positions.
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
