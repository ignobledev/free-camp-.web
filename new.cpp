#include<iostream>
using namespace std;
int main(){
int k, r,y,e=3;
int  arr[r][r];
int  prr[y][y];
int  rrr[e][e];
int  trt[k][k];
int i ,j;
for(int i =0; i<r;i++){
for(int j=0; j<r; j++){
cin>>arr[i][j];
}}
for(int i =0; i<y;i++){
for(int j=0; j<y; j++){
cin>>prr[i][j];
}}

for(int i =0; i<e;i++){
for(int j=0; j<e; j++){
cin>>rrr[i][j];
}}
for(int i =0; i<e;i++){
for(int j=0; j<e; j++){
trt[i][j] = arr[i][j]+prr[i][j]+rrr[i][j];
}}
cout<<trt[i][j];
return 0;
}




