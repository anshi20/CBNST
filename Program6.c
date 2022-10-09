// Secant Method
#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (x*x*x) - (2*x) - 5;
}
int main()
{
    float a,b,allowed_error,root;
    printf("Anshika Maheshwari       Sec : A\n\n");
    printf("Equation is : x^3 - 2x - 5 = 0\n********************\n\n");
    printf("Enter a and b : ");
    scanf("%f %f",&a,&b);
    printf("\nEnter allowed error : ");
    scanf("%f",&allowed_error);
    int n=20;
    printf("\n"); 
    float x,x0 = ((a*f(b)) - (b*f(a)))/(f(b)-f(a));
    int flag=0,i=1;
    while(i<=n)
    {
        a=b;
        b=x0;
        x = ((a*f(b)) - (b*f(a)))/(f(b)-f(a));
        if(fabs(x-x0)<allowed_error)
        {
            printf("\n\nRoot found!!!!\n\n");
            printf("\nRoot = %f       No of iterations = %d",x0,--i);
            flag=1;
            break;
        }
        printf("\nIteration = %d     Root = %f",i,x);
        i++;
        x0=x;
    }
    if(flag) return 0;
    else
        printf("\nNot convergent!!\n");
    return 0;
}

