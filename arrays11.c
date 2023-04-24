#include<stdio.h>
#define N 10
int main()
{
    int arr[N];
    for(int i =0; i<=N; i++)
    {
        arr[i] = 5;
    }
    for(int i =0; i<N; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
//HERE #define is macro value and here we can predefined it as we do with #include 
// and here we predefined N value as 10