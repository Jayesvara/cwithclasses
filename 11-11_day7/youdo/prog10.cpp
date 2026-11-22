#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        int x=i*3;
        cout<<x<<endl;
        sum+=x;
    }

    cout<<"Marker total = "<<sum;
}