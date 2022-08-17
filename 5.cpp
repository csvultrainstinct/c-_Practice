#include<bits/stdc++.h>

using namespace std;

int main(){
    string name;
    int empid,basic,sa,taxsaving;
    double perc;
    cin>>name>>empid>>basic>>sa>>taxsaving;
    int annual=(basic+sa)*12;
    double bonus=annual*(perc/100);
    double totalAnnual=annual+bonus;
    cout<<totalAnnual<<endl;
    int annualTaxSaving=taxsaving*12;
    double tax;
    if(totalAnnual<250000){
        cout<<0<<endl;
    }
    else if(totalAnnual>250000 && totalAnnual<500000){
        tax=totalAnnual*(5/100);
        cout<<tax<<endl;
    }
    else if(totalAnnual>500000 && totalAnnual<1000000){
        tax=totalAnnual*(20/100);
        cout<<tax<<endl;
    }
    else{
        tax=totalAnnual*(30/100);
        cout<<tax<<endl;
    }
    if(annualTaxSaving>=150000){
        totalAnnual=totalAnnual-400000;
        cout<<totalAnnual-tax<<endl;
    }
    else{
        cout<<totalAnnual-tax<<endl;
    }
    
 return 0;   
}
