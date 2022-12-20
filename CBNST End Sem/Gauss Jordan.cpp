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
    cout<<"\nGenerating diagonal matrix ...\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i)
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
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    
   
    
    float value[n];
    
    for(i=0;i<n;i++)
    {
        value[i] = a[i][n]/a[i][i];
    }
    
    for(i=0;i<n;i++)
    {
        cout<<"x"<<i+1<<" = "<<value[i]<<endl;
    }
    return 0;
}
