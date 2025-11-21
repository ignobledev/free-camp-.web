#include <iostream>
#include<algorithm>
using namespace std;
int lcm(int a){
int sum = 0;
 for(int i =0; i<=a; i++){
 if(a%i==0){
 sum = sum + i;}
}
if
(sum== a){
cout<<"perfect";}
else{
cout<<"not perfect";}

}
 
int main(){
int a = 12;
 lcm(a);
return 0;}

