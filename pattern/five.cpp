/*sample input
3

sample output

123
456
789

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
            num++;
        }
       cout<<num<<endl;
       ++num;
     
    }
}