#include<iostream>

using namespace std;
int main(){

    int n;
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                cout<<"leap year";

            }
            else{
                cout<<"not a leap year";
            }
        }    
        else{
            cout<<"leap year";
        }
    }    
    else{
        cout<<"not a leap year";
    }
        
    
}