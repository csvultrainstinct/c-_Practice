#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int sum=1;
    int i=1;
    while(n--){
        cout<<sum<<" ";
        sum+=2*i;
        i++;
    }
    
 return 0;   
}
