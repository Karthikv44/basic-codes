#include<iostream>
using namespace std;

int max(int x,int y){
    if(x<y)
        return y;
    else
        return x;    
}
void message(){
    cout<<"The maximum value is ";
}

int main(){
    int a=3, b=5;
    message();
    int c=max(a,b);
    cout<<c<<endl;
    cout<<max(5,6);

}