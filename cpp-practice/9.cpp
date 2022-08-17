
#include <iostream>
using namespace std;

int main() {
    int n,num=3,key,temp=0,count=0;
    cout <<"Enter the lenght of the series(N):" ;
    cin>>n;
    cout<<"4 ";
    while(count!=n)
    {
        temp=0;
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        {
            cout<<num*num<<" ";
            count++;
        }
        num++;
    }
    return 0;
}