// Newton Raphson Method 
// Rate of convergence : 2 (Quadratic)
// This method fails for an equation f(x)   if    f'(x)=0

#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (3*x)-cos(x)-1;
}

float differentiate(float x)
{
    return 3 + sin(x);
}

int main()
{
    printf("Name : Anshika Maheshwari        Sec : A\n");
    printf("Equation is : 3x - cos(x) - 1 = 0\n****************************\n\n");
    float a,b,x0,x;
    float allowed_error;
    printf("Enter a and b : ");
    scanf("%f %f",&a,&b);
    printf("\nEnter allowed error : ");
    scanf("%f",&allowed_error);
    if(f(a)*f(b)>0)
    {
        printf("\nRange incorrect!!\n\n");
        return 0;
    }
    else
    {
        printf("\nRange correct!!\nProceeding....\n");
    }
    if(fabs(f(a))<fabs(f(b)))
       x0=a;
    else
       x0=b;
    int flag=0;
    int max_iterations=10;
    int i;
    for(i=0;i<max_iterations;i++)
    {
        x=x0-f(x0)/differentiate(x0);
        printf("\nIteration %d           Root = %f",i+1,x);
        if(fabs(x-x0)<allowed_error)
        {
            printf("\nRoot found!!\n");
            flag=1;
            break;
        }
        x0=x;
    }
    if(flag)
    {
        printf("\nRoot = %f              Iterations = %d",x,i+1);
    }
    else
    {
        printf("\nNot convergent!!\n");
    }
    return 0;
}

