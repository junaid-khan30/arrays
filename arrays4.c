#include<stdio.h>
int main()
{
    int arr[1][4]={{0, 0, 0, 0}};
    for(int i=0; i<1; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d ",arr[i][j]);
        }printf("\n");
    }return 0;
}