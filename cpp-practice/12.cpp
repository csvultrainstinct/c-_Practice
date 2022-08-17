
#include <iostream>
using namespace std;

int main() {
    int n,num,one=1,two=4,three=7;
    cout <<"Enter the lenght of the series(N):" ;
    cin>>n;
    cout<<"1 4 7 ";
    for(int i=3;i<n;i++)
    {
        num=one+two+three;
        cout<<num<<" ";
        one=two;
        two=three;
        three=num;
    }

    return 0;
}