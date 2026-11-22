#include<iostream>
using namespace std;

int main(){
    int r,c,sum=0,max=0;
    cin>>r>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            int x=i*j;
            cout<<x<<" ";
            sum+=x;

            if(x>max)
                max=x;
        }
        cout<<endl;
    }

    cout<<"Sum = "<<sum<<endl;
    cout<<"Maximum = "<<max;
}