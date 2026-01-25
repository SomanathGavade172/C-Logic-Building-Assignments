/* 
    5. Accept N numbers from user and display summation of digits of each number.

    Input    : N : 6

    Elements :8225 665 3 76 953 858

    Output   : 17 17 3 13 17 21

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Digit
//  Description    : Displays the summation of digits of each element in the array.
//  Input          : Integer array (Base address), Integer (Size of array)
//  Output         : Displays summation of digits
//  Author         : Gavade Somanath Vilas
//  Date           : 25/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Digit(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0, iSum = 0, iNo = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }

        printf("%d\t", iSum);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Summation of Digits
//  Description         :   This application dynamically allocates memory for an
//                          integer array, accepts elements from the user,
//                          and displays the summation of digits of each number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Check array size.
    if(iLength <= 0)
    {
        printf("Invalid number of elements\n");
        return -1;
    }

    // Allocate dynamic memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter %d elements : \n", iLength);

    // Accept numbers from the user.
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    // Check memory allocation failure.
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    Digit(ptr, iLength);        //  Function Call.

    // Deallocate the memory.
    free(ptr);

    return 0;

}
