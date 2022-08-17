#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int key,a[100],n,temp=0;
    cout <<"Enter the lenght of the array(N):" ;
    cin>>n;
    cout <<"Enter the array:" ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<endl<<"";
    }
    cout <<"The array is: " ;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout <<"Enter the number to be searched:" ;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            temp=1;
        }
    }
    if(temp==1)
    cout<<"Key element found";
    else
    cout<<"Key element not found";
    return 0;
}