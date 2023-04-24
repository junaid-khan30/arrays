#include<stdio.h>
int main()
{
    int N = 10;
    int arr[N];
    for(int i =0; i<=N; i++)
    {
        arr[i] = 100;
    }
    for(int i =0; i<N; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
//This is Valid 