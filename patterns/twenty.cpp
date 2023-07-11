/*sample input
4

sample output

**** 
***
**
*

*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i = num;i>0;i--){
        for(int space = 2*num-2;space<num;space=space-2){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
             cout<<"*";
        }
       cout<<""<<endl;
    }
}