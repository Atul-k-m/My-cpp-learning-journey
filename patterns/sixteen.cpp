/*sample input
4

sample output

A 
BC
CDE
DEFG
*/


#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
   // int i = 0;
    char ch = 'A';
    for( int  i = 0;i<num;i++){
        for(int j=0;j<=i;j++){
           
            cout<<ch;
            ch++;
        }
       cout<<" "<<endl;
       ch= ch - i ;
      
    }
}