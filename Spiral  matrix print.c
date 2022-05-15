#include <stdio.h>

int main()
{
    int n,m,i,j;
    printf("\nEnter the  number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int arr[m][n],t=0,d=m-1,l=0,r=n-1;
    printf("\nInput the matrix: \n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nMatrix travarsal: ");
    while(t<=d && l<=r)
    {
        for(i=d;i>=t;i--)
        {
            printf("%d ",arr[i][r]);
        }
        r--;
        for(i=r;i>=l;i--)
        {
            printf("%d ",arr[t][i]);
        }
        t++;
		for(i=t;i<=d;i++)
        {
            printf("%d ",arr[i][l]);
        }
        l++;
        for(i=l;i<=r;i++)
        {
            printf("%d ",arr[d][i]);
        }
        d--;
    }
    return 0;
}
