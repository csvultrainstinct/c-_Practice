
#include <iostream>
using namespace std;

int main() {
    int n,num,prev1=1,prev2=1;
    cout <<"Enter the lenght of the series(N):" ;
    cin>>n;
    cout<<"1 1 ";
    for(int i=1;i<=n;i++)
    {
        num=prev1+prev2;
        cout<<num<<" ";
        prev2=prev1;
        prev1=num;
        
    }

    return 0;
}