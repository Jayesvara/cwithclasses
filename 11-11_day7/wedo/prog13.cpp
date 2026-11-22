#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;

    while(n>0){
        if(n>=4){
            cout<<"Packed = 4"<<endl;
            n=n-4;
        }
        else{
            cout<<"Packed = "<<n<<endl;
            n=0;
        }
        count++;
    }

    cout<<"Cartons = "<<count;
}