#include<iostream>
using namespace std;
int main(){
    int pens=500;
    int pack=12;
    int totalpacked=pens/pack;
    int rem=pens%pack;
    cout<<totalpacked;
    cout<<rem;
    return 0;
}