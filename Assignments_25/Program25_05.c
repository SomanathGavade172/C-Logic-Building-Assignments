/* 
    5. Accept number of rows and number of columns from user and display below pattern.

    Input : iRow = 4 iCol = 4

    Output : 
                1 2 3 4 5
                1     4 5
                1   3   5
                1 2     5
                1 2 3 4 5

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : This function displays a square number pattern of size (Row+1) × (Col+1).
//                   The pattern prints numbers on:
//                   - First row and last row completely
//                   - First column and last column completely
//                   - The anti-diagonal (i + j == size + 1)
//                   Remaining positions are printed as blank spaces.
//                   This pattern is valid only when number of rows and columns are equal.
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

    int size = iRow + 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i + j == size + 1))
            {
                printf("%d\t", j);
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
//  Application Name : Number Pattern Display
//  Description      : This application accepts the number of rows and columns from the user
//                     and prints the required square number pattern where:
//                     - Numbers are displayed on the border
//                     - Numbers are displayed on the anti-diagonal
//                     - Inner remaining spaces are kept blank
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);     // Function Call

    return 0;
}
