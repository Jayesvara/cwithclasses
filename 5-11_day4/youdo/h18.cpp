#include<iostream>
using namespace std;
int main(){
int n=7351;
int s=0;
s=s+n%10;
n=n/10;
s=s+n%10;
n=n/10;
s=s+n%10;
n=n/10;
s=s+n%10;
cout<<s;
return 0;
}