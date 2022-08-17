
#include <iostream>
using namespace std;
int main() {
    char item[10],choice,card;
    float q,p,tot=0,dis=0;
    
    do{
    cout<<"Enter the item code:";
    cin>>item;
    cout<<"Enter the quantity:";
    cin>>q;
    cout<<"Enter the price of "<<item<<" :";
    cin>>p;
    tot=tot+(q*p);
    cout<<"Do you want to add another item(y/Y):";
    cin>>choice;
    }while(choice=='y' || choice=='Y');
    
    if(tot>10000)
    {
        dis=tot*0.1;
        tot=tot-dis;
    }
    if(tot<1000)
    {
        cout<<"Do you want to pay by card(y/Y):";
        cin>>card;
        if(card=='y' || card=='Y')
        {
            cout<<"2.5% surcharge applies i.e "<<tot*0.025<<"Rs.";
        }
        tot=tot+(tot*0.025);
    }
    
    cout<<"\n__Report__"<<endl<<"Total:"<<tot+dis<<endl<<"Discount:"<<dis<<endl<<"Grand total:"<<tot<<endl;
  
    return 0;
}