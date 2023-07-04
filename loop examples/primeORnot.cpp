#include<iostream>
using namespace std;
int main(){
    int num , chekno ;
    
    cin>>num;
    for(chekno = 2 ; chekno < num; chekno++){
        if(num%chekno==0){
            cout<<"not prime no";
            break;
        }
      
      
    }
    if(chekno==num){
       
      cout<<"prime no";
    }
}