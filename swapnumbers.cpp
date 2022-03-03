#include<iostream>
using namespace std;

int main(){

    int x, y;
    x=10;
    y=20;
    cout<<x<<endl;
    cout<<y<<endl;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}