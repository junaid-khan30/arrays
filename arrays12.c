#include <stdio.h>
#define N 10
int main()
{
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = -1;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
Array - Data Structure

CRUD Operations : Create Read Update Delete

Problem 1 : Create an Array with a Macro N 10 and set(create) all the values in that arr as -1
*/