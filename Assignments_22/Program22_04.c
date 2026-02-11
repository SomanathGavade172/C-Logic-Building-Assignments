/* 
    4. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 5 iCol = 5

    Output :    1  2   3   4   5
               -1 -2  -3  -4  -5
                1  2   3   4   5
               -1 -2  -3  -4  -5
                1  2   3   4   5

*/
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays a numeric pattern where odd rows print positive numbers starting from 1 and even rows print negative numbers starting from -1.
//                   The pattern alternates row-wise based on the row number.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 11/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {   
            if(i % 2 != 0)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("%d\t", -j);
            }          
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Positive and Negative Number Alternating Pattern Display
//  Description      : This application accepts number of rows and columns from the user and displays a pattern where
//                     odd rows contain positive numbers and even rows contain negative numbers.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);      // Function Call

    return 0;
}
