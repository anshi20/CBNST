#include<stdio.h>
#include<math.h>

int main()
{
    float x,u1,u,y;
    int i,j,n,fact;
    printf("Enter no. of terms\n");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter Values of X \n");
    for(i=0;i<n;i++)
          scanf("%f",&a[i][0]);
    printf("Enter Values of Y\n");
    for(i=0;i<n;i++)
          scanf("%f",&a[i][1]);
          

    printf("Enter value of x for which you want y\n");
    scanf("%f",&x);
   
    for(j=2;j<n+1;j++)
    {
        for(i=n-1;i>=0;i--)
            a[i][j] = a[i][j-1]-a[i-1][j-1];
    }


    printf("The Difference Table is as follows:\n");
    for(i=0;i<n;i++)
    {
     for(j=0;j<=i+1;j++)
        printf("%f ",a[i][j]);
     printf("\n");
    }
  
    u= (x - a[n-1][0])/(a[1][0]-a[0][0]);
    y=a[n-1][1]; 

    u1=u;
    fact=1;
    for(j=2;j<n;j++)
    {
        y=y+(u1*a[n-1][j])/fact;
        fact=fact*j; 
        u1=u1*(u+(j-1));
    }
    printf("\n\nValue at X=%g is = %f", x,y);
}
