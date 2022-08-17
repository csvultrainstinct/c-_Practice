
#include <iostream>
using namespace std;

int main() {
    int n,num=1;
    cout <<"Enter the lenght of the series(N):" ;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        cout<<num<<" ";
        num=num+(i*2);
    }

    return 0;
}