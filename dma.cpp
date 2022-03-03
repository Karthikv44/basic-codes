#include<iostream>
using namespace std;
int main(){

    int size;
    int *ptr;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    ptr=new int[size];

    cout<<"Enter the numbers"<<endl;

    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }
    cout<<"Entered numbers are"<<endl;
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<endl;
    }
    return 0;

    
}
