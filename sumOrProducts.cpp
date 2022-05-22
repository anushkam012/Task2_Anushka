#include<iostream>
using namespace std;
//Hello I'm adding comments
int main() {
    int n,q;
	cin>>n>>q; 
    int sum=0; //initializing
   
    int prod=1; //initializing
    for(int i=1;i<=n;i++){ //using for loop
        if (q==1){ 
            sum = sum +i; 
        }  
        else { 
            prod =prod * i; 
        } 
    } 
    if (q ==1){ 
         cout<<sum<<endl; 
    } 
    else if(q==2){ 
     cout<<prod<<endl; 
    }
    else{
        cout<<-1;
    }
}
