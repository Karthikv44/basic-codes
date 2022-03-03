#include<iostream>
using namespace std;
int main(){

    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={5,6,7,8};

    cout<<"Addition of two Arrays"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<b[i][j]+a[i][j]<<" ";
            
        }
        cout<<endl;
    }
    cout<<"Multiplication of Two arrays"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<b[i][j]*a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}