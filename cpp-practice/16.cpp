#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x,n,res=1;
    cout <<"Enter the number(X):" ;
    cin>>x;
    cout <<"Enter the power(N):" ;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        res=res*x;
    }
    cout<<"The result is "<<res;
    return 0;
}