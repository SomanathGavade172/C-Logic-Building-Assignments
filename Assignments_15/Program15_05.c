/* 
    5. Accept N numbers from user and return product of all odd elements.

    Input    : N : 6
    Elements : 15 66 3 70 10 88

    Output   : 45

    Input    : N : 6
    Elements : 44 66 72 70 10 
    
    Output   : 0

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Product
//  Description         :   Returns the product of all odd elements from the array.
//  Input               :   Integer array (Base address of array),
//                          Integer (Size of array)
//  Output              :   Integer (Product of odd elements, 0 if no odd element)
//  Author              :   Gavade Somanath Vilas
//  Date                :   23/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Product(int Arr[], int iSize)
{
    int iCnt = 0, iMulti = 1;
    int iFlag = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] %2 != 0)
       {
            iMulti = iMulti * Arr[iCnt];
            iFlag = 1;
       }
    }

    if(iFlag == 0)
    {
        return 0;
    }

    return iMulti;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Product of Odd Elements Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user and returns the product of all odd elements.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    if(iLength <= 0)
    {
        printf("Invalid number of elements\n");
        return -1;
    }

    //  Allocate dynamic memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Product(ptr, iLength);       //  Function call.

    printf("Product is : %d\n", iRet);

    // Deallocate the memory.
    free(ptr);

    return 0;
}