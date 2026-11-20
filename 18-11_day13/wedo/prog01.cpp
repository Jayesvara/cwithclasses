#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    int *ptr= &marks;
    cout<<*ptr;
    if (ptr==&marks) {
        cout<<"same address";
    }
    else {
        cout<<"different";
    }
}