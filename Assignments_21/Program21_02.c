/* 
    2. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 4 iCol = 4

    Output :    
                A B C D
                a b c d
                A B C D
                a b c d

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays an alphabet pattern where odd rows print uppercase letters
//                   starting from 'A' and even rows print lowercase letters starting from 'a'.
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

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                Ch = 'a' + (j - 1);
            }
            else
            {
                Ch = 'A' + (j - 1);
            }
            printf("%c\t", Ch);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Alphabet Pattern Display
//  Description      : This application accepts number of rows and columns and displays an alphabet pattern with alternating uppercase
//                     and lowercase rows.
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
