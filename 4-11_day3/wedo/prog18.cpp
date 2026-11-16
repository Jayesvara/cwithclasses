#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int digit=4827;
    while (digit>0){
        sum=sum +(digit%10);
        digit=digit/10;
    
    }
    cout<<sum;
}