#include<iostream>
using namespace std;
int main(){
    for(int i =0; i<=8; i++){
       if(i<5){
            for(int j=0; j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<=8/2-i;j++){
                cout<<" *";
            }
            
        }
        if(i>=5){
            for(int j =0;j<=8-i; j++){
                cout<<" ";
           }
        for(int j =0; j<5-(8-i); j++){
            cout<<"* ";
        }}
        cout<<endl;
    }
    
        
    
    return 0;
}