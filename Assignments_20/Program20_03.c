/* 
    3. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 3 iCol = 5

    Output :    
                5   4   3   2   1
                5   4   3   2   1
                5   4   3   2   1
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays a numeric pattern where each row prints numbers from the given column value down to 1.
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
    for(i = iRow; i >= 1; i--)
    {
        // Inner loop prints numbers in reverse order from iCol to 1
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Reverse Numeric Pattern Display
//  Description      : This application accepts number of rows and columns from the user and displays a pattern where each row contains numbers from iCol down to 1.
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
