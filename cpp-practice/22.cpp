
#include <iostream>
using namespace std;
int main() {
    int m,n,a[50][50];
    cout << "Enter the number of rows in the matrix:";
    cin>>m;
    cout << "Enter the number of columns the matrix:";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout << "The matrix is:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}