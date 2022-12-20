#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of unknowns : ";
    cin>>n;
    float a[n][n+1];
    cout<<"\nEnter augmented matrix : \n";
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    float ratio;
    cout<<"\nGenerating upper triangular matrix ...\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                ratio = a[j][i]/a[i][i];
                for(k=0;k<=n;k++)
                {
                    a[j][k] = a[j][k] - (ratio * a[i][k]);
                }
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<a[i][j]<<"     ";
        }
        cout<<endl;
    }
    
    cout<<"\nApplying back substitution ....\n";
    
    float value[n];
    
    value[n-1]=a[n-1][n]/a[n-1][n-1];
    
    float sum;
    
    for(i=n-1;i>=0;i--)
    {
        sum=0;
        for(j=i+1;j<n;j++)
        {
            sum+=a[i][j]*value[j];
        }
        value[i] = (a[i][n] - sum)/a[i][i];
    }
    
    for(i=0;i<n;i++)
    {
        cout<<"x"<<i+1<<" = "<<value[i]<<endl;
    }
    return 0;
}
