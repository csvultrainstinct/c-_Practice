
#include <iostream>
using namespace std;
int main() {
    int n,a[50][50],temp=0;
    cout << "Enter the width of the matrix:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout << "The matrix is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                {
                    temp=1;
                }
            }
            else
            {
                if(a[i][j]!=0)
                {
                    temp=1;
                }
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    if(temp==0)
    {
        cout<<"The matrix is an identity matrix";
    }
    else
    {
        cout<<"Not an identity matrix";
    }
    return 0;
}