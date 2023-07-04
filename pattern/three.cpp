/*sample input
4

sample output

1234
1234
1234
1234

*/

#include<iostream>
using namespace std;
int main(){
    int inpNum;
    cin>>inpNum;
    
    int j;
    for(int i = 1;i<=inpNum;i++){
        for( j=1;j<inpNum;j++){
            cout<<j;
        }
       cout<<j<<endl;
     
    }
}