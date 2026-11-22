#include<iostream>
using namespace std;

int main(){
    int r,c,count=0;
    cin>>r>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1||i==r||j==1||j==c){
                cout<<"#";
                count++;
            }
            else
                cout<<".";
        }
        cout<<endl;
    }

    cout<<"Border positions = "<<count;
}