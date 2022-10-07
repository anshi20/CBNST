// Iteration Method 
// Order of convergence ~ 1

#include<stdio.h>
#include<math.h>
float f(float x)
{
    return cos(x)-(3*x)+1;
}
float findValueAt(float x)
{
    return (1+cos(x))/3;
}
float differentiate(float x)
{
    return -(sin(x)/3);
}
int main()
{
    float a,b,x0;
    int max_iterations=10,i;
    float allowed_error;
    printf("Equation is : cos x - 3x + 1 = 0 \n****************************\n");
    printf("Enter value of a and b : ");
    scanf("%f %f",&a,&b);
    printf("\nEnter allowed error : ");
    scanf("%f",&allowed_error);
    if(f(a)*f(b)>=0)
    {
        printf("\nRange incorrect!!!\n");
        return 0;
    }
    else
    {
        printf("\nRange correct!!!\nProceeding......\n\n");
    }
    x0 = (a+b)/2;
    int flag=0;
    printf("\nChecking if Iteration method can be applied....\n");
    if(fabs(differentiate(x0))<1)
    {
        printf("\nIteration method can be applied!!!\nProceeding.....\n");
    }
    else
    {
        printf("\nIteration method can't be applied!!!\n");
        return 0;
    }
    float x;
    for(i=0;i<max_iterations;i++)
    {
        x = findValueAt(x0);
        printf("\nroot of iteration %d = %f",i+1,x);
        if(fabs(x0-x)<allowed_error)
        {
            printf("\nRoot found!!\n");
            flag=1;
            break;
        }
        x0=x;
    }
    if(flag)
        printf("\nRoot : %f      Iterations : %d\n",x,i+1);
    else
        printf("\nNot convergent!!!\n");
}
