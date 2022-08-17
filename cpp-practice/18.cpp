
#include <iostream>
using namespace std;

int main() {
    int n,a[50],key,temp;
    cout <<"Enter the lenght of the array(N):" ;
    cin>>n;
    cout <<"Enter the elements of the array:" ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout <<"The sorted array is:" ;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}