/* 
    4. Accept N numbers from user and display all such numbers which contains 3 digits in it.

    Input    : N : 6

    Elements : 8225 665 3 76 953 858

    Output   : 665 953 858

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Digit
//  Description    : Displays all elements of the array which contain exactly 3 digits.
//  Input          : Integer array (Base address), Integer (Size of array)
//  Output         : NONE (Displays 3-digit numbers)
//  Author         : Gavade Somanath Vilas
//  Date           : 25/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Digit(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display 3-Digit Numbers
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, and displays all numbers 
//                          which contain exactly three digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    if(iLength <= 0)
    {
        printf("Invalid number of elements\n");
        return -1;
    }

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    Digit(ptr, iLength);

    free(ptr);

    return 0;
}