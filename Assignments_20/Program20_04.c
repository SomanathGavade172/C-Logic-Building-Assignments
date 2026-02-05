/* 
    4. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 3 iCol = 4

    Output : 
                *   #   *   #
                *   #   *   #
                *   #   *   #
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays a pattern of alternating '*' and '#' symbols for the given rows and columns.
//                   Odd columns print '*', even columns print '#'.
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
        // Inner loop controls number of columns
        for(j = 1; j <= iCol; j++)
        {
            // Even column -> print '#'
            if(j % 2 == 0)
            {
                printf("#\t");
            }
            // Odd column -> print '*'
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
//  Application Name : Alternating Star-Hash Pattern Display
//  Description      : This application accepts number of rows and columns from the user and displays an alternating '*' and '#' pattern.
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
