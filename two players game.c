#include<stdio.h>
int main()
{
    int array[100][100],i,j,n,row,col,k,f=0;
    printf("Please enter the board number ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            array[i][j]=0;
        }
    }
    for(i=0;i<n*n;i++){
        if(i%2==0){
        printf("It's first player turn\n");
        scanf("%d%d",&row,&col);
        array[row][col]=1;
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(array[j][k]==1 && array[j][k+1]==1 && array[j+1][k]==1 && array[j+1][k+1]==1){
                    printf("First player win\n");
                    f=1;
                    break;
                }
            }
            if(f==1)break;
        }
        }
        else{
        printf("It's second player turn\n");
        scanf("%d%d",&row,&col);
        array[row][col]=1;
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(array[j][k]==1 && array[j][k+1]==1 && array[j+1][k]==1 && array[j+1][k+1]==1){
                    printf("Second player win\n");
                    f=1;
                    break;
                }
            }
            if(f==1)break;
        }
        }
        if(f==1)break;
    }
}
