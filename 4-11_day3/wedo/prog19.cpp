#include<iostream>
using namespace std;
int main(){
    int num=253;
    int rev;
    int lastdigit;
    int seconddigit;
    int firstdigit;
    lastdigit=num%10;
    seconddigit=(num/10)%10;
    firstdigit=num/100;
     rev=(lastdigit*100)+(seconddigit*10)+(firstdigit);
     cout<<rev;
}
    
