#include <iostream>
using namespace std;

int main() {
   int i=1,n;
    cout <<"Enter the lenght of the series(N):" ;
    cin>>n;
    for(int count=1;count<=n;i++)
    {
        if(i%4==0)
        continue;
        
        cout<<(i*i)<<" ";
        count++;
    }

    return 0;
}