
#include <iostream>
using namespace std;

int main() {
    int i=7,count=1;
    while(count!=5)
    {
        if((i%2)==1 && (i%3)==1 && (i%4)==1 && (i%5)==1 && (i%6)==1)
        {
            if(count!=3)
                {
                    cout<<count<<"."<<i<<" "<<endl;
                }
                count++;
        }
        i+=7;
    }

    return 0;
}