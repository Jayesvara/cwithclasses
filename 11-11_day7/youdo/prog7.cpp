#include<iostream>
using namespace std;

int main(){
    int n,c,count=0;
    cin>>n>>c;

    while(n>0){
        if(n>=c)
            n=n-c;
        else
            n=0;

        cout<<"Pages remaining = "<<n<<endl;
        count++;
    }

    cout<<"Batches = "<<count;
}