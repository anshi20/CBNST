// Gauss Elimination Method - Direct Method used for solving a system of Linear Equations

#include<stdio.h>
#include<math.h>
int main()
{
    printf("\nAnshika Maheshwari      Sec : A \n\n");
    int n;
    printf("Enter the no. of unknowns : ");
    scanf("%d",&n);
    float a[n][n+1];
    printf("\nEnter augmented matrix : \n\n");
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
           scanf("%f",&a[i][j]); 
        }
    }
    printf("\nUpper Triangular Matrix : \n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                float ratio = a[j][i]/a[i][i];
                for(k=0;k<n+1;k++){
                    a[j][k]=(a[j][k] - (ratio*a[i][k]));
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
           printf("%f  ",a[i][j]); 
        }
        printf("\n");
    }
    float ans[n];
    ans[n-1] = a[n-1][n]/a[n-1][n-1];
    for(i=n-2;i>=0;i--)
    {
        float sum=0;
        for(j=i+1;j<n;j++)
        {
            sum+=(a[i][j]*ans[j]);
        }
        ans[i] = (a[i][n]-sum)/a[i][i];
    }
    printf("\nValue of unknowns : \n");
    for(i=0;i<n;i++)
    {
        printf("\nx%d = %f",i+1,ans[i]);
    }
    return 0;
}
