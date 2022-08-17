
#include <iostream>
using namespace std;
int main() {
    char name[10],empid[10];
    int bms,msa,bp,mtsi,atsi;
    float ann_gro_sal,tax_pay,tax_per,ann_net_sal,ann_sal,bon;
    cout<<"Enter employee name:";
    cin>>name;
    cout<<"Enter employee ID:";
    cin>>empid;
    cout<<"Enter the basic monthly salary:";
    cin>>bms;
    cout<<"Enter the monthly special allowances:";
    cin>>msa;
    cout<<"Enter the bonus percentage:";
    cin>>bp;
    cout<<"Enter the monthly tax saving investments:";
    cin>>mtsi;
    atsi=mtsi*12;
    ann_sal=((bms+msa)*12);
    bon=(ann_sal*bp)/100;
    ann_gro_sal=ann_sal+bon;
    if(ann_gro_sal>1000000)
    {
        tax_per=30;
    }
    else if(ann_gro_sal>500000 && ann_gro_sal<=1000000)
    {
        tax_per=20;
    }
    else if(ann_gro_sal>250000 && ann_gro_sal<=500000)
    {
        tax_per=5;
    }
    else
    {
        tax_per=0;
    }
    if(atsi>=150000)
    {
        tax_pay=(ann_gro_sal-400000)*(tax_per/100);
    }
    else
    {
        tax_pay=(ann_gro_sal*tax_per)/100;
    }
    
    ann_net_sal=ann_gro_sal-tax_pay;
    
    
    cout<<"\n__Report__"<<endl<<"Name:"<<name<<endl<<"Employee Id:"<<empid<<endl;
    cout<<"Annual Gross Salary:"<<ann_gro_sal<<endl;
    cout<<"Annual Net Salary:"<<ann_net_sal<<endl;
    cout<<"Tax payable:"<<tax_pay<<endl;
  
    return 0;
}