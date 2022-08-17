
#include <iostream>
using namespace std;

int main() {
    float ppl,tim,rate,itr,amt;
    cout <<"Enter the principal:" ;
    cin>>ppl;
    cout <<"Enter the time in years:" ;
    cin>>tim;
    cout <<"Enter the rate(do not add '%' symbol):" ;
    cin>>rate;
    itr=(ppl*tim*rate)/100;
    amt=ppl+itr;
    cout<<"The interest calculate is "<<itr<<" Rs. and the amount to be paid is "<<amt<<" Rs.";

    return 0;
}