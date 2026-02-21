/* 
    2. Accept character from user. If character is small display its corresponding capital character, and if character is capital then display its corresponding small. 
       In other cases display as it is.
    
        Input  : Q
        Output : q

        Input  : m
        Output : M

        Input  : 4
        Output : 4

        Input  : %
        Output : %

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : This function accepts one character and toggles its case. If the character is uppercase, it converts it into lowercase.
//                   If the character is lowercase, it converts it into uppercase. Other characters (digits, symbols) are displayed as it is.
//  Input          : Character
//  Output         : None (Displays modified character on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 18/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Function Definition
void Display(char Ch)
{
    if(Ch >= 'A' && Ch <= 'Z')
    {
        Ch = Ch + 32;
        printf("%c", Ch);
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        Ch = Ch - 32;
        printf("%c", Ch);
    }
    else
    {
        printf("%c", Ch);
    }
   
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character Case Toggle
//  Description      : This application accepts one character from user and converts uppercase to lowercase, lowercase to uppercase, and prints other characters as it is.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char CValue = '\0';

    printf("Enter a Character : \n");
    scanf("%c", &CValue);

    Display(CValue);        // Function Call
    
    return 0;
}
