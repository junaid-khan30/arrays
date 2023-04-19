/*Write an algorithm for array[3][2], in which the scanf should be given specifically to arr[1]*/
#include<stdio.h>
int main()
{
   
    int arr[3][2]={{0}};//{{0,0},{ , }{0,0}}
    for(int i=0; i<2; i++)
    {
        printf("Enter arr[1][%d] elements : ",i);
            scanf("%d",&arr[1][i]);

    }
    
    for( int i=0;i<3;i++)
    {
        
        for(int j=0; j<2; j++)
        {
            
            printf("%d ",arr[i][j]);
        }printf("\n");
    }return 0;

}