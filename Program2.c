// Bisection Method
// Rate of Convergence = 1(linear)

#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x*x*x) - (5*x) + 1;
}
int main()
{
    printf("BISECTION   METHOD\n\n");
    float a,b,x;
    printf("Equation is : x^3 - 5x + 1 =0\n\n");
    printf("Enter the value of 'a' and 'b' : ");
    scanf("%f %f",&a,&b);
    printf("\nEnter the allowed error : ");
    float allowed_error;
    scanf("%f",&allowed_error);
    if(f(a)*f(b)<0)
    {
        printf("Range is correct !!\n");
        float x = (a+b)/2;
        while(fabs(f(x))>allowed_error)
        {
            if(f(a)*f(x)<0)
            {
                b=x;
            }
            else
            {
                a=x;
            }
            
            printf("\nx=%f     f(x)=%f",x,f(x));
            x=(a+b)/2;
        }
        printf("\nRoot of the equation is : %f\n",a);
    }
    else
    {
        printf("Range is incorrect !!\n");
    }
    return 0;
}
