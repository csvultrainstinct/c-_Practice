
#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the lenght of the series(N):" ;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<(i*i*4)<<" ";
    }

    return 0;
}