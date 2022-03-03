#include<iostream>
using namespace std;

int add(int a,int b){

    return (a+b);
}

double add(double a,int b){

    return (a+b);
}
double add(int b,double a){

    return (a+b);
}
double add(double b,double a){

    return (a+b);
}
int add(int a,int b,int c){
    return(a+b+c);
}
int main(){
    cout<<add(2,3)<<endl;
    cout<<add(5,6)<<endl;
    cout<<add(5,6.5)<<endl;
    cout<<add(5.5,6)<<endl;
    cout<<add(5.6,6.5)<<endl;
    cout<<add(5,6,7)<<endl;

    return 0;
}