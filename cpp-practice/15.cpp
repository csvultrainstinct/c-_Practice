#include <iostream>
using namespace std;

int main() {
   int i=1,n,num1=1,num2=2;
    cout <<"Enter the lenght of the series(N):" ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       if(i%2==0)
       {
           cout<<num1<<" ";
           num1=num1+3;
       }
       else
       {
           cout<<num2<<" ";
           num2=num2+4;
       }
    }

    return 0;
}