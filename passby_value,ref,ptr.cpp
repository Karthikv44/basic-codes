#include<iostream>
using namespace std;
void passbyvalue(int x,int y){
    int z=x;
    x=y;
    y=z;
}
void passbyreference(int &m,int &n){
    int z=m;
    m=n;
    n=z;
}
void passbypointer(int *x,int *y){
    int z=*x;
    *x=*y;
    *y=z;
}
int main(){
    int a=7;
    int b=8;
    cout<<"Before Swapping "<<a<<endl<<b<<endl;

    passbypointer(&a,&b);

    cout<<"After Swapping "<<a<<endl<<b<<endl;

}
