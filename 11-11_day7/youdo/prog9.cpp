#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;

    for(int i=2;i<=n;i++){
        int d=0;

        for(int j=1;j<=i;j++){
            if(i%j==0)
                d++;
        }

        if(d==3){
            cout<<i<<endl;
            count++;
        }
    }

    cout<<"Matches = "<<count;
}