#include<iostream>
using namespace std;

int main(){
    int n,r=0;
    cin>>n;

    while(n>=10){
        int p=1;

        while(n>0){
            int d=n%10;
            p=p*d;
            n=n/10;
        }

        n=p;
        r++;
    }

    cout<<"Final digit = "<<n<<endl;
    cout<<"Rounds = "<<r;
}