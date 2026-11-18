#include<iostream>
using namespace std;

void add(int a,int b,int c){
    cout<<a+b+c;
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;

    add(x,y,z);

    return 0;
}