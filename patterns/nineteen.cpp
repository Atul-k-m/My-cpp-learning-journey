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
    for(int i = 1;i<=num;i++){
        for(int j=num;j>=i;j--){
            cout<<"*";
        }
       cout<<" "<<endl;
    }
}