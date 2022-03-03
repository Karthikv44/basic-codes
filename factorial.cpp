#include<iostream>
using namespace std;
int main(){

    int n,temp;
    cout<<"Enter the number to find factorial";
    cin>>n;
    temp=n;

    while(n>1)
    {
        n--;
        temp=temp*n;
    }
    
cout<<temp<<" is the factorial of the number";

    return 0;

}