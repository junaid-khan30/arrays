#include<stdio.h>
int main()
{
    int arr[3][4];
    for(int i=0; i<1; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d ",arr[i][j]);
        }printf("\n");
    }return 0;
}
//NOTE : When you don't give array any value you'll garbage value 