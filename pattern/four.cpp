/*sample input
4

sample output

4321
4321
4321
4321

*/
#include<iostream>
using namespace std;
int main(){
    int inpNum;
    cin>>inpNum;
    
    int j;
    for(int i = 1;i<=inpNum;i++){
        for( j=inpNum;j>1;j--){
            cout<<j;
        }
       cout<<j<<endl;
     
    }
}