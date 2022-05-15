#include <stdio.h>
#define N 100

void mat(int arr[][N],int t,int d,int l,int r)
{
    int i;
    if(t>d || l>r)
        return;
    for(i=d;i>=t;i--)
    {
        printf("%d ",arr[i][r]);
    }
    for(i=r-1;i>=l;i--)
    {
        printf("%d ",arr[t][i]);
    }
    for(i=t+1;i<=d;i++)
    {
        printf("%d ",arr[i][l]);
    }
    for(i=l+1;i<=r-1;i++)
    {
        printf("%d ",arr[d][i]);
    }
    mat(arr,t+1,d-1,l+1,r-1);
}

int main()
{
    int n,m,i,j;
    printf("\nEnter the  number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int arr[N][N],t=0,d=m-1,l=0,r=n-1;
    printf("\nInput the matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nMatrix travarsal: ");
    mat(arr,t,d,l,r);
    return 0;
}
