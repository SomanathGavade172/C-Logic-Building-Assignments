/* 
    3. Accept character from user. If it is capital then display all the characters from the input character till Z. If input character is small then print all the characters in reverse order till a. 
       In other cases return directly.

        Input  : Q
        Output : Q R S T U V W X Y Z

        Input  : m
        Output : m l k j i h g f e d c b a
        
        Input  : 8
        Output :

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : This function accepts one character from user. If the character is uppercase, it displays all characters from that character till 'Z'.
//                   If the character is lowercase, it displays all characters in reverse order till 'a'. If the character is not an alphabet, the function returns without
//                   printing anything.
//  Input          : Character
//  Output         : Displays characters on console
//  Author         : Gavade Somanath Vilas
//  Date           : 18/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char Ch)
{
    int iCnt = 0;

    if(Ch >= 'A' && Ch <= 'Z')
    {
        for(iCnt = Ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t", iCnt);
        }
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        for(iCnt = Ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t", iCnt);
        }
    }
    else
    {
        return;
    }
   
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character Range Display
//  Description      : This application accepts one character from user. If it is capital, it prints characters from input till Z.
//                     If it is small, it prints characters in reverse order till a. Other characters produce no output.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char CValue = '\0';

    printf("Enter a Character : \n");
    scanf("%c", &CValue);

    Display(CValue);
    
    return 0;
}
