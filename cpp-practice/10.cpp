
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,num=1;
    cout <<"Enter the lenght of the series(N):" ;
    cin>>n;
    cout<<"1 ";
    for(int i=1;i<=n;i++)
    {
        num=num+pow(i,2);
        cout<<num<<" ";
    }

    return 0;
}