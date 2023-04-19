#include<stdio.h>
int main()
{
    int arr[3][2] = {{5}};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",arr[i][j]);
        }printf("\n");
    }return 0;
}

//Note : when you assigin any number , you'll get that number as only first one others will be zeroes