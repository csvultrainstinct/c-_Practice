#include <bits/stdc++.h>

using namespace std;

class Student{
  public:
   void display(string s,int s1,int s2,int s3){
       int total=s1+s2+s3;
       if(total>60){
           cout<<"1st class"<<endl;
           
       }
       else if(total<60 && total>50){
           cout<<"2nd class"<<endl;
       }
       else if(total>35 && total<50){
           cout<<"Pass"<<endl;
       }
       else{
           cout<<"Fail"<<endl;
       }
       cout<<total<<endl;
       cout<<total/3<<endl;
   }
};

int main(){
    
    string s;
    int s1,s2,s3;
    cin>>s>>s1>>s2>>s3;
    Student obj;
    obj.display(s,s1,s2,s3);
    
    return 0;
}    

