#include<iostream>
using namespace std;
int main(){

    int n,first=0,second=1,next;
    cin>>n;

    for(int i=0;i<n;i++){

        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;

    }

}