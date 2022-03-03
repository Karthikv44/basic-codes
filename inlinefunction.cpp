#include<iostream>
using namespace std;
inline int add(int x,int y,int z=5,int m=2){
    return(x+y+z+m);
}
int main(){
    cout<<add(5,6,7)<<endl;
    //default parameter
    cout<<add(3,4,5,6);
    return 0;
}