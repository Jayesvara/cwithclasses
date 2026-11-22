#include<iostream>
using namespace std;
int main(){
    string sample="salem is good trichy is better";
    cout<<"the string is: "<<sample<<endl;
    cout<<"the first letter of the string is"<<sample.length()<<endl;
    cout<<"the last letter of the string is"<<sample.front()<<endl;
    cout<<"substring is "<<sample.substr(3,4)<<endl;
    cout<<"the existence of the string is"<<sample.find("is")<<endl;
}