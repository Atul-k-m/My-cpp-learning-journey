#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i = a ; i<=b;i++){
        int num;
        for(num=2;num<b;num++){
            if(i%num==0){
                break;
            }
        }
        if(i==num){
            cout<<i<<endl;

        }
    }
}
   