#include<stdio.h>
int main()
{

    int arr[2][4][3]={{{1, 4, 3},{3, 4, 1},{4, 5, 7},{1, 2, 3}},{{4, 5, 6},{3, 2, 5},{1, 9, 8},{4, 7, 9}}};

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            for(int k=0; k<3; k++)
            {
                printf("%d ",arr[i][j][k]);
            }printf("\n");
        }printf("\n");
     }
    printf("\n");
    return 0;
}