/* 
    5. Accept number of rows and number of columns from user and display below pattern. 

    Input  : iRow = 4, iCol = 4

    Output :    
                1 2 3 4
                2 3 4
                3 4
                4

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : This function displays a number pattern in decreasing row format.
//                   Each row starts from the row number and prints increasing numbers up to the last column.
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

    for(i = 1; i <= iRow; i++)
    {
        for(j = i; j <= iCol; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Decreasing Number Triangle Pattern Display
//  Description      : This application accepts number of rows and columns from the user and prints a decreasing triangle number pattern where each row begins
//                     from the row index and continues up to the last column.
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
