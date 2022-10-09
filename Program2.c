// Bisection Method
// Rate of Convergence = 1(linear)

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
    while(f(a)*f(b)>0)
    {
        printf("Invalid values !!\nEnter a and b : ");
        scanf("%f %f",&a,&b);
        if(f(a)*f(b)<0)
           break;
    }
    printf("\nRoot lies between : %f and %f\nProceeding.....\n\n",a,b);
    printf("\nEnter allowed error : ");
    scanf("%f",&allowed_error);
    int n=20;
    printf("\n");
    float x,x0 = (a+b)/2;
    int flag=0,i=1;
    while(1)
    {
        if(f(a)*f(x0)<0)
            b=x0;
        else
            a=x0;
        x = (a+b)/2;
        if(fabs(x-x0)<allowed_error)
        {
            printf("\n\nRoot found!!!!\n\n");
            printf("\nRoot = %f       No of iterations = %d",x0,--i);
            root=x;
            flag=1;
            break;
        }
        if(flag)
           break;
        printf("\nIteration = %d     Root = %f",i,x);
        i++;
        x0=x;
    }
    if(flag) return 0;
        //printf("\nRoot = %f       No of iterations = %d",root,i);
    else
        printf("\nNot convergent!!\n");
    return 0;
}
