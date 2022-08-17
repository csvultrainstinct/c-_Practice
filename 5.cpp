#include<bits/stdc++.h>

using namespace std;

int main(){
    string name;
    double empid,basic,sa,taxsaving;
    double perc;
    cin>>name>>empid>>basic>>sa>>perc>>taxsaving;
    double annual=(basic+sa)*12;
    double bonus=(annual*perc)/100;
    double totalAnnual=annual+bonus;
    cout<<totalAnnual<<endl;
    double annualTaxSaving=taxsaving*12;
    double tax;
        if(totalAnnual<250000)
        {
          cout<<0<<endl;
        }
        else if(totalAnnual>250000 && totalAnnual<500000){
           tax=5;
           cout<<tax<<endl;
        }
        else if(totalAnnual>500000 && totalAnnual<1000000){
          tax=20;
          cout<<tax<<endl;
        }
        else{
          tax=30;
          cout<<tax<<endl;
        }
    if(annualTaxSaving>=150000)
    {
        totalAnnual=totalAnnual-400000;
        tax=(totalAnnual*tax)/100;
        cout<<tax<<endl;
        cout<<totalAnnual+400000-tax<<endl;
    }
    else{
        tax=(totalAnnual*tax)/100;
        cout<<tax<<endl;
        cout<<totalAnnual-tax<<endl;
    }
    
 return 0;   
}
