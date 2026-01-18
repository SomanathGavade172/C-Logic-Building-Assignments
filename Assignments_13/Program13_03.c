/* 
    3. Accept N numbers from user and display all such elements which are even and divisible by 5.
    
    Input    : N : 6

    Elements : 85 66 3 80 93 88

    Output   : 80

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Displays all elements from the array which are even and divisible by 5.
//  Input           :   Integer array, Integer (Number of elements)
//  Output          :   None
//  Author          :   Gavade Somanath Vilas
//  Date            :   18/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    { 
        if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Even Elements Divisible by 5
//  Description         :   This application accepts N numbers from the user and displays all elements which are even and divisible by 5.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iSize);

    return 0;
}