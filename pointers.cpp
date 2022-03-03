#include<iostream>
using namespace std;
int main(){
    int a= 5;
    int *p;
    p=&a;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    
    *p= 7;
    cout<<*p;
    return 0;
}