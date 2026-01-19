/* 
    3. Accept N numbers from user check whether that numbers contains 11 in it or not.
    
    Input    : N : 6

    Elements : 85 66 11 80 93 88
    Output   : 11 is present

    Input    : N : 6

    Elements : 85 66 3 80 93 88

    Output : 11 is absent

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountEven
//  Description     :   Checks whether the number 11 is present in the given array.
//  Input           :   Integer array, Integer (Number of elements)
//  Output          :   Boolean (Returns TRUE if 11 is present, otherwise FALSE)
//  Author          :   Gavade Somanath Vilas
//  Date            :   19/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
BOOL CountEven(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Check Presence of Number 11
//  Description         :   This application accepts N numbers from the user and checks whether the number 11 is present in the array or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory : \n");
        return -1;
    }

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    bRet = CountEven(ptr, iLength);     

    if(bRet == TRUE)
    {
        printf("11 is precent\n");
    }
    else
    {
        printf("11 is Absent\n");
    }
        
    free(ptr);

    return 0;
}