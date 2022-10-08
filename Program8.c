// Guass Jordan Method - Direct Method to solve a system of linear equations

#include<stdio.h>
#include<math.h>
int main()
{
    printf("\nName : Anshika Maheshwari         Sec : A       Std. ID : 20012553\n\n");
    int n;
    printf("Enter the no. of unknowns : ");
    scanf("%d",&n);
    float a[n][n+1];
    printf("\nEnter the Augmented Matrix : \n");
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                float ratio = a[j][i]/a[i][i];
                for(k=0;k<=n;k++)
                {
                    a[j][k] = a[j][k]-(ratio * a[i][k]);
                }
            }
        }
    }
    printf("\n\nDiagonal Matrix is : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%f  ",a[i][j]);
        }
        printf("\n");
    }
    
    float ans[n];
    
    for(i=0;i<n;i++)
    {
        ans[i]=a[i][n]/a[i][i];
    }
    
    printf("\nThe value of unknowns : \n");
    
    for(i=0;i<n;i++)
    {
        printf("\nx%d = %f",i+1,ans[i]);
    }
    return 0;
}
