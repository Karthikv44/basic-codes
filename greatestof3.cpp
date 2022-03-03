#include<iostream>

using namespace std;
int main(){
 
    int x,y,z;
    cout<<"Enter the numbers"<<endl;
    cin>>x>>y>>z;

    if((x>y)&&(x>z))
    {
        cout<<x<<" is greater number";
    }
    else if((y>x)&&(y>z))
    {
        cout<<y<<" is greatest number";
    }
    else
    {
        cout<<z<<" is the greatest number";

    }

    return 0;



}