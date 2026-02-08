/* 
    3. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 3 iCol = 5

    Output :    A A A A A
                B B B B B
                C C C C C

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays an alphabet pattern where each row contains the same uppercase letter.
//                   The first row prints 'A', second row prints 'B', and so on.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 08/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Ch = '\0';

    for(i = 1, Ch = 'A'; i <= iRow; i++, Ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", Ch);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Alphabet Row Pattern Display
//  Description      : This application accepts number of rows and columns and displays a pattern where each row prints the same
//                     uppercase alphabet character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Coloumns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);      //  Function Call.

    return 0;
}
