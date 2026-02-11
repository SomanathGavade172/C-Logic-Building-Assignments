/* 
    3. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 5 iCol = 5

    Output :    a b c d e
                1 2 3 4 5
                a b c d e
                1 2 3 4 5
                a b c d e
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays a mixed pattern where odd rows print lowercase alphabets starting from 'a' and even rows print numbers starting from 1.
//                   The pattern alternates row-wise based on row number.
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
                printf("%c\t", 'a' + j - 1);
            }
            else
            {
                printf("%d\t", j);
            }          
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Alphabet and Number Alternating Pattern Display
//  Description      : This application accepts number of rows and columns from the user and displays a pattern where odd rows contain lowercase alphabets
//                     and even rows contain numbers.
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
