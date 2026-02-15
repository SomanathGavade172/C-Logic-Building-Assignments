/* 
    2. Accept number of rows and number of columns from user and display below pattern. 

    Input  : iRow = 4, iCol = 4

    Output :    
                * * * *
                * * *
                * *
                *

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : This function displays an inverted left-aligned triangle star pattern. For each row, stars are printed in decreasing order from iRow to 1.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 15/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Inverted Left Triangle Star Pattern Display
//  Description      : This application accepts number of rows and columns from the user and prints an inverted left-aligned triangle pattern of stars.
//                     Note: Number of columns is not used in this pattern.
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
