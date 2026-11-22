#include<iostream>
using namespace std;

int main(){
    int n,sum=0,count=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2!=0)
            sum+=i*i;
        else
            count++;
    }

    cout<<"Odd square sum = "<<sum<<endl;
    cout<<"Even count = "<<count;
}