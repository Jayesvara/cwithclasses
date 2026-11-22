#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;

    for(int i=10;i<=n;i++){
        int last=i%10;
        int x=i;

        while(x>=10){
            x=x/10;
        }

        if(x==last){
            cout<<i<<endl;
            count++;
        }
    }

    cout<<"Matches = "<<count;
}