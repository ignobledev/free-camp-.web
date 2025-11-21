#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    ((n%4==0)&&(n%100!=0))? cout<<"leap year":
     (n%400==0)? cout<<"leap year ":cout<<"not leap year";
return 0;
}




