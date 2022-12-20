
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of values : ";
    cin>>n;
    float a[n][n+1];
    int i,j;
    cout<<"Enter values : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"\nEnter value for which you need to calculate the value of function : ";
    float x;
    cin>>x;
    
    cout<<"\nDifference Table : \n";
    
    for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
        {
            a[i][j] = a[i+1][j-1] - a[i][j-1];
        }
    }
    

    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    float u = (x-a[0][0])/(a[1][0]-a[0][0]);
    
    float y = a[0][1];
    
    float u1 = u;
    
    int fact = 1;
    
    for(j=2;j<n+1;j++)
    {
        y=y+(u1*a[0][j])/fact;
        fact=fact*(j);
        u1=u1*(u-(j-1));
    }
    
    cout<<"\nValue of function at "<<x<<" is = "<<y<<endl;
    
    return 0;
}
