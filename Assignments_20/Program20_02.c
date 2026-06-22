/* 
    2. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 4 iCol = 3

    Output :    
                1   2   3
                1   2   3
                1   2   3
                1   2   3
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays a numeric pattern where each row contains numbers from 1 to the given number of columns.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 05/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    // Outer loop controls number of rows
    for(i = 1; i <= iRow; i++)
    {
        // Inner loop prints numbers from 1 to iCol
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Numeric Row-Column Pattern Display
//  Description      : This application accepts number of rows and columns from the user and displays a pattern where each row prints numbers from 1 to the column count.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of Columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);          // Function Call

    return 0;
}
