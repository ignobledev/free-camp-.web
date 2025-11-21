#include<iostream>
using namespace std;
int main(){
    float a ;
    int year;
    int num,q,v,s,d;
    cin>>num;
    cin>>a;
    int r,t;
    cin>>r>>t;
    cin>>year;
    r = r+t;
    t=r-t;
    r=r-t;
    cout<<r<<","<<t<<endl;
    q = (num%10);
    v = (num%10)%10;
    s = (num%100)%10;
    d = (num%1000)%10;
    int sum= q+v+s+d;
    cout<<sum<<endl;

    (year%400==0)||(year%4==0&&year%100!=0)?
    cout<<year<<"is leap year"<<endl:cout<<year<<"is not aleap year"<<endl;

    
    float da=( 25.0/100)*a;

   float hra=(15.0/100)*a;

   
    float basic =( a + da + hra);
     
    float pd=(10.0/100);
     
     float net= basic - (basic*pd);
     cout<<net;
     return 0;
}
    
