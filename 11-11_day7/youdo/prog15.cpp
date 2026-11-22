#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        int x=i;

        while(x>0){
            int d=x%10;

            if(d==2)
                count++;

            x=x/10;
        }
    }

    cout<<"Digit 2 appearances = "<<count;
}