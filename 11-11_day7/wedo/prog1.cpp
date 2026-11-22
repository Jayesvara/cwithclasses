#include<iostream>
using namespace std;

int main(){
    int n,total=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        int x=i*4;
        cout<<x<<endl;
        total+=x;
    }

    cout<<"Total = "<<total;
}