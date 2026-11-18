#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;

    if(age>=0 && age<=120){
        if(age>=60)
            cout<<"Eligible for senior citizen discount";
        else
            cout<<"Not eligible for senior citizen discount";
    }
    else{
        cout<<"Invalid input";
    }

    return 0;
}