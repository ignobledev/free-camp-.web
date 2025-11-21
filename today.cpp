
#include<iostream>
using namespace std;
int main(){
    int num,a,b,c,d,rev;
    cin>>num;
    a = (num%10);
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    rev = a*1000 + b*100+c*10 +d;
    (num== rev)?cout<<"yes": cout<<"no";
return 0;
}
