#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int i=1,n;
    cout <<"Enter the lenght of the series(N):" ;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cout<<(i*i)*pow(-1,(i+1))<<" ";
    }

    return 0;
}