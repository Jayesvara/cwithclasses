#include<iostream>
using namespace std;

int main(){
    int n,s=30,count=0,sum=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(s>=60){
            cout<<s<<endl;
            count++;
            sum+=s;
        }
        s+=10;
    }

    cout<<"Qualified = "<<count<<endl;
    cout<<"Qualifying sum = "<<sum;
}