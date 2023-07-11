/*sample input
4

sample output

D 
CD
BCD
ABCD
*/


#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
   // int i = 0;

    for( int  i = 1;i<=num;i++){
        char ch ='A' + num - i;
        for(int j=1;j<=i;j++){
            
            cout<<ch;
            ch++;
        }
       cout<<" "<<endl;
       //ch= ch - i ;
       //ch++;
    }
}