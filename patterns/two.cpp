/*sample input
4

sample output

1111
2222
3333
4444

*/


#include<iostream>
using namespace std;
int main(){
    int inpNum;
    cin>>inpNum;
    int num = 1;
    for(int i = 1;i<=inpNum;i++){
        for(int j=1;j<inpNum;j++){
            cout<<num;
            
        }
       cout<<num<<endl;
       num++;
    }
}